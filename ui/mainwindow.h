#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QToolBar>
#include <ui/option.h>
class MainWindow : public QMainWindow
{
Q_OBJECT
public:
        QTextEdit * text1;
        QTextEdit * text2;
        QVBoxLayout * lay;
        QVBoxLayout * lay1;
        QToolBar * tbar;

explicit MainWindow(QWidget *parent = 0);
signals:
public slots:
    void open();
    void save();
    void edit();
    void erase();
    void help();

private:
    Option *formOption;

};
#endif // MAINWINDOW_H
