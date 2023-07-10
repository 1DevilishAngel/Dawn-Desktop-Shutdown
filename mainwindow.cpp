#include "mainwindow.h"
#include "./ui_mainwindow.h"

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


void MainWindow::on_pushButton_2_clicked()
{
  std::system("systemctl poweroff");
}


void MainWindow::on_pushButton_5_clicked()
{
   std::system("systemctl suspend");
}


void MainWindow::on_pushButton_4_clicked()
{
    std::system("systemctl hibernate");
}


void MainWindow::on_pushButton_3_clicked()
{
    std::system("systemctl reboot");
}


void MainWindow::on_pushButton_6_clicked()
{
    std::system("pkill -u $USER");
}


void MainWindow::on_pushButton_7_clicked()
{
    std::system("xlock");
}

