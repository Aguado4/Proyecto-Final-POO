//
// Created by jmlop on 11/22/2021.
//

#ifndef UNTITLED_CANDIDATE_H
#define UNTITLED_CANDIDATE_H
//Incluimos las librerias
#include <iostream>
#include <stdlib.h>
#include "Nationality.h"
#include "Interview.h"

using std::cin;
using std::cout;
using std::string;

//Definicion de la clase system
class Candidate{
private:
    string name;
    int id;
    Nationality nationality;
    string email;
    string linkedlnURL;
    string gitURL;
    int passportNumber;
    Interview interview;
public:
    Candidate(/* args */);
    ~Candidate();
};
#endif //UNTITLED_CANDIDATE_H
