/********************************************************************************
** Form generated from reading UI file 'graph_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPH_WINDOW_H
#define UI_GRAPH_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_graph_window
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_back;
    QSpacerItem *horizontalSpacer;
    QGraphicsView *graphicsView;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_zoom_in;
    QPushButton *pushButton_Zoom_out;

    void setupUi(QDialog *graph_window)
    {
        if (graph_window->objectName().isEmpty())
            graph_window->setObjectName(QString::fromUtf8("graph_window"));
        graph_window->resize(1022, 609);
        verticalLayout = new QVBoxLayout(graph_window);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pushButton_back = new QPushButton(graph_window);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Downloads/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_back->setIcon(icon);

        horizontalLayout_5->addWidget(pushButton_back);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_5);

        graphicsView = new QGraphicsView(graph_window);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        graphicsView->setTabletTracking(false);
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        graphicsView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        graphicsView->setInteractive(true);
        graphicsView->setDragMode(QGraphicsView::ScrollHandDrag);
        graphicsView->setTransformationAnchor(QGraphicsView::NoAnchor);

        verticalLayout->addWidget(graphicsView);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_zoom_in = new QPushButton(graph_window);
        pushButton_zoom_in->setObjectName(QString::fromUtf8("pushButton_zoom_in"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../Downloads/zoom-in.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_zoom_in->setIcon(icon1);

        horizontalLayout_4->addWidget(pushButton_zoom_in);

        pushButton_Zoom_out = new QPushButton(graph_window);
        pushButton_Zoom_out->setObjectName(QString::fromUtf8("pushButton_Zoom_out"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../Downloads/zoom-out.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Zoom_out->setIcon(icon2);

        horizontalLayout_4->addWidget(pushButton_Zoom_out);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(graph_window);

        QMetaObject::connectSlotsByName(graph_window);
    } // setupUi

    void retranslateUi(QDialog *graph_window)
    {
        graph_window->setWindowTitle(QApplication::translate("graph_window", "Project Social Media Analysis", nullptr));
        pushButton_back->setText(QApplication::translate("graph_window", "back", nullptr));
        pushButton_zoom_in->setText(QApplication::translate("graph_window", "Zoom in", nullptr));
        pushButton_Zoom_out->setText(QApplication::translate("graph_window", "Zoom out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class graph_window: public Ui_graph_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPH_WINDOW_H
