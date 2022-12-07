#ifndef QTWIDGET_HPP
#define QTWIDGET_HPP

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class QtWidget; }
QT_END_NAMESPACE

class QtWidget : public QMainWindow
{
    Q_OBJECT

public:
    QtWidget(QWidget *parent = nullptr);
    ~QtWidget();

private:
    Ui::QtWidget *ui;
};
#endif // QTWIDGET_HPP
