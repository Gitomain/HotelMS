/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTableWidget *tableWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableView *tvPriceInfo;
    QTableView *tvRoomInfo;
    QLabel *label;
    QLabel *label_2;
    QGroupBox *groupBox;
    QRadioButton *rb6;
    QRadioButton *rb1;
    QRadioButton *rb2;
    QRadioButton *rb5;
    QRadioButton *rb3;
    QRadioButton *rb4;
    QWidget *tab_2;
    QGroupBox *groupBox_2;
    QLineEdit *leID;
    QLineEdit *leUserName;
    QLineEdit *leRoomID;
    QLineEdit *leNumOfNig;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pbSubmit;
    QPushButton *pbCancel;
    QWidget *tab_3;
    QGroupBox *groupBox_3;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *leOut_ID;
    QLineEdit *leRealdate;
    QLineEdit *lePay;
    QPushButton *pbOut_Search;
    QPushButton *pbCheckout;
    QFrame *line_4;
    QTableView *tvQuery;
    QWidget *tab_4;
    QTableView *tvCheckin;
    QTableView *tvCheckout;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(611, 392);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(0, 0, 611, 331));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 611, 331));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tvPriceInfo = new QTableView(tab);
        tvPriceInfo->setObjectName(QStringLiteral("tvPriceInfo"));
        tvPriceInfo->setGeometry(QRect(20, 0, 591, 121));
        tvRoomInfo = new QTableView(tab);
        tvRoomInfo->setObjectName(QStringLiteral("tvRoomInfo"));
        tvRoomInfo->setGeometry(QRect(350, 120, 256, 151));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 21, 121));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(330, 120, 21, 151));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 130, 151, 151));
        rb6 = new QRadioButton(groupBox);
        rb6->setObjectName(QStringLiteral("rb6"));
        rb6->setGeometry(QRect(10, 20, 117, 22));
        rb1 = new QRadioButton(groupBox);
        rb1->setObjectName(QStringLiteral("rb1"));
        rb1->setGeometry(QRect(10, 40, 117, 22));
        rb2 = new QRadioButton(groupBox);
        rb2->setObjectName(QStringLiteral("rb2"));
        rb2->setGeometry(QRect(10, 60, 117, 22));
        rb5 = new QRadioButton(groupBox);
        rb5->setObjectName(QStringLiteral("rb5"));
        rb5->setGeometry(QRect(10, 80, 117, 22));
        rb3 = new QRadioButton(groupBox);
        rb3->setObjectName(QStringLiteral("rb3"));
        rb3->setGeometry(QRect(10, 100, 117, 22));
        rb4 = new QRadioButton(groupBox);
        rb4->setObjectName(QStringLiteral("rb4"));
        rb4->setGeometry(QRect(10, 120, 117, 22));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(90, 30, 391, 261));
        leID = new QLineEdit(groupBox_2);
        leID->setObjectName(QStringLiteral("leID"));
        leID->setGeometry(QRect(140, 40, 221, 27));
        leUserName = new QLineEdit(groupBox_2);
        leUserName->setObjectName(QStringLiteral("leUserName"));
        leUserName->setGeometry(QRect(140, 70, 221, 27));
        leRoomID = new QLineEdit(groupBox_2);
        leRoomID->setObjectName(QStringLiteral("leRoomID"));
        leRoomID->setGeometry(QRect(140, 100, 113, 27));
        leNumOfNig = new QLineEdit(groupBox_2);
        leNumOfNig->setObjectName(QStringLiteral("leNumOfNig"));
        leNumOfNig->setGeometry(QRect(140, 130, 113, 27));
        line = new QFrame(groupBox_2);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(260, 100, 3, 61));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(groupBox_2);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(70, 0, 301, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(groupBox_2);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(10, 180, 371, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 50, 67, 17));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 80, 67, 17));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 110, 67, 17));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 140, 67, 17));
        pbSubmit = new QPushButton(groupBox_2);
        pbSubmit->setObjectName(QStringLiteral("pbSubmit"));
        pbSubmit->setGeometry(QRect(20, 210, 99, 27));
        pbCancel = new QPushButton(groupBox_2);
        pbCancel->setObjectName(QStringLiteral("pbCancel"));
        pbCancel->setGeometry(QRect(190, 210, 99, 27));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        groupBox_3 = new QGroupBox(tab_3);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(70, 20, 491, 271));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 30, 67, 17));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(170, 70, 67, 17));
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(30, 230, 81, 17));
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(30, 200, 101, 17));
        leOut_ID = new QLineEdit(groupBox_3);
        leOut_ID->setObjectName(QStringLiteral("leOut_ID"));
        leOut_ID->setGeometry(QRect(100, 30, 221, 21));
        leRealdate = new QLineEdit(groupBox_3);
        leRealdate->setObjectName(QStringLiteral("leRealdate"));
        leRealdate->setGeometry(QRect(140, 200, 113, 27));
        lePay = new QLineEdit(groupBox_3);
        lePay->setObjectName(QStringLiteral("lePay"));
        lePay->setGeometry(QRect(140, 230, 113, 27));
        pbOut_Search = new QPushButton(groupBox_3);
        pbOut_Search->setObjectName(QStringLiteral("pbOut_Search"));
        pbOut_Search->setGeometry(QRect(340, 30, 99, 21));
        pbCheckout = new QPushButton(groupBox_3);
        pbCheckout->setObjectName(QStringLiteral("pbCheckout"));
        pbCheckout->setGeometry(QRect(340, 230, 99, 21));
        line_4 = new QFrame(groupBox_3);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(30, 60, 411, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        tvQuery = new QTableView(groupBox_3);
        tvQuery->setObjectName(QStringLiteral("tvQuery"));
        tvQuery->setGeometry(QRect(35, 90, 401, 101));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tvCheckin = new QTableView(tab_4);
        tvCheckin->setObjectName(QStringLiteral("tvCheckin"));
        tvCheckin->setGeometry(QRect(50, 20, 511, 151));
        tvCheckout = new QTableView(tab_4);
        tvCheckout->setObjectName(QStringLiteral("tvCheckout"));
        tvCheckout->setGeometry(QRect(50, 180, 511, 111));
        tabWidget->addTab(tab_4, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 611, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\344\273\212</p><p>\346\227\245</p><p>\346\210\277</p><p>\344\273\267</p></body></html>", 0));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\346\210\277</p><p>\351\227\264</p><p>\344\277\241</p><p>\346\201\257</p><p>\350\241\250</p></body></html>", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "\346\210\277\351\227\264\347\261\273\345\236\213", 0));
        rb6->setText(QApplication::translate("MainWindow", "\346\200\273\347\273\237\345\245\227\346\210\277", 0));
        rb1->setText(QApplication::translate("MainWindow", "\345\225\206\345\212\241\345\245\227\346\210\277", 0));
        rb2->setText(QApplication::translate("MainWindow", "\350\261\252\345\215\216\345\215\225\344\272\272\351\227\264", 0));
        rb5->setText(QApplication::translate("MainWindow", "\350\261\252\345\215\216\345\217\214\344\272\272\351\227\264", 0));
        rb3->setText(QApplication::translate("MainWindow", "\346\240\207\345\207\206\345\215\225\344\272\272\351\227\264", 0));
        rb4->setText(QApplication::translate("MainWindow", "\346\240\207\345\207\206\345\217\214\344\272\272\351\227\264", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\345\256\242\346\210\277\346\237\245\350\257\242", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\344\277\241\346\201\257\345\241\253\345\206\231", 0));
        label_3->setText(QApplication::translate("MainWindow", "\350\257\201\344\273\266\345\217\267\357\274\232", 0));
        label_4->setText(QApplication::translate("MainWindow", "\345\247\223\343\200\200\345\220\215\357\274\232", 0));
        label_5->setText(QApplication::translate("MainWindow", "\346\210\277\351\227\264\345\217\267\357\274\232", 0));
        label_6->setText(QApplication::translate("MainWindow", "\345\205\245\344\275\217\345\244\251\346\225\260\357\274\232", 0));
        pbSubmit->setText(QApplication::translate("MainWindow", "\347\241\256\350\256\244", 0));
        pbCancel->setText(QApplication::translate("MainWindow", "\345\217\226\346\266\210", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\347\231\273\350\256\260\345\205\245\344\275\217", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\346\254\242\350\277\216\344\270\213\346\254\241\345\205\211\344\270\264", 0));
        label_7->setText(QApplication::translate("MainWindow", "\350\257\201\344\273\266\345\217\267\357\274\232", 0));
        label_8->setText(QApplication::translate("MainWindow", "\345\205\245\344\275\217\344\277\241\346\201\257", 0));
        label_9->setText(QApplication::translate("MainWindow", "\345\272\224\347\274\264\350\264\271\347\224\250\357\274\232", 0));
        label_10->setText(QApplication::translate("MainWindow", "\345\256\236\351\231\205\345\205\245\344\275\217\345\244\251\346\225\260\357\274\232", 0));
        pbOut_Search->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242", 0));
        pbCheckout->setText(QApplication::translate("MainWindow", "\351\200\200\346\210\277", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\351\200\200\346\210\277\347\273\223\347\256\227", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "\350\256\260\345\275\225\346\237\245\350\257\242", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
