#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{

    File = new QMenu("药品");
    Edit = new QMenu("人员");

    menuBar()->addMenu(File);
    menuBar()->addMenu(Edit);

    //Tool = new QToolBar("全部");

    Tool = new QToolBar("全部显示");
    Tool->addSeparator();

    addToolBar(Qt::TopToolBarArea,Tool);

}

MainWindow::~MainWindow()
{
    
}
