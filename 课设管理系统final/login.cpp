#pragma once
#include"studentuser.h"
#include"adminuser.h"
#include"teacheruser.h"
#include"globalFile.h"
#include "login.h"
#include<iostream>
#include<qmessagebox.h>
#include<string>
#include<fstream>
#include<qdebug.h>

using namespace std;

//登录判断，从三个文档分别读取数据，判断是否输入正确的用户名密码


bool Login(QString ID, QString Pwd, int mode) {
    ifstream ifs;
    ofstream ofs;
    string id = ID.toStdString();
    string pwd = Pwd.toStdString();
    string mID;
    string mpwd;
    //mode select
    //switch效率更高
    if (mode == 0)
    {
        ifs.open(STUDENT_LOGIN_FILE, ios::in);
    }
    else if (mode == 1)
    {
        ifs.open(TEACHER_LOGIN_FILE, ios::in);
    }
    else if (mode == 2)
    {
        ifs.open(ADMIN_LOGIN_FILE, ios::in);
    }
    //文件操作
    if (!ifs.is_open())
    {
        qDebug("文件不存在");
        ifs.close();
        return false;
        qDebug() << "test02";
    }
    ifs.clear();
    qDebug() << "test01";
    //账号验证
    qDebug() << "test# "<< id<<"&"<<pwd;
    while (ifs>>mID && ifs>>mpwd) {
        qDebug() << "test% "<<mID<<"&"<<mpwd;
        if (mID == id && mpwd == pwd)
        {
            qDebug() << "test05";
            ofs.open(TEMPLE_FILE, ios::out);
            if (!ofs.is_open())
            {
                qDebug() << "test07";
                qDebug("文件不存在");
                ofs.close();
                ifs.close();
                return false;
            }
            qDebug() << "test08";
            ofs << mID;

            ifs.close();
            ofs.close();
            return true;
        }

    }
    ifs.close();
    ofs.close();
    return false;
};


login::login(QWidget *parent)
    : QWidget(parent)
{

    //ui设置
    ui.setupUi(this);
    setWindowTitle("课设选题系统");
    
    
    //登录触发
    connect(ui.pushButton, &QPushButton::clicked, [=]() {
        if (ui.radioButton_student->isChecked()) {
            if (!Login(ui.lineEdit_ID->text(),ui.lineEdit_password->text(),0)) {//stuLogin()
                QMessageBox::critical(this, "错误", "学生登陆错误。学工号或密码错误。");
                
            }
            else {
                
                QMessageBox::information(this, "登陆成功", "登录成功");
                this->hide();
                studentuser* studentUser1 = new studentuser;
                studentUser1->show();
                delete this;
               
            }
        }
        else if (ui.radioButton_teacher->isChecked()) {
            if (!Login(ui.lineEdit_ID->text(), ui.lineEdit_password->text(), 1)) {//stuLogin()
                QMessageBox::critical(this, "错误", "教师登陆错误。学工号或密码错误。");

            }
            else {
               
                QMessageBox::information(this, "登陆成功", "登录成功");
                this->hide();
                teacheruser* teacheruser1 = new teacheruser;
                teacheruser1->show();
                delete this;
                
            }
        }
        else if (ui.radioButton_manager->isChecked()) {
            if (!Login(ui.lineEdit_ID->text(), ui.lineEdit_password->text(), 2)) {//stuLogin()
                QMessageBox::critical(this, "错误", "管理员登陆错误。学工号或密码错误。");

            }
            else {
                
                QMessageBox::information(this, "登陆成功", "登录成功");
                this->hide();
                adminuser* adminuser1 = new adminuser;//改成admin类
                adminuser1->show();
                delete this;
                
            }
        }
        else {
            QMessageBox::critical(this, "错误", "请选择登陆身份");
        }
        });



}

login::~login()
{}
