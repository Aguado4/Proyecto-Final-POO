//
// Created by juanj on 24/11/2021.
//

#include "System.h"

System::System(){
    //Podríamos poner las nacionalidades base y unos candidatos de dummy
    this->date = "ayer";
    this->hour = 10;
}

bool System::existingCandidate(int id){
    for(map<int, Candidate*>::iterator it = candidatesMap.begin(); it != candidatesMap.end(); it++){
        if(it->first == id){
            return true;
        }
    }
    return false;
}
//primero verifica que no exista el candidato
void System::addCandidate(string name, int id, Nationality * nationality, string email, string linkedlnURL,
                          string gitURL, int passportNumber){
    if (!existingCandidate(id)){
        //se crea el candidato
        Candidate *pCandidate = new Candidate (name, id, nationality, email, linkedlnURL, gitURL, passportNumber, false);
        //se agrega al mapa
        candidatesMap.insert({pCandidate->getId(), pCandidate});
    }else{
        throw std::invalid_argument("A candidate with this id already exists\n");
    }
}

void System::createInterview(){
    int id;
    do{
        cout << "Type de Id of the candidate: ";
        cin >> id;
    }while(!existingCandidate(id));
    Interview* cita = new Interview(id, this->date, this->hour);
    interviewsMap.insert({id, cita});
    setHour(this->hour++);
}

void System::setHour(int hour) {
    System::hour = hour;
}

System::~System(){
    //TODO
}