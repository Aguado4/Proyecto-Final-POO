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
        string date;
        int hour;
    public:
        Interview(int candidateId, string date, int hour);
        int getCandidateId() const;
        void setCandidateId(int candidateId);
        const string &getDate() const;
        void setDate(const string &date);
        int getHour() const;
        void setHour(int hour);
        ~Interview();

    virtual ~Interview();
};

#endif
