#pragma once

#include"student.h"
#include <QWidget>
#include"globalFile.h"
#include "ui_addtopic.h"
#include<fstream>
#include <algorithm>
class addtopic : public QWidget
{
	Q_OBJECT

public:
	addtopic(QWidget *parent = nullptr);
	~addtopic();

public slots:
	bool addaddtopic() {
		string class_name1;
		string topic_name1;
		string str;//要删除的内容
		//获取要删除的内容
		class_name1 = ui.class_name->text().toStdString();
		topic_name1 = ui.topic_val->text().toStdString();
		str = class_name1 + " " + topic_name1;
		fstream ifs;
		ifs.open(TOPIC_LIST, ios::out|ios::app);
		while (!ifs.is_open()) {
			qDebug() << "文件不存在";
			ifs.close();
			return false;
		}
		ifs << str<<endl;
		ifs.close();
		return true;

	};

private:
	Ui::addtopicClass ui;
};
