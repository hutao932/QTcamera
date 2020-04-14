//#include "oneform.h"
#include "comoneform.h"
#include <QApplication>
#include "comtwoform.h"
#include "comthreeform.h"
#include "comfourform.h"
#include "comfiveform.h"
#include "comsixform.h"
#include "comsevenform.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   ComOneForm::InitForm();
   ComTwoForm::InitForm();
   ComThreeForm::InitForm();
   ComFourForm::InitForm();
   ComFiveForm::InitForm();
   COMSixForm::InitForm();
   ComSevenForm::InitForm();
    ComOneForm::p_oneform->show();
    //oneform w;
   // w.show();
    return a.exec();
}
