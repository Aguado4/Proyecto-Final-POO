//
// Created by jmlop on 11/24/2021.
//

#ifndef RECRUITMENT_JJA_JML_SP_AFGHAN_H
#define RECRUITMENT_JJA_JML_SP_AFGHAN_H
#include "Nationality.h"

class Afghan:public Nationality{
protected:
    string name;
public:
    Afghan();
    ~Afghan() override;
    string culturalInfo() override;
    string holidayInfo() override;
};
#endif //RECRUITMENT_JJA_JML_SP_AFGHAN_H
