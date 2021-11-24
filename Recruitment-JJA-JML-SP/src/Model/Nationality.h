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
    string Name;
    string eyeContact;
    string gestures;
    string touch;
    string personalSpace;
    string timeManagement;
    string communication;
    string nap;
public:
    virtual string getName() = 0;

    virtual string getEyeContact() = 0;

    virtual string getGestures() = 0;

    virtual string getTouch() = 0;

    virtual string getPersonalSpace() = 0;

    virtual string getTimeManagement() = 0;

    virtual string getCommunication() = 0;

    virtual string getNap() = 0;

public:
    Nationality();
    virtual ~Nationality();
};

#endif //RECRUITMENT_JJA_JML_SP_NATIONALITY_H
