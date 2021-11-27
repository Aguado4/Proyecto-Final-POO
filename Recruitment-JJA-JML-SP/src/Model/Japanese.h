//
// Created by jmlop on 11/24/2021.
//

#ifndef RECRUITMENT_JJA_JML_SP_JAPANESE_H
#define RECRUITMENT_JJA_JML_SP_JAPANESE_H
#include "Nationality.h"

class Japanese:public Nationality{
protected:
    string name;
public:
    Japanese();
    ~Japanese() override;
    string culturalInfo() override;
    string holidayInfo() override;
};
#endif //RECRUITMENT_JJA_JML_SP_JAPANESE_H
