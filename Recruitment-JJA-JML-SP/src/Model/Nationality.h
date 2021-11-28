//
// Created by jmlop on 11/22/2021.
//

#ifndef RECRUITMENT_JJA_JML_SP_NATIONALITY_H
#define RECRUITMENT_JJA_JML_SP_NATIONALITY_H

//Incluimos las librerias
#include <iostream>
#include <stdlib.h>

using std::cin;
using std::cout;
using std::string;

//Definicion de la clase nationality
class Nationality{
protected:
    string name;
public:
    Nationality();
    virtual string culturalInfo() = 0;
    virtual string holidayInfo() = 0;
    virtual ~Nationality();
};

#endif //RECRUITMENT_JJA_JML_SP_NATIONALITY_H


