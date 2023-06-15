#pragma once

#include <QWidget>
#include<QtCore/qstringlist.h>
#include<fstream>
#include<QtCore/qstring.h>
#include<string>
#include<QtCore/qmap.h>
#include<QtCore/qlist.h>

#include"globalFile.h"
#include "ui_seeAllcourse.h"


class seeAllcourse : public QWidget
{
	Q_OBJECT

public:
	seeAllcourse(QWidget *parent = nullptr);
	~seeAllcourse();

private:
	Ui::seeAllcourseClass ui;
};
