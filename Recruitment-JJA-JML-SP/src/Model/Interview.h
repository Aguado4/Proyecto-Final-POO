//
// Created by jmlop on 11/22/2021.
//

#ifndef RECRUITMENT_JJA_JML_SP_INTERVIEW_H
#define RECRUITMENT_JJA_JML_SP_INTERVIEW_H

//Incluimos las librerias
#include <iostream>
#include <stdlib.h>

using namespace std;

//Definicion de la clase interview
class Interview{
    private:
        int candidateId;
        int* date;
    public:
        Interview(int candidateId, int date[4]);
        void printDate();
        int getCandidateId() const;
        void setCandidateId(int candidateId);
        const int *getDate() const;
        ~Interview();

};

#endif
