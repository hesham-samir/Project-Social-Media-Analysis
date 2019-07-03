#ifndef EDGES_H
#define EDGES_H

#include <QDialog>
#include "graph_class.h"
#include "graph_window.h"

namespace Ui {
class edges;
}

class edges : public QDialog
{
    Q_OBJECT

public:
    explicit edges(QWidget *parent = nullptr);
    ~edges();

private slots:
    void on_pushButton_edges_input_clicked();

private:
    Ui::edges *ui;
    int count ;
    graph_class *g;
    graph_window * graph_window_view;

};

#endif // EDGES_H
