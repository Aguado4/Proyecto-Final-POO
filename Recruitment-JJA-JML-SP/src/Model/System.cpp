//
// Created by juanj on 24/11/2021.
//

#include "System.h"

System::System(){
    //Podríamos poner las nacionalidades base y unos candidatos de dummy
    this->date[0] = 2021; //año
    this->date[1] = 1; //mes
    this->date[2] = 1; //dia
    this->date[3] = 10; //hora
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
void System::addCandidate(int id){
    if (!existingCandidate(id)){
        //se crea el candidato
        Candidate *pCandidate = factory.createCandidate(id);
        //se agrega al mapa
        candidatesMap.insert({pCandidate->getId(), pCandidate});
    }else{
        throw std::invalid_argument("A candidate with this id already exists.\n");
    }
}

void System::createInterview(int id){
    if(existingCandidate(id)){
        Interview* cita = new Interview(id, this->date);
        interviewsMap.insert({id, cita});
        changeDate();
    }else{
        throw std::invalid_argument("A candidate with this id does not exists.\n");
    }
}

void System::printLetter(int id){
    ofstream archivoTemp;
    string nombreArchivo = "carta.txt";
    archivoTemp.open(nombreArchivo);
    archivoTemp << "Mr/Ms " << candidatesMap[id]->getName() << ".\n" << endl
                << "Welcome to ParkingSoft, you have been hired." << endl << endl
                << getValues() << endl
                //<< "" cosas colombianas
                << "Congratulaichons." << endl;
    archivoTemp.close();
}

void System::printGuide(int id) {
    ofstream archivoTemp;
    string nombreArchivo = "guia.txt";
    archivoTemp.open(nombreArchivo);
    archivoTemp <<"Interview for Mr/Ms "<< candidatesMap[id]->getName() << ".\n" << endl
    << "Important information about the candidate´s culture: \n" << endl
    << candidatesMap[id]->returnNationalityInfo() << endl << endl
    << "Holiday information to break the ice :\n\n"
    << "";
}

void System::hireCandidate(int id){
    if(existingCandidate(id)){
        candidatesMap[id]->setHired(1);
        printLetter(id);
    }else{
        throw std::invalid_argument("A candidate with this id does not exists.\n");
    }
}

void System::changeDate(){
    if(date[3] == 12){
        date[2]++;
        date[3] = 10;
        if(date[2] == 31){
            date[1]++;
            date[2] = 1;
            if(date[1] == 12){
                date[0]++;
                date[1] = 1;
            }
        }
    }else{
        date[3]++;
    }
}

const string &System::getValues() const {
    return values;
}

void System::setValues(const string &values) {
    System::values = values;
}

System::~System(){
    //TODO
}