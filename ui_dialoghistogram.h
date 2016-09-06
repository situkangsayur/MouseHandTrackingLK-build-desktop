/********************************************************************************
** Form generated from reading UI file 'dialoghistogram.ui'
**
** Created: Tue Jun 21 03:48:11 2011
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGHISTOGRAM_H
#define UI_DIALOGHISTOGRAM_H

#include <HistogramWindow.h>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogHistogram
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    HistogramWindow *widgetHistogram;
    QPushButton *buttonTutup;

    void setupUi(QDialog *DialogHistogram)
    {
        if (DialogHistogram->objectName().isEmpty())
            DialogHistogram->setObjectName(QString::fromUtf8("DialogHistogram"));
        DialogHistogram->resize(321, 250);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DialogHistogram->sizePolicy().hasHeightForWidth());
        DialogHistogram->setSizePolicy(sizePolicy);
        DialogHistogram->setMinimumSize(QSize(321, 250));
        DialogHistogram->setMaximumSize(QSize(321, 250));
        verticalLayoutWidget = new QWidget(DialogHistogram);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 321, 251));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widgetHistogram = new HistogramWindow(verticalLayoutWidget);
        widgetHistogram->setObjectName(QString::fromUtf8("widgetHistogram"));

        verticalLayout->addWidget(widgetHistogram);

        buttonTutup = new QPushButton(verticalLayoutWidget);
        buttonTutup->setObjectName(QString::fromUtf8("buttonTutup"));

        verticalLayout->addWidget(buttonTutup);


        retranslateUi(DialogHistogram);

        QMetaObject::connectSlotsByName(DialogHistogram);
    } // setupUi

    void retranslateUi(QDialog *DialogHistogram)
    {
        DialogHistogram->setWindowTitle(QApplication::translate("DialogHistogram", "Dialog", 0, QApplication::UnicodeUTF8));
        buttonTutup->setText(QApplication::translate("DialogHistogram", "&Tutup", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogHistogram: public Ui_DialogHistogram {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGHISTOGRAM_H
