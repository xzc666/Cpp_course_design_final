#include "adminuser.h"
#include"login.h"
#include"addtopic.h"
#include<fstream>
#include"globalFile.h"
#include"deltopic.h"
#include<qmessagebox.h>
#include"seestuinfo.h"
#include"seetchinfo.h"
#include"contactdev.h"
using namespace std;


adminuser::adminuser(QWidget *parent)
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
		user = QString::fromStdString(user1);
		title = "管理员用户：" + user ;
		setWindowTitle(title);
		ui.admin_name->setText(user);


		


		connect(ui.add_stuinfo, &QPushButton::clicked, [=]() {
			//添加学生信息
			});
		connect(ui.add_stuuser, &QPushButton::clicked, [=]() {
			//添加学生账号
			});
		connect(ui.add_tchinfo, &QPushButton::clicked, [=]() {
			//添加教师信息
			});
		connect(ui.add_tchuser, &QPushButton::clicked, [=]() {
			//添加教师账号
			});
		connect(ui.add_topic, &QPushButton::clicked, [=]() {
			//添加选题
			addtopic* add1 = new addtopic;
			add1->show();
			});
		connect(ui.contect_dev, &QPushButton::clicked, [=]() {
			//联系开发者
			contactdev* con = new contactdev;
			con->show();
			});
		connect(ui.del_topic, &QPushButton::clicked, [=]() {
			//删除选题
			deltopic* del1 = new deltopic;
			del1->show();
			});
		connect(ui.see_stuinfo, &QPushButton::clicked, [=]() {
			//查看学生信息
			seestuinfo* see = new seestuinfo;
			see->show();
			});
		connect(ui.see_tchinfo, &QPushButton::clicked, [=]() {
			//查看教师信息
			seetchinfo* see = new seetchinfo;
			see->show();
			});
		connect(ui.set_stuinfo, &QPushButton::clicked, [=]() {
			//删除学生信息
			});
		connect(ui.set_stupass, &QPushButton::clicked, [=]() {
			//删除学生账号
			});
		connect(ui.set_tchinfo, &QPushButton::clicked, [=]() {
			//删除教师信息
			});
		connect(ui.set_tchpass, &QPushButton::clicked, [=]() {
			//删除教师账号
			});


	connect(ui.exit, &QPushButton::clicked, [=]() {
		this->hide();
	    login* login1 = new login;
		login1->show();
		delete this;
		});

}

adminuser::~adminuser()
{}
