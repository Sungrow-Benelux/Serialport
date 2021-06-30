/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTextEdit *recvTextEdit;
    QPushButton *sendButton;
    QTextEdit *sendTextEdit;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QComboBox *portComboBox;
    QComboBox *baudComboBox;
    QPushButton *openPortButton;
    QPushButton *clearTextButton;
    QPushButton *clearSendButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(496, 337);
        recvTextEdit = new QTextEdit(Widget);
        recvTextEdit->setObjectName(QString::fromUtf8("recvTextEdit"));
        recvTextEdit->setGeometry(QRect(10, 10, 290, 150));
        sendButton = new QPushButton(Widget);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setGeometry(QRect(310, 200, 91, 23));
        sendTextEdit = new QTextEdit(Widget);
        sendTextEdit->setObjectName(QString::fromUtf8("sendTextEdit"));
        sendTextEdit->setGeometry(QRect(10, 180, 291, 71));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(310, 10, 101, 151));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        portComboBox = new QComboBox(layoutWidget);
        portComboBox->setObjectName(QString::fromUtf8("portComboBox"));

        gridLayout->addWidget(portComboBox, 0, 0, 1, 1);

        baudComboBox = new QComboBox(layoutWidget);
        baudComboBox->addItem(QString());
        baudComboBox->addItem(QString());
        baudComboBox->addItem(QString());
        baudComboBox->addItem(QString());
        baudComboBox->addItem(QString());
        baudComboBox->addItem(QString());
        baudComboBox->addItem(QString());
        baudComboBox->addItem(QString());
        baudComboBox->setObjectName(QString::fromUtf8("baudComboBox"));

        gridLayout->addWidget(baudComboBox, 1, 0, 1, 1);

        openPortButton = new QPushButton(layoutWidget);
        openPortButton->setObjectName(QString::fromUtf8("openPortButton"));

        gridLayout->addWidget(openPortButton, 2, 0, 1, 1);

        clearTextButton = new QPushButton(layoutWidget);
        clearTextButton->setObjectName(QString::fromUtf8("clearTextButton"));

        gridLayout->addWidget(clearTextButton, 3, 0, 1, 1);

        clearSendButton = new QPushButton(layoutWidget);
        clearSendButton->setObjectName(QString::fromUtf8("clearSendButton"));

        gridLayout->addWidget(clearSendButton, 4, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        sendButton->setText(QCoreApplication::translate("Widget", "Send data", nullptr));
        baudComboBox->setItemText(0, QCoreApplication::translate("Widget", "4800", nullptr));
        baudComboBox->setItemText(1, QCoreApplication::translate("Widget", "9600", nullptr));
        baudComboBox->setItemText(2, QCoreApplication::translate("Widget", "19200", nullptr));
        baudComboBox->setItemText(3, QCoreApplication::translate("Widget", "38400", nullptr));
        baudComboBox->setItemText(4, QCoreApplication::translate("Widget", "57600", nullptr));
        baudComboBox->setItemText(5, QCoreApplication::translate("Widget", "115200", nullptr));
        baudComboBox->setItemText(6, QCoreApplication::translate("Widget", "128000", nullptr));
        baudComboBox->setItemText(7, QCoreApplication::translate("Widget", "256000", nullptr));

        openPortButton->setText(QCoreApplication::translate("Widget", "Open", nullptr));
        clearTextButton->setText(QCoreApplication::translate("Widget", "Clear Rec", nullptr));
        clearSendButton->setText(QCoreApplication::translate("Widget", "Clear Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
