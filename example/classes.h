#ifndef CLASSES_H
#define CLASSES_H
#include "../../src/qserializer.h"
#include <QQueue>
#include <QStack>

class Parent : public QSerializer{
    Q_GADGET
    QS_SERIALIZABLE
    public:
    Parent(){ }
    Parent(int age, const QString & name, bool isMale)
        : age(age),
          name(name),
          male(isMale) { }
    QS_FIELD(int, age)
    QS_FIELD(QString, name)
    QS_FIELD(bool, male)
};

class Student : public QSerializer {
    Q_GADGET
    QS_SERIALIZABLE
    public:
    Student() {}
    Student(int age, const QString & name, QStringList links, Parent mom, Parent dad)
        : age(age),
          name(name),
          links(links)
    {
        parents.append(mom);
        parents.append(dad);
    }
    QS_FIELD(int, age)
    QS_FIELD(QString, name)
    QS_COLLECTION(QList, QString, links)
    QS_COLLECTION_OBJECTS(QList, Parent, parents)
};

class Dictionaries : public QSerializer {
    Q_GADGET
    QS_SERIALIZABLE
    QS_QT_DICT(QHash, QString, QString, qt_hash)
    QS_QT_DICT(QMap, QString, QString, qt_map)
    QS_QT_DICT_OBJECTS(QMap, QString, Student, qt_map_objects);
    QS_STL_DICT(std::map, int, QString, std_map)
    QS_STL_DICT_OBJECTS(std::map, QString, Student, std_map_objects);
};


class Field : public QSerializer {
    Q_GADGET
    QS_SERIALIZABLE
    QS_FIELD(int, digit)
    QS_FIELD(QString, string)
    QS_FIELD(bool, flag)
    QS_FIELD(double, d_digit)
};


class Collection : public QSerializer{
    Q_GADGET
    QS_SERIALIZABLE
    QS_COLLECTION(QVector, int, vector)
    QS_COLLECTION(QList, QString, list)
    QS_COLLECTION(QStack, double, stack)
};


class CustomObject : public QSerializer {
    Q_GADGET
    QS_SERIALIZABLE
    QS_FIELD(int, digit)
    QS_COLLECTION(QVector, QString, string)
};


class CollectionOfObjects : public QSerializer{
    Q_GADGET
    QS_SERIALIZABLE
    QS_COLLECTION_OBJECTS(QVector, CustomObject, objects)
};


class General : public QSerializer{
    Q_GADGET
    QS_SERIALIZABLE
    QS_OBJECT(Field, field)
    QS_OBJECT(Collection, collection)
    QS_OBJECT(CustomObject, object)
    QS_OBJECT(CollectionOfObjects, collectionObjects)
    QS_OBJECT(Dictionaries, dictionaries)
};

class TestXmlObject : public QSerializer{
    Q_GADGET
    QS_SERIALIZABLE
    QS_FIELD(int, digit)
    QS_COLLECTION(QVector, QString, string)
};

class TestXml : public QSerializer{
    Q_GADGET
    QS_SERIALIZABLE
    QS_FIELD(int, field)
    QS_COLLECTION(QVector, int, collection)
    QS_OBJECT(TestXmlObject, object)
};

class DynamicConfig : public QSerializer {
	Q_GADGET
	QS_SERIALIZABLE
public:
	virtual ~DynamicConfig() {}
};

class DynamicConfigA : public DynamicConfig {
	Q_GADGET
	QS_SERIALIZABLE
	QS_FIELD(QString, stringA)
};

class DynamicConfigB : public DynamicConfig {
	Q_GADGET
	QS_SERIALIZABLE
	QS_FIELD(QString, stringB)
};

class DynamicExportElement : public QSerializer {
	Q_GADGET
	QS_SERIALIZABLE
	QS_FIELD(QString, type)
	public:
		~DynamicExportElement() {
			if (config) {
				delete config;
				config = nullptr;
			}
		}
		DynamicConfig *config;
};

class DynamicRoot : public QSerializer {
	Q_GADGET
	QS_SERIALIZABLE
    Q_PROPERTY(QJsonValue exports READ get_json_exports WRITE set_json_exports)
	public:
		QList<DynamicExportElement> exports;
    private:                                                                                
        QJsonValue get_json_exports() const {                                                
            QJsonArray val;                                                                 
            for(int i = 0; i < exports.size(); i++) {
				const auto item = exports.at(i);
				auto jsonItem = item.toJson();
				if (item.type == "A") {
					auto config = dynamic_cast<const DynamicConfigA *>(item.config);
					jsonItem["config"] = config->toJson();
				} else if (item.type == "B") {
					auto config = dynamic_cast<const DynamicConfigB *>(item.config);
					jsonItem["config"] = config->toJson();
				}
				val.append(jsonItem);
			}
            return QJsonValue::fromVariant(val);                                            
        }                                                                                   
        void set_json_exports(const QJsonValue & varname) {                                  
            if(!varname.isArray())                                                          
                return;                                                                     
            exports.clear();                                                                   
            QJsonArray val = varname.toArray();                                             
            for(int i = 0; i < val.size(); i++) {                                           
                DynamicExportElement tmp; 
                tmp.fromJson(val.at(i)); 

				if (tmp.type == "A") {
					auto config = new DynamicConfigA();
					config->fromJson(val.at(i)["config"]);
					tmp.config = config;
				} else if (tmp.type == "B") {
					auto config = new DynamicConfigB();
					config->fromJson(val.at(i)["config"]);
					tmp.config = config;
				}

                exports.append(tmp);                                                           
            }                                                                               
        }                                                                                   
};

#endif // CLASSES_H
