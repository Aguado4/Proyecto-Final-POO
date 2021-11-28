//
// Created by juanj on 24/11/2021.
//

#include "System.h"

System::System(){
    this->date[0] = 2021; //año
    this->date[1] = 1; //mes
    this->date[2] = 1; //dia
    this->date[3] = 10; //hora
    //Se crean candidatos base para facilitar las pruebas
    candidatesMap.insert({1,new Candidate("Aguado", 1, factory.getNationalities()[0], "aguado4@jacerianacali.edu.co", "No tiene linkedln",
                                          "https://github.com/Aguado4/Proyecto-Final-POO.git", 1005745011, false)});
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
        printGuide(id);
    }else{
        throw std::invalid_argument("A candidate with this id does not exists.\n");
    }
}

void System::printLetter(int id){
    ofstream archivoTemp;
    string idStrng = to_string(id);
    string nombreArchivo = "letter_" + idStrng + ".txt";
    archivoTemp.open(nombreArchivo);
    archivoTemp << "Mr/Ms " << candidatesMap[id]->getName() << ".\n" << endl
                << "Welcome to ParkingSoft, you have been hired." << endl << endl
                << getValues() << endl
                << factory.getCulturalInfo(0)<< endl
                << "\nCongratulations." << endl;
    archivoTemp.close();
    string s = "notepad "+ nombreArchivo;
    system(s.c_str());
}

void System::printGuide(int id) {
    ofstream archivoTemp;
    string idStrng = to_string(id);
    string nombreArchivo = "guide_" + idStrng + ".txt";
    archivoTemp.open(nombreArchivo);
    archivoTemp <<"Interview for Mr/Ms "<< candidatesMap[id]->getName() << ".\n" << endl
    << "Important information about the candidate´s culture: \n" << endl
    << candidatesMap[id]->getNationalityInfo() << endl << endl
    << "Holiday information to break the ice :\n\n"
    << candidatesMap[id]->getHolidayInfo() << "\n\nGood luck in your interview!";
    archivoTemp.close();
    string s = "notepad "+ nombreArchivo;
    system(s.c_str());
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
    //Se libera la memoria de las interviews y candidatos
    for (map<int, Candidate*>:: iterator it = candidatesMap.begin(); it != candidatesMap.end(); it++){
        Candidate * tempCandidate = candidatesMap[it->first];
        delete tempCandidate;
    }

    for (map<int, Interview*>:: iterator  it = interviewsMap.begin(); it != interviewsMap.end(); it++){
        Interview * tempInterview = interviewsMap[it->first];
        delete tempInterview;
    }
    //Factory no se tiene que borrar ya que no usa memoria dinamica
}

void System::showNationalityInfo(int code) {
    //ya que solo hay 4 nacionalidades base, al ser un vector es mas facil verificar asi
    if(code > -1 && code < 4){
        cout << factory.getCulturalInfo(code);
    }else{
        throw std::invalid_argument("A nationality with this code does not exists.\n");
    }
}
