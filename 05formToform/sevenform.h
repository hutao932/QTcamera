#ifndef SEVENFORM_H
#define SEVENFORM_H

#include <QWidget>

namespace Ui {
class sevenform;
}

class sevenform : public QWidget
{
    Q_OBJECT

public:
    explicit sevenform(QWidget *parent = nullptr);
    ~sevenform();

private:
    Ui::sevenform *ui;
};

#endif // SEVENFORM_H
