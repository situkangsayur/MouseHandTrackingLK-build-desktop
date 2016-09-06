/********************************************************************************
** Form generated from reading UI file 'dialogcontour.ui'
**
** Created: Tue Jun 21 10:53:00 2011
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCONTOUR_H
#define UI_DIALOGCONTOUR_H

#include <CounturWindow.h>
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

class Ui_DialogContour
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    CounturWindow *widgetCountur;
    QPushButton *buttonTutup;

    void setupUi(QDialog *DialogContour)
    {
        if (DialogContour->objectName().isEmpty())
            DialogContour->setObjectName(QString::fromUtf8("DialogContour"));
        DialogContour->resize(642, 485);
        DialogContour->setMinimumSize(QSize(642, 485));
        DialogContour->setMaximumSize(QSize(642, 485));
        verticalLayoutWidget = new QWidget(DialogContour);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 641, 481));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widgetCountur = new CounturWindow(verticalLayoutWidget);
        widgetCountur->setObjectName(QString::fromUtf8("widgetCountur"));

        verticalLayout->addWidget(widgetCountur);

        buttonTutup = new QPushButton(verticalLayoutWidget);
        buttonTutup->setObjectName(QString::fromUtf8("buttonTutup"));

        verticalLayout->addWidget(buttonTutup);


        retranslateUi(DialogContour);

        QMetaObject::connectSlotsByName(DialogContour);
    } // setupUi

    void retranslateUi(QDialog *DialogContour)
    {
        DialogContour->setWindowTitle(QApplication::translate("DialogContour", "Dialog", 0, QApplication::UnicodeUTF8));
        buttonTutup->setText(QApplication::translate("DialogContour", "&Tutup", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogContour: public Ui_DialogContour {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCONTOUR_H
