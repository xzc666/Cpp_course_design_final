#include "deltopic.h"
#include"globalFile.h"
#include"student.h"
#include<fstream>
#include<qmessagebox.h>
using namespace std;

deltopic::deltopic(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	

	

	

	connect(ui.btn_save, &QPushButton::clicked, [=]() {
		if (deletetopic()) {
			//成功
			QMessageBox::information(this,"成功","删除成功");
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

deltopic::~deltopic()
{}

//connect(ui.btn_save, &QPushButton::clicked, [=]() {
//	if (deletetopic()) {
//		//成功
//		QMessageBox::critical(this, "成功", "删除成功");
//		this->hide();
//		delete this;
//	}
//	else {
//		//失败
//		QMessageBox::information(this, "错误", "删除失败");
//	}});