#ifndef INTERVIEW_H
#define INTERVIEW_H

//Incluimos las librerias
#include <iostream>
#include <stdlib.h>

using std::cin;
using std::cout;
using std::string;

//Definicion de la clase interview
class Interview
{
private:
    int candidateId;
    string date;
    int hour;//duran una hora, comienzan a las 10 y solo son 3 asi que tienen que ser a las 10,11 o 12
    int numberOfInterviewDay; //Pasra controlar que solo hayan 3 entrevistas al dia
public:
    Interview(/* args */);
    ~Interview();
};

#endif