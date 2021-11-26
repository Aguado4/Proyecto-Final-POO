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
#include "Interview.h"

using std::cin;
using std::cout;
using std::string;
using std::map;

//Definicion de la clase system
class System{
private:
    string date;
    int hour;
    map<int, Candidate*> candidatesMap;
    map<string, Nationality*> nationalitiesMap;
    map<int, Interview*> interviewsMap;
public:
    System();
    ~System();
    bool existingCandidate(int id);
    void addCandidate(string name, int id, Nationality * nationality, string email, string linkedlnURL,
                      string gitURL, int passportNumber);
    void createInterview();
    void setHour(int hour);
};

#endif //RECRUITMENT_JJA_JML_SP_SYSTEM_H