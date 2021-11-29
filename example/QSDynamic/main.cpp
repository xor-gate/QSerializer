#include <QCoreApplication>
#include "../classes.h"

#include <QFile>
#include <QDebug>

void json_example() {
    qDebug()<<"====================================SERIALIZATION JSON====================================";
    DynamicRoot root;

	auto export0   = DynamicExportElement();
	export0.type   = "A";
	auto configA   = new DynamicConfigA();
	configA->stringA = "string for A";
	export0.config = configA;

	root.exports.append(export0);

	auto export1   = DynamicExportElement();
	export0.type   = "B";
	auto configB   = new DynamicConfigB();
	configB->stringB = "string for B";
	export0.config = configB;

	root.exports.append(export0);

	auto jsonBytes = QSerializer::toByteArray(root.toJson());

    qDebug()<< jsonBytes.constData();

	DynamicRoot rootImport;
	rootImport.fromJson(jsonBytes);

	auto jsonBytesAfterImport = QSerializer::toByteArray(rootImport.toJson());
	qDebug() << jsonBytesAfterImport.constData();
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug()<<"====================================SERIALIZE EXAMPLES====================================";

    json_example();
}
