/********************************************************************************
** Form generated from reading UI file 'admin_change.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_CHANGE_H
#define UI_ADMIN_CHANGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin_change
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_enter;
    QPushButton *pushButton_exit;
    QRadioButton *radioButton_add;
    QRadioButton *radioButton_change;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label_5;
    QLineEdit *lineEdit_name;
    QLabel *label;
    QLineEdit *lineEdit_number;
    QLabel *label_2;
    QLineEdit *lineEdit_class;
    QLabel *label_3;
    QLineEdit *lineEdit_time;
    QLabel *label_4;
    QLineEdit *lineEdit_GPA;
    QLabel *label_6;
    QLineEdit *lineEdit_passowrd;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *admin_change)
    {
        if (admin_change->objectName().isEmpty())
            admin_change->setObjectName(QStringLiteral("admin_change"));
        admin_change->resize(496, 318);
        centralwidget = new QWidget(admin_change);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton_enter = new QPushButton(centralwidget);
        pushButton_enter->setObjectName(QStringLiteral("pushButton_enter"));
        pushButton_enter->setGeometry(QRect(120, 210, 75, 23));
        pushButton_exit = new QPushButton(centralwidget);
        pushButton_exit->setObjectName(QStringLiteral("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(290, 210, 75, 23));
        radioButton_add = new QRadioButton(centralwidget);
        radioButton_add->setObjectName(QStringLiteral("radioButton_add"));
        radioButton_add->setGeometry(QRect(420, 40, 89, 16));
        radioButton_change = new QRadioButton(centralwidget);
        radioButton_change->setObjectName(QStringLiteral("radioButton_change"));
        radioButton_change->setGeometry(QRect(420, 90, 89, 16));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(130, 10, 240, 163));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        lineEdit_name = new QLineEdit(widget);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_name);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        lineEdit_number = new QLineEdit(widget);
        lineEdit_number->setObjectName(QStringLiteral("lineEdit_number"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_number);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        lineEdit_class = new QLineEdit(widget);
        lineEdit_class->setObjectName(QStringLiteral("lineEdit_class"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_class);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        lineEdit_time = new QLineEdit(widget);
        lineEdit_time->setObjectName(QStringLiteral("lineEdit_time"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_time);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        lineEdit_GPA = new QLineEdit(widget);
        lineEdit_GPA->setObjectName(QStringLiteral("lineEdit_GPA"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_GPA);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        lineEdit_passowrd = new QLineEdit(widget);
        lineEdit_passowrd->setObjectName(QStringLiteral("lineEdit_passowrd"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEdit_passowrd);

        admin_change->setCentralWidget(centralwidget);
        menubar = new QMenuBar(admin_change);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 496, 26));
        admin_change->setMenuBar(menubar);
        statusbar = new QStatusBar(admin_change);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        admin_change->setStatusBar(statusbar);

        retranslateUi(admin_change);

        QMetaObject::connectSlotsByName(admin_change);
    } // setupUi

    void retranslateUi(QMainWindow *admin_change)
    {
        admin_change->setWindowTitle(QApplication::translate("admin_change", "MOTINUE", 0));
        pushButton_enter->setText(QApplication::translate("admin_change", "\347\241\256\345\256\232", 0));
        pushButton_exit->setText(QApplication::translate("admin_change", "\351\200\200\345\207\272", 0));
        radioButton_add->setText(QApplication::translate("admin_change", "\346\267\273\345\212\240", 0));
        radioButton_change->setText(QApplication::translate("admin_change", "\344\277\256\346\224\271", 0));
        label_5->setText(QApplication::translate("admin_change", "\345\247\223\345\220\215", 0));
        label->setText(QApplication::translate("admin_change", "\350\264\246\345\217\267", 0));
        label_2->setText(QApplication::translate("admin_change", "\350\272\253\351\253\230", 0));
        label_3->setText(QApplication::translate("admin_change", "\344\275\223\351\207\215", 0));
        label_4->setText(QApplication::translate("admin_change", "\350\205\260\345\233\264", 0));
        label_6->setText(QApplication::translate("admin_change", "\345\257\206\347\240\201", 0));
    } // retranslateUi

};

namespace Ui {
    class admin_change: public Ui_admin_change {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_CHANGE_H
