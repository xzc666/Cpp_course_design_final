#pragma once

#include <QWidget>
#include "ui_seestuinfo.h"

class seestuinfo : public QWidget
{
	Q_OBJECT

public:
	seestuinfo(QWidget *parent = nullptr);
	~seestuinfo();

private:
	Ui::seestuinfoClass ui;
};
