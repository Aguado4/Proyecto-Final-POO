//
// Created by juanj on 24/11/2021.
//

#include "System.h"

System::System(){
    //Podríamos poner las nacionalidades base y unos candidatos de dummy
}

bool System::existingCandidate(int id){
    for(map<int, Candidate*>::iterator it = candidatesMap.begin(); it != candidatesMap.end(); it++){
        if(it->first == id){
            return true;
        }
    }
    return false;
}

void System::addCandidate(string name, int id, Nationality * nationality, string email, string linkedlnURL,
                          string gitURL, int passportNumber){
    if (existingCandidate(id) == false){
        //se crea el candidato
        Candidate *pCandidate = new Candidate (name, id, nationality, email, linkedlnURL, gitURL, passportNumber, false);
        //se agrega al mapa
        candidatesMap.insert({pCandidate->getId(), pCandidate});
    }else{
        throw std::invalid_argument("A candidate with this id already exists\n");
    }
}

System::~System(){
    //TODO
}