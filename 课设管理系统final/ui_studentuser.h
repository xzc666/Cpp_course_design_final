/********************************************************************************
** Form generated from reading UI file 'studentuser.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTUSER_H
#define UI_STUDENTUSER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_studentuserClass
{
public:
    QWidget *widget;
    QLabel *label_college;
    QLabel *label_class;
    QLabel *label_class_val;
    QLabel *label_ID;
    QLabel *label_name;
    QLabel *label_ID_val;
    QLabel *label_name_val;
    QPushButton *btn_see_my;
    QPushButton *btn_begin;
    QPushButton *btn_see_all;
    QFrame *line;
    QFrame *line_2;
    QLabel *label_inf;
    QLabel *label_college_val;
    QPushButton *btn_exit;
    QLabel *label;

    void setupUi(QWidget *studentuserClass)
    {
        if (studentuserClass->objectName().isEmpty())
            studentuserClass->setObjectName("studentuserClass");
        studentuserClass->resize(1280, 720);
        studentuserClass->setMinimumSize(QSize(1280, 720));
        studentuserClass->setMaximumSize(QSize(1280, 720));
        QIcon icon;
        icon.addFile(QString::fromUtf8("image/\345\255\246\351\231\242logo\357\274\210jiangsu university jingjiang college\357\274\211.png"), QSize(), QIcon::Normal, QIcon::Off);
        studentuserClass->setWindowIcon(icon);
        widget = new QWidget(studentuserClass);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(60, 50, 1161, 621));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 220);"));
        label_college = new QLabel(widget);
        label_college->setObjectName("label_college");
        label_college->setGeometry(QRect(40, 280, 120, 40));
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font.setPointSize(30);
        label_college->setFont(font);
        label_college->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        label_college->setMargin(0);
        label_college->setIndent(-1);
        label_class = new QLabel(widget);
        label_class->setObjectName("label_class");
        label_class->setGeometry(QRect(40, 200, 120, 40));
        label_class->setFont(font);
        label_class->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        label_class_val = new QLabel(widget);
        label_class_val->setObjectName("label_class_val");
        label_class_val->setGeometry(QRect(170, 200, 361, 40));
        label_class_val->setFont(font);
        label_class_val->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        label_ID = new QLabel(widget);
        label_ID->setObjectName("label_ID");
        label_ID->setGeometry(QRect(40, 120, 120, 40));
        label_ID->setFont(font);
        label_ID->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        label_name = new QLabel(widget);
        label_name->setObjectName("label_name");
        label_name->setGeometry(QRect(40, 40, 120, 40));
        label_name->setFont(font);
        label_name->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        label_ID_val = new QLabel(widget);
        label_ID_val->setObjectName("label_ID_val");
        label_ID_val->setGeometry(QRect(170, 120, 361, 40));
        label_ID_val->setFont(font);
        label_ID_val->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        label_name_val = new QLabel(widget);
        label_name_val->setObjectName("label_name_val");
        label_name_val->setGeometry(QRect(170, 40, 371, 40));
        label_name_val->setFont(font);
        label_name_val->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        btn_see_my = new QPushButton(widget);
        btn_see_my->setObjectName("btn_see_my");
        btn_see_my->setGeometry(QRect(660, 90, 171, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font1.setPointSize(16);
        btn_see_my->setFont(font1);
        btn_see_my->setStyleSheet(QString::fromUtf8("    border: 2px solid #A3A3A3;\n"
"border-radius:5px;\n"
"   "));
        btn_begin = new QPushButton(widget);
        btn_begin->setObjectName("btn_begin");
        btn_begin->setGeometry(QRect(900, 90, 171, 51));
        btn_begin->setFont(font1);
        btn_begin->setStyleSheet(QString::fromUtf8("    border: 2px solid #A3A3A3;\n"
"border-radius:5px;\n"
"   "));
        btn_see_all = new QPushButton(widget);
        btn_see_all->setObjectName("btn_see_all");
        btn_see_all->setGeometry(QRect(660, 230, 171, 51));
        btn_see_all->setFont(font1);
        btn_see_all->setStyleSheet(QString::fromUtf8("    border: 2px solid #A3A3A3;\n"
"border-radius:5px;\n"
"   "));
        line = new QFrame(widget);
        line->setObjectName("line");
        line->setGeometry(QRect(0, 380, 1161, 31));
        line->setLineWidth(7);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(widget);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(570, 0, 16, 388));
        line_2->setLineWidth(7);
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_inf = new QLabel(widget);
        label_inf->setObjectName("label_inf");
        label_inf->setGeometry(QRect(140, 480, 867, 53));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\345\275\251\344\272\221")});
        font2.setPointSize(38);
        label_inf->setFont(font2);
        label_inf->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        label_college_val = new QLabel(widget);
        label_college_val->setObjectName("label_college_val");
        label_college_val->setGeometry(QRect(170, 280, 351, 41));
        label_college_val->setFont(font);
        label_college_val->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        btn_exit = new QPushButton(widget);
        btn_exit->setObjectName("btn_exit");
        btn_exit->setGeometry(QRect(900, 230, 171, 51));
        btn_exit->setFont(font1);
        btn_exit->setStyleSheet(QString::fromUtf8("    border: 2px solid #A3A3A3;\n"
"border-radius:5px;\n"
"   "));
        label = new QLabel(studentuserClass);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1281, 721));
        label->setFrameShape(QFrame::NoFrame);
        label->setFrameShadow(QFrame::Plain);
        label->setPixmap(QPixmap(QString::fromUtf8("image/\351\233\252\345\261\261.png")));
        label->setScaledContents(true);
        label->raise();
        widget->raise();

        retranslateUi(studentuserClass);

        QMetaObject::connectSlotsByName(studentuserClass);
    } // setupUi

    void retranslateUi(QWidget *studentuserClass)
    {
        studentuserClass->setWindowTitle(QCoreApplication::translate("studentuserClass", "studentuser", nullptr));
        label_college->setText(QCoreApplication::translate("studentuserClass", "\345\255\246\351\231\242\357\274\232", nullptr));
        label_class->setText(QCoreApplication::translate("studentuserClass", "\347\217\255\347\272\247\357\274\232", nullptr));
        label_class_val->setText(QCoreApplication::translate("studentuserClass", "none", nullptr));
        label_ID->setText(QCoreApplication::translate("studentuserClass", "\345\255\246\345\217\267\357\274\232", nullptr));
        label_name->setText(QCoreApplication::translate("studentuserClass", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_ID_val->setText(QCoreApplication::translate("studentuserClass", "none", nullptr));
        label_name_val->setText(QCoreApplication::translate("studentuserClass", "none", nullptr));
        btn_see_my->setText(QCoreApplication::translate("studentuserClass", "\346\237\245\347\234\213\346\210\221\347\232\204\351\200\211\351\242\230", nullptr));
        btn_begin->setText(QCoreApplication::translate("studentuserClass", "\351\200\211\351\242\230/\344\277\256\346\224\271\351\200\211\351\242\230", nullptr));
        btn_see_all->setText(QCoreApplication::translate("studentuserClass", "\346\237\245\347\234\213\351\200\211\351\242\230\345\210\227\350\241\250", nullptr));
        label_inf->setText(QCoreApplication::translate("studentuserClass", "\350\257\267\346\214\211\345\217\263\344\270\212\346\226\271\347\232\204\346\214\211\351\222\256\351\200\211\346\213\251\346\202\250\346\203\263\344\275\277\347\224\250\347\232\204\345\212\237\350\203\275", nullptr));
        label_college_val->setText(QCoreApplication::translate("studentuserClass", "none", nullptr));
        btn_exit->setText(QCoreApplication::translate("studentuserClass", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class studentuserClass: public Ui_studentuserClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTUSER_H
