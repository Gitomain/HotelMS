/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

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

class Ui_login
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *leUid;
    QLineEdit *lePwd;
    QPushButton *pblogin;
    QPushButton *pbChgpwd;
    QPushButton *pbQuit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(342, 242);
        centralwidget = new QWidget(login);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 0, 371, 41));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 60, 67, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 90, 67, 17));
        leUid = new QLineEdit(centralwidget);
        leUid->setObjectName(QStringLiteral("leUid"));
        leUid->setGeometry(QRect(140, 60, 151, 27));
        lePwd = new QLineEdit(centralwidget);
        lePwd->setObjectName(QStringLiteral("lePwd"));
        lePwd->setGeometry(QRect(140, 90, 151, 27));
        pblogin = new QPushButton(centralwidget);
        pblogin->setObjectName(QStringLiteral("pblogin"));
        pblogin->setGeometry(QRect(40, 140, 81, 27));
        pbChgpwd = new QPushButton(centralwidget);
        pbChgpwd->setObjectName(QStringLiteral("pbChgpwd"));
        pbChgpwd->setGeometry(QRect(130, 140, 81, 27));
        pbQuit = new QPushButton(centralwidget);
        pbQuit->setObjectName(QStringLiteral("pbQuit"));
        pbQuit->setGeometry(QRect(220, 140, 81, 27));
        login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(login);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 342, 25));
        login->setMenuBar(menubar);
        statusbar = new QStatusBar(login);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        login->setStatusBar(statusbar);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QApplication::translate("login", "MainWindow", 0));
        label->setText(QApplication::translate("login", "<html><head/><body><p><span style=\" font-size:14pt;\">\346\254\242\350\277\216\347\231\273\345\275\225\351\205\222\345\272\227\347\256\241\347\220\206\347\263\273\347\273\237</span><span style=\" font-size:14pt; vertical-align:super;\">Tm</span><span style=\" font-size:14pt; vertical-align:sub;\">IotPanda</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("login", "\350\264\246\345\217\267\357\274\232", 0));
        label_3->setText(QApplication::translate("login", "\345\257\206\347\240\201\357\274\232", 0));
        pblogin->setText(QApplication::translate("login", "\347\231\273\351\231\206", 0));
        pbChgpwd->setText(QApplication::translate("login", "\344\277\256\346\224\271\345\257\206\347\240\201", 0));
        pbQuit->setText(QApplication::translate("login", "\351\200\200\345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
