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
    int date[4];
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
    void addCandidate(string name, int id, Nationality * nationality, string email, string linkedlnURL,
                      string gitURL, int passportNumber);
    void createInterview(int id);
    void printLetter(int id);
    void hireCandidate(int id);
    void changeDate();
    const string &getValues() const;
    void setValues(const string &values);
};

#endif //RECRUITMENT_JJA_JML_SP_SYSTEM_H