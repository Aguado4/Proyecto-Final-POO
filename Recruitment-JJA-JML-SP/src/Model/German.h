//
// Created by jmlop on 11/24/2021.
//

#ifndef RECRUITMENT_JJA_JML_SP_GERMAN_H
#define RECRUITMENT_JJA_JML_SP_GERMAN_H
#include "Nationality.h"

class German:public Nationality{
protected:
    string name;
public:
    German();
    ~German() override;
    string culturalInfo() override;
    string holidayInfo() override;
};
#endif //RECRUITMENT_JJA_JML_SP_GERMAN_H
