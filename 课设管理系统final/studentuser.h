#pragma once

#include<QtWidgets/qwidget.h>
#include<qstring.h>
#include<fstream>
#include<Qdebug>
#include<qmessagebox.h>
#include "ui_studentuser.h"

#include"student.h"
#include"globalFile.h"
#include"login.h"
//#include"seeAllcourse.h"

class studentuser : public QWidget
{
	Q_OBJECT

public:
	void seeAllCourse();
	studentuser(QWidget *parent = nullptr);
	~studentuser();

public slots:
	string seemy() {
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
		while (ifs >> userstu.StuID && ifs >> userstu.StuName && ifs >> userstu.StuClass && ifs >> userstu.StuCollege && ifs >> userstu.Course && ifs >> userstu.Topic) {
			if (userstu.StuID == user1)break;
		}
		//qDebug() << userstu.StuName;
		string str;
		str = "课设名称：" + userstu.Course + "   选题名称：" + userstu.Topic + "   ";
		return str;
	}
private:
	Ui::studentuserClass ui;
};
