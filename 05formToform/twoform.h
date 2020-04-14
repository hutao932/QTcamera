#ifndef TWOFORM_H
#define TWOFORM_H

#include <QWidget>

namespace Ui {
class twoform;
}

class twoform : public QWidget
{
    Q_OBJECT

public:
    explicit twoform(QWidget *parent = nullptr);
    ~twoform();

private slots:
    void on_btn_go1form_clicked();

    void on_btn_go3form_clicked();

private:
    Ui::twoform *ui;
};

#endif // TWOFORM_H
