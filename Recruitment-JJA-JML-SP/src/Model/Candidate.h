//
// Created by jmlop on 11/22/2021.
//

#ifndef UNTITLED_CANDIDATE_H
#define UNTITLED_CANDIDATE_H
//Incluimos las librerias
#include <iostream>
#include <stdlib.h>
#include "Nationality.h"

using std::cin;
using std::cout;
using std::string;

//Definicion de la clase system
class Candidate{
private:
    string name, email, linkedlnURL, gitURL;
    int id, passportNumber;
    Nationality* nationality;
    bool hired;
public:
    Candidate();
    Candidate(string name, int id, Nationality * nationality, string email, string linkedlnURL, string gitURL, int passportNumber, bool hired);
    ~Candidate();
    string returnNationalityInfo();
    //gets & sets
    int getId();
    const string &getName() const;
    void setName(const string &name);
    bool isHired() const;
    void setHired(bool hired);
};

#endif //UNTITLED_CANDIDATE_H
