//
// Created by jmlop on 11/24/2021.
//

#ifndef RECRUITMENT_JJA_JML_SP_COLOMBIAN_H
#define RECRUITMENT_JJA_JML_SP_COLOMBIAN_H

#include "Nationality.h"

class Colombian:public Nationality{
protected:
    string name;
public:
    Colombian();
    ~Colombian() override;
    virtual string culturalInfo() override;
};

#endif //RECRUITMENT_JJA_JML_SP_COLOMBIAN_H
