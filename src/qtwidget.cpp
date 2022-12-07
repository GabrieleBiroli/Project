#include "qtwidget.hpp"
#include "ui_qtwidget.h"

QtWidget::QtWidget(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::QtWidget)
{
    ui->setupUi(this);
}

QtWidget::~QtWidget()
{
    delete ui;
}