//
// Created by jmlop on 11/22/2021.
//

#ifndef RECRUITMENT_JJA_JML_SP_INTERVIEW_H
#define RECRUITMENT_JJA_JML_SP_INTERVIEW_H

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
    int numberOfInterviewDay; //Para controlar que solo hayan 3 entrevistas al dia
public:
    Interview(/* args */);
    ~Interview();
};

#endif //RECRUITMENT_JJA_JML_SP_INTERVIEW_H
