#include "seetchinfo.h"
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
#include"teacher.h"
using namespace std;

seetchinfo::seetchinfo(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	QList<QString> list1;
	QMultiMap<QString, QString> map1;
	string str;
	Teacher userstu;
	fstream ifs;
	QStringList listkey;//储存总课程名
	ifs.open(TEACHER_LIST, ios::in);

	if (!ifs.is_open())
	{
		qDebug("文件不存在");
		ifs.close();
	}
	while (ifs >> userstu.TchID && ifs >> userstu.TchName && ifs >> userstu.TchColloge ) {
		str = userstu.TchID + " " + userstu.TchName + " " + userstu.TchColloge;
		list1.push_back(QString::fromStdString(str));
		map1.insertMulti(QString::fromStdString(userstu.TchColloge), QString::fromStdString(str));
		map1.insertMulti("全部", QString::fromStdString(str));
	}
	ui.listWidget->addItems(list1);
	listkey = map1.uniqueKeys();

	qDebug() << listkey;
	//在combobox中添加单位选项
	for (int i = 0; i < listkey.size(); i++) {
		ui.btn_class->addItem(listkey[i]);
		qDebug() << "%%";
	}

	connect(ui.btn_class, &QComboBox::currentTextChanged, [=]() {
		//查看选题列表

		ui.listWidget->clear();
	QString data;
	data = ui.btn_class->currentText();
	; //(const QList<QString>)
	ui.listWidget->addItems(map1.values(data));

		});

	connect(ui.btn_exit, &QPushButton::clicked, [=]() {
		delete[] this;
		});
}

seetchinfo::~seetchinfo()
{}
