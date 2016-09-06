/********************************************************************************
** Form generated from reading UI file 'formhistogram.ui'
**
** Created: Mon Jun 20 23:01:56 2011
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMHISTOGRAM_H
#define UI_FORMHISTOGRAM_H

#include <HistogramWindow.h>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormHistogram
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    HistogramWindow *widgetHistogram;
    QPushButton *buttonTutup;

    void setupUi(QWidget *FormHistogram)
    {
        if (FormHistogram->objectName().isEmpty())
            FormHistogram->setObjectName(QString::fromUtf8("FormHistogram"));
        FormHistogram->resize(320, 250);
        FormHistogram->setMinimumSize(QSize(320, 250));
        FormHistogram->setMaximumSize(QSize(320, 250));
        verticalLayoutWidget = new QWidget(FormHistogram);
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


        retranslateUi(FormHistogram);

        QMetaObject::connectSlotsByName(FormHistogram);
    } // setupUi

    void retranslateUi(QWidget *FormHistogram)
    {
        FormHistogram->setWindowTitle(QApplication::translate("FormHistogram", "Form", 0, QApplication::UnicodeUTF8));
        buttonTutup->setText(QApplication::translate("FormHistogram", "Tutup", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FormHistogram: public Ui_FormHistogram {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMHISTOGRAM_H
