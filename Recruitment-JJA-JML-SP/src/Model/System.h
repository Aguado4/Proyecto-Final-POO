//
// Created by jmlop on 11/22/2021.
//

#ifndef RECRUITMENT_JJA_JML_SP_SYSTEM_H
#define RECRUITMENT_JJA_JML_SP_SYSTEM_H

//Incluimos las librerias
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <map>
#include <string>
#include "Candidate.h"
#include "Nationality.h"
#include "Interview.h"
#include "Factory.h"

using std::cin;
using std::cout;
using std::string;
using std::map;

//Definicion de la clase system
class System{
private:
    int date[4];
    Factory factory;
    string values = "ParkingSoft is a multicultural organization as its founders are convinced that a "
                    "multicultural environment has many advantages. For example, they believe that cultural "
                    "diversity boosts innovation and creativity, increases respect, openness, and curiosity. "
                    "Also, the founders are convinced that interculturality improves their employees' ability"
                    " to tolerate ambiguity, which is a key attitude to compete in the global market.";
    map<int, Candidate*> candidatesMap;
    map<string, Nationality*> nationalitiesMap;
    map<int, Interview*> interviewsMap;
public:
    System();
    ~System();
    bool existingCandidate(int id);
    void addCandidate(int id);
    void createInterview(int id);
    void printLetter(int id);
    void printGuide(int id);
    void hireCandidate(int id);
    void changeDate();
    const string &getValues() const;
    void setValues(const string &values);
};

#endif //RECRUITMENT_JJA_JML_SP_SYSTEM_H