#include "comtwoform.h"

twoform *ComTwoForm::p_twoform = NULL;


ComTwoForm::ComTwoForm()
{

}

void ComTwoForm::InitForm(){

    p_twoform=new twoform();

}
