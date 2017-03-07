#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    lineEdit=new QLineEdit(this);

    lineEdit->setEchoMode(QLineEdit::Password);//密码*号输入
    lineEdit->setMaxLength(12);//输入的最大长度
    lineEdit->setStyleSheet("border:1px;border-style:solid;color:red;border-color:blue;");
    lineEdit->move(100,100);
}

MainWindow::~MainWindow()
{
    delete ui;
}
