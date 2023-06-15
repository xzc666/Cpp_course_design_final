#include "teacheruser.h"
#include"login.h"
#include<fstream>
#include"addtopic.h"
using namespace std;
#include"globalFile.h"
#include"teacher.h"
#include"seeAllcourse.h"
#include"deltopic.h"
#include"seestuinfo.h"

teacheruser::teacheruser(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	ifstream ifs;
	QString title;
	string user1;
	QString user;
	ifs.open(TEMPLE_FILE, ios::in);
	if (!ifs.is_open())
	{
		qDebug("文件不存在");
		ifs.close();
	}
	ifs >> user1;
	ifs.close();
	


	ifs.clear();
	Teacher usertch;

	ifs.open(TEACHER_LIST, ios::in);
	if (!ifs.is_open())
	{
		qDebug("文件不存在");
		ifs.close();
	}
	
	while (ifs >> usertch.TchID && ifs >> usertch.TchName && ifs >> usertch.TchColloge) {
		if (usertch.TchID == user1)break;
	}
	title = "欢迎您：" + QString::fromStdString(usertch.TchName) + "老师";
	setWindowTitle(title);
	ui.label_id->setText(QString::fromStdString(usertch.TchID));
	ui.label_name->setText(QString::fromStdString(usertch.TchName));
	ui.label_college->setText(QString::fromStdString(usertch.TchColloge));







	connect(ui.add_topic, &QPushButton::clicked, [=]() {
		//添加选题
		addtopic* add1 = new addtopic;
		add1->show();

		});
	connect(ui.del_topic, &QPushButton::clicked, [=]() {
		//删除选题
		deltopic* del1 = new deltopic;
		del1->show();

		});
	connect(ui.see_topic, &QPushButton::clicked, [=]() {
		//查看选题
		seeAllcourse* seeallcourse1 = new seeAllcourse;
		seeallcourse1->show();
		});
	connect(ui.see_stuinfo, &QPushButton::clicked, [=]() {
		//查看学生信息
		seestuinfo* see = new seestuinfo;
		see->show();
		});






	connect(ui.exit, &QPushButton::clicked, [=]() {
		this->hide();
		login* login1 = new login;
		login1->show();
		delete this;
		});
}

teacheruser::~teacheruser()
{}
