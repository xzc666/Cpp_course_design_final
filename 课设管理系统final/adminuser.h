#pragma once

#include <QWidget>
#include "ui_adminuser.h"

class adminuser : public QWidget
{
	Q_OBJECT

public:
	adminuser(QWidget *parent = nullptr);
	~adminuser();

private:
	Ui::adminuserClass ui;
};
