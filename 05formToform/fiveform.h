#ifndef FIVEFORM_H
#define FIVEFORM_H

#include <QWidget>

namespace Ui {
class fiveform;
}

class fiveform : public QWidget
{
    Q_OBJECT

public:
    explicit fiveform(QWidget *parent = nullptr);
    ~fiveform();

private:
    Ui::fiveform *ui;
};

#endif // FIVEFORM_H
