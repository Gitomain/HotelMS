/********************************************************************************
** Form generated from reading UI file 'chgpwd.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHGPWD_H
#define UI_CHGPWD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Chgpwd
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lePwd;
    QLineEdit *leNewPwd;
    QLineEdit *leNewPwdCopy;
    QLineEdit *leUid;
    QPushButton *pbSubmit;
    QPushButton *pbQuit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Chgpwd)
    {
        if (Chgpwd->objectName().isEmpty())
            Chgpwd->setObjectName(QStringLiteral("Chgpwd"));
        Chgpwd->resize(290, 270);
        centralwidget = new QWidget(Chgpwd);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 40, 67, 17));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 70, 67, 17));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 100, 67, 17));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 130, 67, 17));
        lePwd = new QLineEdit(centralwidget);
        lePwd->setObjectName(QStringLiteral("lePwd"));
        lePwd->setGeometry(QRect(122, 70, 131, 27));
        leNewPwd = new QLineEdit(centralwidget);
        leNewPwd->setObjectName(QStringLiteral("leNewPwd"));
        leNewPwd->setGeometry(QRect(122, 100, 131, 27));
        leNewPwdCopy = new QLineEdit(centralwidget);
        leNewPwdCopy->setObjectName(QStringLiteral("leNewPwdCopy"));
        leNewPwdCopy->setGeometry(QRect(122, 130, 131, 27));
        leUid = new QLineEdit(centralwidget);
        leUid->setObjectName(QStringLiteral("leUid"));
        leUid->setGeometry(QRect(122, 40, 131, 27));
        pbSubmit = new QPushButton(centralwidget);
        pbSubmit->setObjectName(QStringLiteral("pbSubmit"));
        pbSubmit->setGeometry(QRect(30, 180, 99, 27));
        pbQuit = new QPushButton(centralwidget);
        pbQuit->setObjectName(QStringLiteral("pbQuit"));
        pbQuit->setGeometry(QRect(150, 180, 99, 27));
        Chgpwd->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Chgpwd);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 290, 25));
        Chgpwd->setMenuBar(menubar);
        statusbar = new QStatusBar(Chgpwd);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Chgpwd->setStatusBar(statusbar);

        retranslateUi(Chgpwd);

        QMetaObject::connectSlotsByName(Chgpwd);
    } // setupUi

    void retranslateUi(QMainWindow *Chgpwd)
    {
        Chgpwd->setWindowTitle(QApplication::translate("Chgpwd", "MainWindow", 0));
        label->setText(QApplication::translate("Chgpwd", "\350\264\246\345\217\267:", 0));
        label_2->setText(QApplication::translate("Chgpwd", "\345\216\237\345\247\213\345\257\206\347\240\201:", 0));
        label_3->setText(QApplication::translate("Chgpwd", "\346\226\260\345\257\206\347\240\201:", 0));
        label_4->setText(QApplication::translate("Chgpwd", "\347\241\256\350\256\244:", 0));
        pbSubmit->setText(QApplication::translate("Chgpwd", "\347\241\256\350\256\244", 0));
        pbQuit->setText(QApplication::translate("Chgpwd", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class Chgpwd: public Ui_Chgpwd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHGPWD_H
