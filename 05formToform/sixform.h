#ifndef SIXFORM_H
#define SIXFORM_H

#include <QWidget>

namespace Ui {
class sixform;
}

class sixform : public QWidget
{
    Q_OBJECT

public:
    explicit sixform(QWidget *parent = nullptr);
    ~sixform();

private:
    Ui::sixform *ui;
};

#endif // SIXFORM_H
