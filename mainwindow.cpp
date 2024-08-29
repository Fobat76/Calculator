#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
int firstnum, secondnum, Result;
void MainWindow::on_Badd_clicked()
{
    firstnum = ui->txtFirstNum->text().toInt();
    secondnum = ui->txtSecondNum->text().toInt();
    Result = firstnum + secondnum;
}


void MainWindow::on_Bsub_clicked()
{
    firstnum = ui->txtFirstNum->text().toInt();
    secondnum = ui->txtSecondNum->text().toInt();
    Result = firstnum - secondnum;
}


void MainWindow::on_Bmulti_clicked()
{
    firstnum = ui->txtFirstNum->text().toInt();
    secondnum = ui->txtSecondNum->text().toInt();
    Result = firstnum * secondnum;
}


void MainWindow::on_Bdiv_clicked()
{
    firstnum = ui->txtFirstNum->text().toInt();
    secondnum = ui->txtSecondNum->text().toInt();
    Result = firstnum / secondnum;
}


void MainWindow::on_pushButton_clicked()
{
    ui->txtResult->setText(QString::number(Result));
}

