//
// Created by jmlop on 11/27/2021.
//

#ifndef RECRUITMENT_JJA_JML_SP_FACTORY_H
#define RECRUITMENT_JJA_JML_SP_FACTORY_H
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <vector>
#include "Candidate.h"
#include "Nationality.h"
#include "Colombian.h"
#include "Japanese.h"
#include "German.h"
#include "Afghan.h"
using std::cin;
using std::cout;
using std::string;
using std::vector;

//Definicion de la clase factory
class Factory{
private:
    vector<Nationality*>nationalities;
public:
    Factory();
    ~Factory();
    Candidate* createCandidate(int id);
    string getCulturalInfo(int nationality);
    string getHolidayInfo(int nationality);
    const vector<Nationality *> &getNationalities() const;
};

#endif //RECRUITMENT_JJA_JML_SP_FACTORY_H
