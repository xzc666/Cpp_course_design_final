#pragma once

#include <QWidget>
#include"globalFile.h"
#include "ui_seltopic.h"
#include"student.h"
#include<fstream>
using namespace std;

class seltopic : public QWidget
{
	Q_OBJECT

public:
	seltopic(QWidget *parent = nullptr);
	~seltopic();

public slots:
	bool save() {
		string usernow;
		fstream ifs;

		//读取当前用户
		ifs.open(TEMPLE_FILE, ios::in);
		while (!ifs.is_open()) {
				qDebug() << "文件不存在";
				ifs.close();
				return false;
			}
		ifs >> usernow;
		ifs.close();

		//读取所有成员，查找当前用户信息并进行储存
		ifs.open(STUDENT_LIST, ios::in);
		if (!ifs.is_open())
		{
			qDebug("文件不存在");
			ifs.close();
		}
		Student userstu;
		string str;//要删除的数据
		while (ifs >> userstu.StuID && ifs >> userstu.StuName && ifs >> userstu.StuClass && ifs >> userstu.StuCollege && ifs >> userstu.Course && ifs >> userstu.Topic) {
			if (userstu.StuID == usernow)
			{
				str = userstu.StuID + " " + userstu.StuName + " " + userstu.StuClass + " " + userstu.StuCollege + " " + userstu.Course + " " + userstu.Topic;
				break;
			}
		}
		ifs.close();
		userstu.Course = ui.btn_classname->currentText().toStdString();
		userstu.Topic = ui.btn_topicval->currentText().toStdString();
		//已更改当前用户数据
		string strrr;//要添加的量
		strrr = userstu.StuID + " " + userstu.StuName + " " + userstu.StuClass + " " + userstu.StuCollege + " " + userstu.Course + " " + userstu.Topic;


		//重写文件
		ifs.open(STUDENT_LIST, ios::in);
		while (!ifs.is_open()) {
			qDebug() << "文件不存在";
			ifs.close();
			return false;
		}
		//数据入容器
		list<string> ltop;
		string strt;//temp变量
		while (getline(ifs, strt)) {
			ltop.push_back(strt);
		}



		//查找
		list<string>::iterator iter;
		iter = std::find(ltop.begin(), ltop.end(), str);

		if (iter != ltop.end())
		{
			//yes
			ltop.remove(str);
			ltop.push_back(strrr);
			//删除旧记录，增加新纪录之后遍历输出到文件
			ifs.close();
			


			ifs.open(STUDENT_LIST, ios::in | ios::out | ios::trunc);
			for (list<string>::iterator it = ltop.begin(); it != ltop.end(); it++) {
				ifs << *it << endl;
			}
			ifs.close();
			qDebug() << "成功删除";
			return true;
		}
		else
		{
			//no
			return false;
		}


	}
private:
	Ui::seltopicClass ui;
};
