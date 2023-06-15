/********************************************************************************
** Form generated from reading UI file 'seeAllcourse.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEEALLCOURSE_H
#define UI_SEEALLCOURSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_seeAllcourseClass
{
public:
    QLabel *label;
    QWidget *widget;
    QPushButton *btn_exit;
    QComboBox *comboBox;
    QLabel *label_3;
    QPushButton *btn_search;
    QListWidget *listWidget;

    void setupUi(QWidget *seeAllcourseClass)
    {
        if (seeAllcourseClass->objectName().isEmpty())
            seeAllcourseClass->setObjectName("seeAllcourseClass");
        seeAllcourseClass->resize(537, 720);
        seeAllcourseClass->setMinimumSize(QSize(0, 0));
        seeAllcourseClass->setMaximumSize(QSize(1280, 720));
        seeAllcourseClass->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(seeAllcourseClass);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1280, 720));
        label->setMinimumSize(QSize(0, 0));
        label->setMaximumSize(QSize(1280, 720));
        label->setPixmap(QPixmap(QString::fromUtf8("image/\351\233\252\345\261\261.png")));
        label->setScaledContents(true);
        widget = new QWidget(seeAllcourseClass);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(60, 50, 421, 621));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 220);"));
        btn_exit = new QPushButton(widget);
        btn_exit->setObjectName("btn_exit");
        btn_exit->setGeometry(QRect(290, 570, 111, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font.setPointSize(13);
        btn_exit->setFont(font);
        comboBox = new QComboBox(widget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(50, 70, 241, 31));
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(120, 10, 271, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\345\275\251\344\272\221")});
        font1.setPointSize(23);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        btn_search = new QPushButton(widget);
        btn_search->setObjectName("btn_search");
        btn_search->setGeometry(QRect(320, 70, 51, 31));
        listWidget = new QListWidget(widget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(50, 120, 321, 431));

        retranslateUi(seeAllcourseClass);

        QMetaObject::connectSlotsByName(seeAllcourseClass);
    } // setupUi

    void retranslateUi(QWidget *seeAllcourseClass)
    {
        seeAllcourseClass->setWindowTitle(QCoreApplication::translate("seeAllcourseClass", "seeAllcourse", nullptr));
        label->setText(QString());
        btn_exit->setText(QCoreApplication::translate("seeAllcourseClass", "\351\200\200\345\207\272", nullptr));
        comboBox->setPlaceholderText(QCoreApplication::translate("seeAllcourseClass", "\350\257\267\351\200\211\346\213\251\350\246\201\346\237\245\350\257\242\351\200\211\351\242\230\347\232\204\350\257\276\350\256\276", nullptr));
        label_3->setText(QCoreApplication::translate("seeAllcourseClass", "\350\257\276\350\256\276\351\200\211\351\242\230\346\237\245\350\257\242", nullptr));
        btn_search->setText(QCoreApplication::translate("seeAllcourseClass", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class seeAllcourseClass: public Ui_seeAllcourseClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEEALLCOURSE_H
