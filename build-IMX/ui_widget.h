/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
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
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(496, 337);
        recvTextEdit = new QTextEdit(Widget);
        recvTextEdit->setObjectName(QStringLiteral("recvTextEdit"));
        recvTextEdit->setGeometry(QRect(10, 10, 290, 150));
        sendButton = new QPushButton(Widget);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        sendButton->setGeometry(QRect(310, 200, 91, 23));
        sendTextEdit = new QTextEdit(Widget);
        sendTextEdit->setObjectName(QStringLiteral("sendTextEdit"));
        sendTextEdit->setGeometry(QRect(10, 180, 291, 71));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(310, 10, 101, 151));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        portComboBox = new QComboBox(layoutWidget);
        portComboBox->setObjectName(QStringLiteral("portComboBox"));

        gridLayout->addWidget(portComboBox, 0, 0, 1, 1);

        baudComboBox = new QComboBox(layoutWidget);
        baudComboBox->setObjectName(QStringLiteral("baudComboBox"));

        gridLayout->addWidget(baudComboBox, 1, 0, 1, 1);

        openPortButton = new QPushButton(layoutWidget);
        openPortButton->setObjectName(QStringLiteral("openPortButton"));

        gridLayout->addWidget(openPortButton, 2, 0, 1, 1);

        clearTextButton = new QPushButton(layoutWidget);
        clearTextButton->setObjectName(QStringLiteral("clearTextButton"));

        gridLayout->addWidget(clearTextButton, 3, 0, 1, 1);

        clearSendButton = new QPushButton(layoutWidget);
        clearSendButton->setObjectName(QStringLiteral("clearSendButton"));

        gridLayout->addWidget(clearSendButton, 4, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        sendButton->setText(QApplication::translate("Widget", "Send data", 0));
        baudComboBox->clear();
        baudComboBox->insertItems(0, QStringList()
         << QApplication::translate("Widget", "4800", 0)
         << QApplication::translate("Widget", "9600", 0)
         << QApplication::translate("Widget", "19200", 0)
         << QApplication::translate("Widget", "38400", 0)
         << QApplication::translate("Widget", "57600", 0)
         << QApplication::translate("Widget", "115200", 0)
         << QApplication::translate("Widget", "128000", 0)
         << QApplication::translate("Widget", "256000", 0)
        );
        openPortButton->setText(QApplication::translate("Widget", "Open", 0));
        clearTextButton->setText(QApplication::translate("Widget", "Clear Rec", 0));
        clearSendButton->setText(QApplication::translate("Widget", "Clear Send", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
