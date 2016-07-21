#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenu>
#include <QMenuBar>
#include <QAction>
#include <QToolBar>
#include <QFontComboBox>
#include <QLabel>


class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
protected:

    QMenu *File;
    QMenu *Edit;
    QMenuBar *total;
    QToolBar *Tool;






//public slots :
//    void opencliced();//定义槽函数
};

#endif // MAINWINDOW_H
