#pragma once

#include <QtWidgets/QWidget>
#include "ui_login.h"


class login : public QWidget
{
    Q_OBJECT

public:
    login(QWidget *parent = nullptr);
    ~login();

private:
    Ui::Form ui;
};
