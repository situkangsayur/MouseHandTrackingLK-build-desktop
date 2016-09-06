/********************************************************************************
** Form generated from reading UI file 'dialoghelp.ui'
**
** Created: Mon Jun 27 14:55:08 2011
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGHELP_H
#define UI_DIALOGHELP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogHelp
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_3;
    QLabel *label_15;
    QLabel *label_13;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_16;
    QLabel *label_10;
    QLabel *label_7;
    QLabel *label_14;
    QLabel *label_11;
    QLabel *label_2;
    QLabel *label_12;
    QLabel *label_8;
    QLabel *label_9;
    QWidget *tab_2;
    QLabel *label_18;
    QLabel *label_17;
    QPushButton *pushButton;

    void setupUi(QDialog *DialogHelp)
    {
        if (DialogHelp->objectName().isEmpty())
            DialogHelp->setObjectName(QString::fromUtf8("DialogHelp"));
        DialogHelp->resize(658, 548);
        tabWidget = new QTabWidget(DialogHelp);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 661, 491));
        tabWidget->setMaximumSize(QSize(16777215, 16777215));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(170, 120, 67, 17));
        label_15 = new QLabel(tab);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(30, 300, 121, 61));
        label_15->setPixmap(QPixmap(QString::fromUtf8(":/image/images/buttonContour.png")));
        label_13 = new QLabel(tab);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(30, 120, 101, 61));
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/image/images/buttonStop.png")));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(170, 190, 67, 17));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(170, 380, 67, 17));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(170, 280, 67, 17));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 10, 151, 17));
        label_16 = new QLabel(tab);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(30, 380, 101, 61));
        label_16->setPixmap(QPixmap(QString::fromUtf8(":/image/images/button Keluar.png")));
        label_10 = new QLabel(tab);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(170, 310, 411, 51));
        label_10->setWordWrap(true);
        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(170, 60, 411, 51));
        label_7->setWordWrap(true);
        label_14 = new QLabel(tab);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(30, 200, 121, 61));
        label_14->setPixmap(QPixmap(QString::fromUtf8(":/image/images/buttonHistogram.png")));
        label_11 = new QLabel(tab);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(170, 400, 411, 51));
        label_11->setWordWrap(true);
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(170, 40, 67, 17));
        label_12 = new QLabel(tab);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(30, 40, 91, 61));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/image/images/tombolStart.png")));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(170, 130, 411, 51));
        label_8->setWordWrap(true);
        label_9 = new QLabel(tab);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(170, 210, 411, 51));
        label_9->setWordWrap(true);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_18 = new QLabel(tab_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(0, 0, 651, 461));
        label_18->setPixmap(QPixmap(QString::fromUtf8(":/image/images/running.png")));
        label_18->setScaledContents(true);
        tabWidget->addTab(tab_2, QString());
        label_17 = new QLabel(DialogHelp);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(30, 500, 361, 31));
        pushButton = new QPushButton(DialogHelp);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(540, 500, 101, 41));

        retranslateUi(DialogHelp);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(DialogHelp);
    } // setupUi

    void retranslateUi(QDialog *DialogHelp)
    {
        DialogHelp->setWindowTitle(QApplication::translate("DialogHelp", "Dialog", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DialogHelp", "Stop", 0, QApplication::UnicodeUTF8));
        label_15->setText(QString());
        label_13->setText(QString());
        label_4->setText(QApplication::translate("DialogHelp", "Histogram", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("DialogHelp", "Exit", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("DialogHelp", "Contour", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogHelp", "Petunjuk Pemakaian", 0, QApplication::UnicodeUTF8));
        label_16->setText(QString());
        label_10->setText(QApplication::translate("DialogHelp", "Menampilkan kondisi citra/gambar yang sebenarnya dilihat komputer, setelah dilakukan  segmentasi atau pemisahan objek tangan dan background atau tekan \"ctrl+C\"", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("DialogHelp", "Tombol untuk memulai sistem pengontrol mouse pointer dengan Hand Tracking atau tekan \"ctrl+A\"", 0, QApplication::UnicodeUTF8));
        label_14->setText(QString());
        label_11->setText(QApplication::translate("DialogHelp", "Keluar dari program Pengontroll Mouse Pointer dengan Hand Tracking atau tekan \"ctrl+K\"", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DialogHelp", "Start", 0, QApplication::UnicodeUTF8));
        label_12->setText(QString());
        label_8->setText(QApplication::translate("DialogHelp", "Tombol untuk menghentikan sistem pengontrol mouse pointer dengan Hand Tracking atau tekan \"ctrl+S\"", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("DialogHelp", "Menampilkan visualisasi dari komputasi citra/gambar yang sedang ditampilkan dalam bentuk histogram atau tekan \"ctrl+H\"", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("DialogHelp", "Petunjunk Pemakaian", 0, QApplication::UnicodeUTF8));
        label_18->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("DialogHelp", "Petunjuk Tampilan", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("DialogHelp", "Mouse Pointer Controll With hand Tracking System.", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("DialogHelp", "&Tutup", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogHelp: public Ui_DialogHelp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGHELP_H
