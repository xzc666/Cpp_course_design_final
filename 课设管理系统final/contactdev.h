#pragma once

#include <QWidget>
#include "ui_contactdev.h"

class contactdev : public QWidget
{
	Q_OBJECT

public:
	contactdev(QWidget *parent = nullptr);
	~contactdev();

private:
	Ui::contactdevClass ui;
};
