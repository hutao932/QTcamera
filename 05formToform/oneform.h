#ifndef ONEFORM_H
#define ONEFORM_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class oneform; }
QT_END_NAMESPACE

class oneform : public QWidget
{
    Q_OBJECT

public:
    oneform(QWidget *parent = nullptr);
    ~oneform();

private slots:
    void on_btn_go2form_clicked();

    void on_btn_go3form_clicked();

private:
    Ui::oneform *ui;
};
#endif // ONEFORM_H
