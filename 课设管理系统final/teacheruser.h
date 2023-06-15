#pragma once

#include <QWidget>
#include "ui_teacheruser.h"

class teacheruser : public QWidget
{
	Q_OBJECT

public:
	teacheruser(QWidget *parent = nullptr);
	~teacheruser();

private:
	Ui::teacheruserClass ui;
};
