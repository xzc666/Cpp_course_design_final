#pragma once


#include "studentuser.h"
#include"seeAllcourse.h"
#include"seltopic.h"

using namespace std;
studentuser::studentuser(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	ifstream ifs;
	QString title;
	string user1;
	QString user;

	Student userstu;
	ifs.open(TEMPLE_FILE, ios::in);
	if (!ifs.is_open())
	{
		qDebug("文件不存在");
		ifs.close();
	}
	ifs >> user1;
	ifs.close();

	user = QString::fromStdString(user1);
	title = "欢迎您，" + user + "同学";	
	
	ifs.open(STUDENT_LIST, ios::in);
	if (!ifs.is_open())
	{
		qDebug("文件不存在");
		ifs.close();
	}
	while (ifs >> userstu.StuID && ifs >> userstu.StuName && ifs >> userstu.StuClass && ifs >> userstu.StuCollege && ifs>>userstu.Course &&ifs>>userstu.Topic ){
		if (userstu.StuID == user1)break;
	}
	//qDebug() << userstu.StuName;
	string str;
	str = "课设名称：" + userstu.Course + "   选题名称：" + userstu.Topic+"   ";


	
	setWindowTitle(title);
	ui.label_name_val->setText(QString::fromUtf8(userstu.StuName));
	ui.label_class_val->setText(QString::fromStdString(userstu.StuClass));
	ui.label_ID_val->setText(QString::fromStdString(userstu.StuID));
	ui.label_college_val->setText(QString::fromStdString(userstu.StuCollege));
	connect(ui.btn_exit, &QPushButton::clicked, [=]() {
		login* login1 = new login;
		this->hide();
		login1->show();
		delete[] this;
		});
	connect(ui.btn_see_all, &QPushButton::clicked, [=]() {
		//查看选题列表
		seeAllcourse* seeAllCourse1=new seeAllcourse;
		seeAllCourse1->show();
		});
	connect(ui.btn_see_my, &QPushButton::clicked, [=]() {
		//查看我的选题


		QMessageBox::information(this, "我的选题", QString::fromStdString(seemy()));

		});
	connect(ui.btn_begin, &QPushButton::clicked, [=]() {
		//选题/修改选题
		seltopic* top1 = new seltopic;
		top1->show();

		});

}

studentuser::~studentuser()
{}

void studentuser::seeAllCourse() {

};
