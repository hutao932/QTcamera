#include "comthreeform.h"
threeform *ComThreeForm::p_threeform = NULL;
ComThreeForm::ComThreeForm()
{

}

void ComThreeForm::InitForm(){
    p_threeform=new threeform();

}
