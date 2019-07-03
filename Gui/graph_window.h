#ifndef GRAPH_WINDOW_H
#define GRAPH_WINDOW_H
#include "graph_class.h"
#include <QGraphicsScene>
#include <QDialog>
#include <QGraphicsView>
#include <QWheelEvent>


namespace Ui {
class graph_window;
}

class graph_window : public QDialog
{
    Q_OBJECT

public:
    explicit graph_window(QWidget *parent = nullptr);
    ~graph_window();
    int get_x(int id);
    int get_y(int id);
private:
    Ui::graph_window *ui;
    QGraphicsScene *scene;
    QGraphicsEllipseItem *circle;
    QWheelEvent* event;
private slots:
    void on_pushButton_zoom_in_clicked();
    void on_pushButton_Zoom_out_clicked();
    void on_pushButton_back_clicked();
};

#endif // GRAPH_WINDOW_H
