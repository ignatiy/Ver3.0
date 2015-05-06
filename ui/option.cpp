#include "option.h"

Option::Option(QWidget *parent) : QMainWindow(parent)
{
setMinimumSize(320,320);
setWindowTitle(tr("STM32_DumpEDIT"));

lbl = new QLabel(this);
lbl->setGeometry(80,20,320,20);
//lbl->setStyleSheet("QLabel { background-color : #000000 ; color : #00ff00; }");
lbl->setText(lbl->text() + "Программа STM32_DumpEDIT");





}
