/********************************************************************************
** Form generated from reading UI file 'edges.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDGES_H
#define UI_EDGES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_edges
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_from;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_to;
    QPushButton *pushButton_edges_input;

    void setupUi(QDialog *edges)
    {
        if (edges->objectName().isEmpty())
            edges->setObjectName(QString::fromUtf8("edges"));
        edges->resize(400, 300);
        verticalLayout = new QVBoxLayout(edges);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(edges);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_from = new QLineEdit(groupBox);
        lineEdit_from->setObjectName(QString::fromUtf8("lineEdit_from"));

        horizontalLayout->addWidget(lineEdit_from);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_to = new QLineEdit(groupBox);
        lineEdit_to->setObjectName(QString::fromUtf8("lineEdit_to"));

        horizontalLayout_2->addWidget(lineEdit_to);


        verticalLayout_2->addLayout(horizontalLayout_2);

        pushButton_edges_input = new QPushButton(groupBox);
        pushButton_edges_input->setObjectName(QString::fromUtf8("pushButton_edges_input"));

        verticalLayout_2->addWidget(pushButton_edges_input);


        verticalLayout->addWidget(groupBox);


        retranslateUi(edges);

        QMetaObject::connectSlotsByName(edges);
    } // setupUi

    void retranslateUi(QDialog *edges)
    {
        edges->setWindowTitle(QApplication::translate("edges", "Project Social Media Analysis", nullptr));
        groupBox->setTitle(QApplication::translate("edges", "Edge Info", nullptr));
        label->setText(QApplication::translate("edges", "From", nullptr));
        label_2->setText(QApplication::translate("edges", "To", nullptr));
        pushButton_edges_input->setText(QApplication::translate("edges", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class edges: public Ui_edges {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDGES_H
