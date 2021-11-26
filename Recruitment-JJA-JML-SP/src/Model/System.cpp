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
        cout << "Type the Id of the candidate: ";
        cin >> id;
    }while(!existingCandidate(id));
    Interview* cita = new Interview(id, this->date, this->hour);
    interviewsMap.insert({id, cita});
    setHour(this->hour++);
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

void System::setHour(int hour) {
    System::hour = hour;
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