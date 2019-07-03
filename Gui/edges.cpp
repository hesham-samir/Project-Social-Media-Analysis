#include "edges.h"
#include "ui_edges.h"
#include <QLabel>
#include <QLineEdit>
#include <QVBoxLayout>

extern int nodes_number;
extern int edges_number;

vector <int> from_vector(edges_number);
vector <int> to_vector(edges_number);
vector <float> r_vector(nodes_number);
edges::edges(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edges)
{
    count = 0;
    g = new graph_class(nodes_number);
    if(edges_number == 0)
    {
        for(int i = 0; i < nodes_number; i++)
        {
            r_vector.push_back(g->get_node_degree(i));
        }
        hide();
        graph_window_view = new graph_window(this);
        graph_window_view->show();

    }
    ui->setupUi(this);

}

edges::~edges()
{
    delete ui;
}

void edges::on_pushButton_edges_input_clicked()
{

    int from = ui->lineEdit_from->text().split(" ")[0].toInt();
    int to = ui->lineEdit_to->text().split(" ")[0].toInt();
    ui->lineEdit_to->clear();
    ui->lineEdit_from->clear();
    g->add_edge(from, to, 1);
    from_vector.push_back(from);
    to_vector.push_back(to);
    count = count + 1;
    if(count >= edges_number)
    {
        for(int i = 0; i < nodes_number; i++)
        {
            r_vector.push_back(g->get_node_degree(i));
        }
        hide();
        graph_window_view = new graph_window(this);
        graph_window_view->show();

    }
}
