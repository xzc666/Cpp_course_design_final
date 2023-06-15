
#include "seeAllcourse.h"//查看选题列表
#include<qlist.h>
using namespace std;

seeAllcourse::seeAllcourse(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	setWindowTitle("查看所有课题");
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
	listkey= map1.uniqueKeys();

	qDebug() << listkey;
	//在combobox中添加课程选项
	for (int i = 0; i < listkey.size(); i++) {
		ui.comboBox->addItem(listkey[i]);
		qDebug() << "%%";
	}

	connect(ui.btn_search, &QPushButton::clicked, [=]() {
		//查看选题列表

		ui.listWidget->clear();
		QString data;
		data = ui.comboBox->currentText();
		; //(const QList<QString>)
		ui.listWidget->addItems(map1.values(data));
		
		});

	connect(ui.btn_exit, &QPushButton::clicked, [=]() {
		delete[] this;
		});

	
}

seeAllcourse::~seeAllcourse()
{}
