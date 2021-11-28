//
// Created by jmlop on 11/24/2021.
//

#ifndef RECRUITMENT_JJA_JML_SP_COLOMBIAN_H
#define RECRUITMENT_JJA_JML_SP_COLOMBIAN_H

#include "Nationality.h"

//Definicion de la clase Colombian
class Colombian:public Nationality{
protected:
    string name;
public:
    Colombian();
    ~Colombian() override;
    string culturalInfo() override;
    string holidayInfo() override;
};

#endif //RECRUITMENT_JJA_JML_SP_COLOMBIAN_H
