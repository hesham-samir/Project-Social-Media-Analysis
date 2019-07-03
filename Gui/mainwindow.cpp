#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

int nodes_number;
int edges_number;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_nodes_number_clicked()
{
    nodes_number = (ui->lineEdit_nodes_number->text()).split(" ")[0].toInt();
    edges_number = (ui->lineEdit_edges_number->text()).split(" ")[0].toInt();
    hide();
    edges_window = new edges(this);
    edges_window->show();

}
