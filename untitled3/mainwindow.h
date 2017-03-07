#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMouseEvent>
#include <QPushbutton>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    //定义三种状态的方法
    protected:
    //鼠标按下
    void mousePressEvent(QMouseEvent *e);
    //鼠标移动
    void mouseMoveEvent(QMouseEvent *e);
    //鼠标释放
    void mouseReleaseEvent(QMouseEvent *e);

    //定义QPoint对象
    private:
    QPushButton *btClose;
    QPoint last;
};

#endif // MAINWINDOW_H
