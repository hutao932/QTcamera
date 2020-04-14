#ifndef FOURFORM_H
#define FOURFORM_H

#include <QWidget>

namespace Ui {
class fourForm;
}

class fourForm : public QWidget
{
    Q_OBJECT

public:
    explicit fourForm(QWidget *parent = nullptr);
    ~fourForm();

private slots:
    void on_btn_go5form_clicked();

private:
    Ui::fourForm *ui;
};

#endif // FOURFORM_H
