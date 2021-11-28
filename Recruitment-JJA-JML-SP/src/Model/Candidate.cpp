//
// Created by juanj on 24/11/2021.
//

#include "Candidate.h"

Candidate::Candidate(){
    hired = false;//Por defecto no esta contratado
}

Candidate::Candidate(string name, int id, Nationality * nationality, string email, string linkedlnURL,
                     string gitURL, int passportNumber, bool hired){
    this->name = name;
    this->id = id;
    this->nationality = nationality;
    this->email = email;
    this->linkedlnURL = linkedlnURL;
    this->gitURL = gitURL;
    this->passportNumber = passportNumber;
    this->hired = hired;
}

string Candidate::getNationalityInfo(){
    return this->nationality->culturalInfo();//Devuelve la informacion de la cultura
}

string Candidate::getHolidayInfo(){
    return this->nationality->holidayInfo();//Devuelve información de los festivos para romper el hielo
    //en la entrevista
}

int Candidate::getId(){
    return id;
}

const string &Candidate::getName() const {
    return name;
}

void Candidate::setName(const string &name) {
    Candidate::name = name;
}

bool Candidate::isHired() const {
    return hired;//Para confirmar si esta contratado o no
}

void Candidate::setHired(bool hired) {
    Candidate::hired = hired;
}

Candidate::~Candidate(){
    printf("Llamar al destructor de sistema");//ya que ahí se guardo to-do con memoria dinamica
}
