#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "calcmodel.h"

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

void MainWindow::on_button_7_clicked()
{
   CalcModel->CalcModelgetCurrentValue("7");
}

void MainWindow::on_pushButton_17_clicked()
{

}

void MainWindow::on_pushButton_18_clicked()
{

}

void MainWindow::on_pushButton_divide_clicked()
{

}

void MainWindow::on_pushButton_4_clicked()
{

}

void MainWindow::on_pushButton_5_clicked()
{

}

void MainWindow::on_pushButton_7_clicked()
{

}

void MainWindow::on_pushButton_multiply_clicked()
{

}

void MainWindow::on_pushButton_1_clicked()
{

}

void MainWindow::on_pushButton_2_clicked()
{

}

void MainWindow::on_pushButton_3_clicked()
{

}

void MainWindow::on_pushButton_subtract_clicked()
{

}

void MainWindow::on_pushButton_clear_clicked()
{

}

void MainWindow::on_pushButton_0_clicked()
{

}

void MainWindow::on_pushButton_equal_clicked()
{

}

void MainWindow::on_pushButton_plus_clicked()
{

}
