#include "graph_window.h"
#include "ui_graph_window.h"
#include <QGraphicsTextItem>
#include <cstdlib>
#include "mainwindow.h"

extern vector <int> from_vector;
extern vector <int> to_vector;
extern vector <float> r_vector;
extern int nodes_number;
extern int edges_number;
graph_window::graph_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::graph_window)
{
    ui->setupUi(this);

    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    for(int i = 0; i < nodes_number; i++)
    {
        circle = scene->addEllipse(get_x(i+1),get_y(i+1),r_vector[i]*10+20,r_vector[i]*10+20);
        QGraphicsTextItem *text = scene->addText(QString::number(i));
        text->setPos(get_x(i+1) + (r_vector[i]*10+20)/6 , get_y(i+1) + (r_vector[i]*10+20)/10);
        circle->setFlag(QGraphicsItem::ItemClipsChildrenToShape, true);
        circle->setBrush(QColor((rand() % 255),(rand() % 255),(rand() % 255)));
    }
    for( int i = 0; i<edges_number;i++)
    {
        scene ->addLine(get_x(from_vector[i] + 1) + (r_vector[from_vector[i]]*10+20)/6 ,get_y(from_vector[i] + 1)+ (r_vector[from_vector[i]]*10+20)/10,get_x(to_vector[i]+ 1) + (r_vector[to_vector[i]+ 1]*10+20)/6,get_y(to_vector[i]+ 1)+ (r_vector[i]*10+20)/10);

    }


}

graph_window::~graph_window()
{
    delete ui;
}
int graph_window::get_x(int id)
{
    if(id >= (nodes_number/2 ) )
    {
        id =  id - (nodes_number/2 ) +1;
    }
    int y = id/2 * 100;
    if(id % 2 == 0)
    {
        return  (id/2)*(y*-1);
    }
    else
    {
        return (id/2)*y;
    }
}
int graph_window::get_y(int id)
{
    return  id/2 * 100;
}


void graph_window::on_pushButton_zoom_in_clicked()
{
    double scaleFactor = 1.15;
    ui->graphicsView->scale(scaleFactor, scaleFactor);
}

void graph_window::on_pushButton_Zoom_out_clicked()
{
    double scaleFactor = 1.15;
    ui->graphicsView->scale(1.0 / scaleFactor, 1.0 / scaleFactor);
}

void graph_window::on_pushButton_back_clicked()
{
    hide();
    edges_number = 0;
    nodes_number = 0;
    from_vector.clear();
    to_vector.clear();
    r_vector.clear();
    MainWindow * main_win;
    main_win = new MainWindow(this);
    main_win->show();
}
