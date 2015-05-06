#ifndef OPTION_H
#define OPTION_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QLabel>

class Option : public QMainWindow
{
    Q_OBJECT
public:
    QLabel * lbl;



    explicit Option(QWidget *parent = 0);


signals:

public slots:
};

#endif // OPTION_H
