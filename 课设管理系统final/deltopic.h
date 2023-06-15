#pragma once
#include"student.h"
#include <QWidget>
#include"globalFile.h"
#include "ui_deltopic.h"
#include<fstream>
#include <algorithm>
using namespace std;



class deltopic : public QWidget
{
	Q_OBJECT

public:
	deltopic(QWidget *parent = nullptr);
	~deltopic();
	
public slots:
	bool deletetopic() {

		string class_name1;
		string topic_name1;
		string str ;//要删除的内容
		//获取要删除的内容
		 class_name1= ui.class_name->text().toStdString();
		 topic_name1= ui.topic_val->text().toStdString();
		 str = class_name1 + " " + topic_name1;
		 //读取整个文件，将数据放在容器中
		fstream ifs;
		ifs.open(TOPIC_LIST, ios::in);
		while (!ifs.is_open()) {
			qDebug() << "文件不存在";
			ifs.close();
			return false;
		}

		//数据入容器
		list<string> ltop;
		string strt;//temp变量
		while (getline(ifs,strt)) {
			ltop.push_back(strt);
		}
		//查找
		list<string>::iterator iter;
		iter = std::find(ltop.begin(), ltop.end(), str);
		
		if (iter != ltop.end())
		{
		//yes
			ltop.remove(str);
			//删除此条记录之后遍历输出到文件
			ifs.close();


			ifs.open(TOPIC_LIST, ios::in | ios::out | ios::trunc);
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

	


		
		

	};
private:
	Ui::deltopicClass ui;
};

