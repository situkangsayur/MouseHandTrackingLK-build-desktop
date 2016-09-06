/********************************************************************************
** Form generated from reading UI file 'sistemview.ui'
**
** Created: Mon Jun 27 15:07:08 2011
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SISTEMVIEW_H
#define UI_SISTEMVIEW_H

#include <MyCameraWindow.h>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SIstemView
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    MyCameraWindow *widgetOpenCV;
    QWidget *widgetButton;
    QPushButton *buttonStart;
    QPushButton *buttonHistogram;
    QPushButton *buttonContour;
    QPushButton *buttonExit;
    QPushButton *buttonStop;
    QPushButton *buttonPetunjuk;

    void setupUi(QWidget *SIstemView)
    {
        if (SIstemView->objectName().isEmpty())
            SIstemView->setObjectName(QString::fromUtf8("SIstemView"));
        SIstemView->resize(690, 650);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(65);
        sizePolicy.setVerticalStretch(60);
        sizePolicy.setHeightForWidth(SIstemView->sizePolicy().hasHeightForWidth());
        SIstemView->setSizePolicy(sizePolicy);
        SIstemView->setMinimumSize(QSize(690, 650));
        SIstemView->setMaximumSize(QSize(720, 650));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(135, 140, 242, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(251, 251, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(193, 195, 248, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(67, 70, 121, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(90, 93, 161, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(195, 197, 248, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        SIstemView->setPalette(palette);
        verticalLayoutWidget = new QWidget(SIstemView);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 691, 651));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widgetOpenCV = new MyCameraWindow(verticalLayoutWidget);
        widgetOpenCV->setObjectName(QString::fromUtf8("widgetOpenCV"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widgetOpenCV->sizePolicy().hasHeightForWidth());
        widgetOpenCV->setSizePolicy(sizePolicy1);
        widgetOpenCV->setMinimumSize(QSize(680, 510));
        widgetOpenCV->setMaximumSize(QSize(680, 500));

        verticalLayout->addWidget(widgetOpenCV);

        widgetButton = new QWidget(verticalLayoutWidget);
        widgetButton->setObjectName(QString::fromUtf8("widgetButton"));
        widgetButton->setMinimumSize(QSize(680, 100));
        widgetButton->setMaximumSize(QSize(680, 100));
        buttonStart = new QPushButton(widgetButton);
        buttonStart->setObjectName(QString::fromUtf8("buttonStart"));
        buttonStart->setGeometry(QRect(20, 10, 91, 61));
        buttonStart->setMouseTracking(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/images/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonStart->setIcon(icon);
        buttonStart->setIconSize(QSize(31, 30));
        buttonStart->setCheckable(true);
        buttonHistogram = new QPushButton(widgetButton);
        buttonHistogram->setObjectName(QString::fromUtf8("buttonHistogram"));
        buttonHistogram->setGeometry(QRect(240, 10, 121, 61));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/images/histogram.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        buttonHistogram->setIcon(icon1);
        buttonHistogram->setIconSize(QSize(31, 30));
        buttonContour = new QPushButton(widgetButton);
        buttonContour->setObjectName(QString::fromUtf8("buttonContour"));
        buttonContour->setGeometry(QRect(360, 10, 111, 61));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/images/7023332-human-hand-concept-made-of-100-icons-set-in-black-color.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        buttonContour->setIcon(icon2);
        buttonContour->setIconSize(QSize(31, 30));
        buttonExit = new QPushButton(widgetButton);
        buttonExit->setObjectName(QString::fromUtf8("buttonExit"));
        buttonExit->setGeometry(QRect(580, 10, 91, 61));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/images/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonExit->setIcon(icon3);
        buttonExit->setIconSize(QSize(29, 30));
        buttonStop = new QPushButton(widgetButton);
        buttonStop->setObjectName(QString::fromUtf8("buttonStop"));
        buttonStop->setGeometry(QRect(120, 10, 91, 61));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/image/images/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonStop->setIcon(icon4);
        buttonStop->setIconSize(QSize(31, 30));
        buttonPetunjuk = new QPushButton(widgetButton);
        buttonPetunjuk->setObjectName(QString::fromUtf8("buttonPetunjuk"));
        buttonPetunjuk->setGeometry(QRect(480, 10, 81, 61));

        verticalLayout->addWidget(widgetButton);


        retranslateUi(SIstemView);

        QMetaObject::connectSlotsByName(SIstemView);
    } // setupUi

    void retranslateUi(QWidget *SIstemView)
    {
        SIstemView->setWindowTitle(QApplication::translate("SIstemView", "SIstemView", 0, QApplication::UnicodeUTF8));
        buttonStart->setText(QApplication::translate("SIstemView", "St&art ", 0, QApplication::UnicodeUTF8));
        buttonHistogram->setText(QApplication::translate("SIstemView", "&Histogram", 0, QApplication::UnicodeUTF8));
        buttonContour->setText(QApplication::translate("SIstemView", "&Contour", 0, QApplication::UnicodeUTF8));
        buttonExit->setText(QApplication::translate("SIstemView", "&Keluar", 0, QApplication::UnicodeUTF8));
        buttonStop->setText(QApplication::translate("SIstemView", "&Stop", 0, QApplication::UnicodeUTF8));
        buttonPetunjuk->setText(QApplication::translate("SIstemView", "&Petunjuk", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SIstemView: public Ui_SIstemView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SISTEMVIEW_H
