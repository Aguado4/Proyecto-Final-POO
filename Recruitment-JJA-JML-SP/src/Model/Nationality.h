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
private:
    string Name;
    string eyeContact;
    string gestures;
    string touch;
    string personalSpace;
    string timeManagement;
    string communication;
    string nap;
public:
    Nationality();
    ~Nationality();
};

#endif //RECRUITMENT_JJA_JML_SP_NATIONALITY_H
