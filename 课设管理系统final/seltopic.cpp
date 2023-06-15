#include "seltopic.h"
#include<fstream>
using namespace std;
#include"globalFile.h"
#include<qmessagebox.h>

seltopic::seltopic(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	qDebug() << "%!!";
	QMultiMap<QString, QString> map1;//multimap储存课程信息
	QStringList listkey;//储存总课程名
	QStringList listval;//储存每个课程的选题名
	QList<QString> listvalue;
	ifstream ifs;
	//用于获取数据的暂存string
	string coursename;
	string topicname;
	ifs.open(TOPIC_LIST, ios::in);
	if (!ifs.is_open())
	{
		qDebug("文件不存在");
		ifs.close();
	}
	//数据读取并插入进容器
	while (ifs >> coursename && ifs >> topicname)
	{
		map1.insertMulti(QString::fromStdString(coursename), QString::fromStdString(topicname));
	};
	//获取课程的名称
	listkey = map1.uniqueKeys();
	//在combobox中添加课程选项
	for (int i = 0; i < listkey.size(); i++) {
		ui.btn_classname->addItem(listkey[i]);
		qDebug() << "%%";
	}
	//检测到变化，更改第二格
	connect(ui.btn_classname, &QComboBox::highlighted, [=]() {
		ui.btn_topicval->clear();
		QString data;
		data = ui.btn_classname->currentText();
		ui.btn_topicval->addItems(map1.values(data));
		});
	connect(ui.btn_classname, &QComboBox::currentTextChanged, [=]() {
		ui.btn_topicval->clear();
		QString data;
		data = ui.btn_classname->currentText();
	ui.btn_topicval->addItems(map1.values(data));
		});
	connect(ui.btn_save, &QPushButton::clicked, [=]() {
		if (save()) {
			QMessageBox::information(this, "成功", "选题成功");
			this->hide();
			delete this;
		}
		else {
			QMessageBox::critical(this, "失败", "文件或记录不存在，请重试");
		}
		});
	connect(ui.btn_exit, &QPushButton::clicked, [=]() {
		this->hide();
		delete this;
		});



}

seltopic::~seltopic()
{}
