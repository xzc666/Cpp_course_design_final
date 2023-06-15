#include "addtopic.h"
#include"globalFile.h"
#include"student.h"
#include<fstream>
#include<qmessagebox.h>
using namespace std;

addtopic::addtopic(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	connect(ui.btn_save, &QPushButton::clicked, [=]() {
		if (addaddtopic()) {
			//成功
			QMessageBox::information(this, "成功", "添加成功");
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

addtopic::~addtopic()
{}
