//
// Created by juanj on 24/11/2021.
//

#include "Candidate.h"

Candidate::Candidate(){
    hired = false;
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
    return this->nationality->culturalInfo();
}

string Candidate::getHolidayInfo(){
    return this->nationality->holidayInfo();
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
    return hired;
}

void Candidate::setHired(bool hired) {
    Candidate::hired = hired;
}

Candidate::~Candidate(){
    printf("Llamar al destructor de sistema");//ya que ahí se guardo todo con memoria dinamica
}
