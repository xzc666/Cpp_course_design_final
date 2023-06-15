#include "login.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    login* w=new login;
    w->show();
    return a.exec();
}
