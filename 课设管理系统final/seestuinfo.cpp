#include "seestuinfo.h"
#include<string>
#include<qlist.h>
#include<map>
#include <QWidget>
#include<QtCore/qstringlist.h>
#include<fstream>
#include<QtCore/qstring.h>
#include<string>
#include<QtCore/qmap.h>
#include<QtCore/qlist.h>
#include"student.h"
#include<fstream>
#include"globalFile.h"
#include"qstringlist.h"
using namespace std;


seestuinfo::seestuinfo(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	QList<QString> list1;
	QMultiMap<QString, QString> map1;
	string str;
	Student userstu;
	fstream ifs;
	QStringList listkey;//储存总课程名
	ifs.open(STUDENT_LIST, ios::in);

	if (!ifs.is_open())
	{
		qDebug("文件不存在");
		ifs.close();
	}
	while (ifs >> userstu.StuID && ifs >> userstu.StuName && ifs >> userstu.StuClass && ifs >> userstu.StuCollege && ifs >> userstu.Course && ifs >> userstu.Topic) {
		str = userstu.StuID + " " + userstu.StuName + " " + userstu.StuClass + " " + userstu.StuCollege + " " + userstu.Course + " " + userstu.Topic;
		list1.push_back(QString::fromStdString(str));
		map1.insertMulti(QString::fromStdString(userstu.StuClass), QString::fromStdString(str));
		map1.insertMulti("全部", QString::fromStdString(str));
	}
	ui.listWidget->addItems(list1);
	listkey = map1.uniqueKeys();

	qDebug() << listkey;
	//在combobox中添加班级选项
	for (int i = 0; i < listkey.size(); i++) {
		ui.btn_class->addItem(listkey[i]);
		qDebug() << "%%";
	}

	connect(ui.btn_class, &QComboBox::currentTextChanged, [=]() {
		//查看选题列表

		ui.listWidget->clear();
	QString data;
	data = ui.btn_class->currentText();

	ui.listWidget->addItems(map1.values(data));

		});
	
	connect(ui.btn_exit, &QPushButton::clicked, [=]() {
		delete[] this;
		});


}

seestuinfo::~seestuinfo()
{}
