#pragma once

#include <QWidget>
#include "ui_seetchinfo.h"

class seetchinfo : public QWidget
{
	Q_OBJECT

public:
	seetchinfo(QWidget *parent = nullptr);
	~seetchinfo();

private:
	Ui::seetchinfoClass ui;
};
