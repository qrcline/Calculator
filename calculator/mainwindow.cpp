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





void MainWindow::on_pushButton_divide_clicked()
{
    calcModel.processUserInput("/");
    updateWindow();
}

void MainWindow::on_pushButton_multiply_clicked()
{
    calcModel.processUserInput("*");
    updateWindow();
}

void MainWindow::on_pushButton_1_clicked()
{
    calcModel.processUserInput("1");
    updateWindow();
}

void MainWindow::on_pushButton_2_clicked()
{
    calcModel.processUserInput("2");
    updateWindow();
}

void MainWindow::on_pushButton_3_clicked()
{
    calcModel.processUserInput("3");
    updateWindow();
}

void MainWindow::on_pushButton_4_clicked()
{
    calcModel.processUserInput("4");
    updateWindow();
}

void MainWindow::on_pushButton_5_clicked()
{
    calcModel.processUserInput("5");
    updateWindow();
}

void MainWindow::on_pushButton_6_clicked()
{
    calcModel.processUserInput("6");
    updateWindow();
}

void MainWindow::on_pushButton_7_clicked()
{
    calcModel.processUserInput("7");
    updateWindow();
}
void MainWindow::on_pushButton_8_clicked()
{
    calcModel.processUserInput("8");
    updateWindow();
}

void MainWindow::on_pushButton_9_clicked()
{
    calcModel.processUserInput("9");
    updateWindow();
}

void MainWindow::on_pushButton_subtract_clicked()
{
    calcModel.processUserInput("-");
    updateWindow();
}

void MainWindow::on_pushButton_clear_clicked()
{
    calcModel.processUserInput("C");
    updateWindow();
}

void MainWindow::on_pushButton_0_clicked()
{
    calcModel.processUserInput("0");
    updateWindow();
}

void MainWindow::on_pushButton_equal_clicked()
{
    calcModel.processUserInput("=");
    updateWindow();
}

void MainWindow::on_pushButton_plus_clicked()
{
    calcModel.processUserInput("+");
    updateWindow();
}

void MainWindow::updateWindow()
{
    ui->lcdNumber->display(calcModel.getCurrentValue());
}




