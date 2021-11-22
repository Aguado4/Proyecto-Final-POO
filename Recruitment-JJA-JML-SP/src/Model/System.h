//
// Created by jmlop on 11/22/2021.
//

#ifndef RECRUITMENT_JJA_JML_SP_SYSTEM_H
#define RECRUITMENT_JJA_JML_SP_SYSTEM_H

//Incluimos las librerias
#include <iostream>
#include <stdlib.h>
#include <map>
#include "Candidate.h"
#include "Nationality.h"

using std::cin;
using std::cout;
using std::string;
using std::map;

//Definicion de la clase system
class System{
private:
    map<int, Candidate*> candidatesMap;
    map<string, Nationality*> nationalitiesMap;
public:
    System();
    ~System();
};

#endif //RECRUITMENT_JJA_JML_SP_SYSTEM_H
