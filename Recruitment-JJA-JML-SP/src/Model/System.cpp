//
// Created by juanj on 24/11/2021.
//

#include "System.h"

System::System(){
    //Fecha inicial
    this->date[0] = 2021; //año
    this->date[1] = 1; //mes
    this->date[2] = 1; //dia
    this->date[3] = 10; //hora
    //Se crean candidatos base para facilitar las pruebas
    candidatesMap.insert({1,new Candidate("Aguado", 1, factory.getNationalities()[0], "aguado4@jacerianacali.edu.co", "No tiene linkedln",
                                          "https://github.com/Aguado4/Proyecto-Final-POO.git", 1005745011, false)});
}

bool System::existingCandidate(int id){
    //Devuelve true si existe el candidato, util para las excepciones
    for(map<int, Candidate*>::iterator it = candidatesMap.begin(); it != candidatesMap.end(); it++){
        if(it->first == id){
            return true;
        }
    }
    return false;
}

void System::addCandidate(int id){
    //Primero verifica que no exista el candidato
    if (!existingCandidate(id)){
        //Se crea el candidato
        Candidate *pCandidate = factory.createCandidate(id);
        //Se agrega al mapa
        candidatesMap.insert({pCandidate->getId(), pCandidate});
    }else{
        throw std::invalid_argument("A candidate with this id already exists.\n");
        //Tira error ya que ya existe candidato con esa id
    }
}

void System::createInterview(int id){
    //Primero verifica que no exista el candidato
    if(existingCandidate(id)){
        Interview* cita = new Interview(id, this->date);
        interviewsMap.insert({id, cita});//Crea y añade la entrevista
        changeDate();//Modifica la fecha y hora automaticamente para la siguiente entrevista
        printGuide(id);//Imprime la guia de una vez para el entrevistador
    }else{
        throw std::invalid_argument("A candidate with this id does not exists.\n");
        //Tira error ya que no existe candidato con esa id
    }
}

void System::printLetter(int id){
    ofstream archivoTemp;
    string idStrng = to_string(id);
    string nombreArchivo = "letter_" + idStrng + ".txt";//Creamos un archivo con el numero del candidato
    //para poder diferenciarlos
    archivoTemp.open(nombreArchivo);
    archivoTemp << "Mr/Ms " << candidatesMap[id]->getName() << ".\n" << endl //Con nombre personalizado
                << "Welcome to ParkingSoft, you have been hired." << endl << endl
                << getValues() << endl //Muestra los valores de la empresa
                << factory.getCulturalInfo(0)<< endl //Muestra las costumbres colombianas
                << "\nCongratulations." << endl;
    archivoTemp.close();
    string s = "notepad "+ nombreArchivo;
    system(s.c_str());//Abre en pantalla la carta de bienvenida
}

void System::printGuide(int id) {
    ofstream archivoTemp;
    string idStrng = to_string(id);
    string nombreArchivo = "guide_" + idStrng + ".txt";//Creamos un archivo con el numero del candidato
    //para poder diferenciarlos
    archivoTemp.open(nombreArchivo);
    archivoTemp <<"Interview for Mr/Ms "<< candidatesMap[id]->getName() << ".\n" << endl //Con nombre personalizado
    << "Date: " << endl //Muestra las especificaciones horarias de la entevista
    << "Hour: " << this->interviewsMap[id]->getDate()[3] << endl
    << "Day: " << this->interviewsMap[id]->getDate()[2] << endl
    << "Month: " << this->interviewsMap[id]->getDate()[1] << endl
    << "Year: " << this->interviewsMap[id]->getDate()[0] << endl
    << "Important information about the candidate´s culture: \n" << endl
    << candidatesMap[id]->getNationalityInfo() << endl << endl //Informacion cultural del candidato
    << "Holiday information to break the ice :\n\n" //Informacion para romper el hielo
    << candidatesMap[id]->getHolidayInfo() << "\n\nGood luck in your interview!";
    archivoTemp.close();
    string s = "notepad "+ nombreArchivo;
    system(s.c_str());//Abre en pantalla la guia para la entrevista
}

void System::hireCandidate(int id) {
    //Primero verifica que no exista el candidato
    if (existingCandidate(id) && !candidatesMap[id]->isHired()) {
        candidatesMap[id]->setHired(1);
        printLetter(id);
    }else if (existingCandidate(id) && candidatesMap[id]->isHired()){
        throw std::invalid_argument("This candidate is already hired.\n");
        //Tira error porque el candidato ya esta contratado
    }else{
        throw std::invalid_argument("A candidate with this id does not exists.\n");
        //Tira error ya que no existe candidato con esa id
    }
}

void System::changeDate(){
    //Cambia la fecha automaticamente ya que cada entrevista dura una hora y solo hay 3 al dia
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
    //Retorna los valores de la empresa
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
    //Factory no se tiene que borrar ya que tiene su propio destructor donde borra las nacionalidades
}

void System::showNationalityInfo(int code) {
    //Ya que solo hay 4 nacionalidades base, al ser un vector es mas facil verificar asi
    if(code > -1 && code < 4){
        cout << factory.getCulturalInfo(code);
    }else{
        throw std::invalid_argument("A nationality with this code does not exists.\n");
        //Tira error ya que no existe una nacionalidad con ese indice
    }
}
