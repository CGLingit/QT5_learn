#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //创建按钮
    button= new QPushButton(this);
    //按钮位置
    button->setGeometry(QRect(100,100,100,25));
    button->setText("push");
    connect(button,SIGNAL(clicked()),this,SLOT(txtButton()));
}

void MainWindow::txtButton(){
    button->setText("loveyou");
}

MainWindow::~MainWindow()
{
    delete ui;
}
