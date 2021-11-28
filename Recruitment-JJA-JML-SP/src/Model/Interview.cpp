#include "Interview.h"

Interview::Interview(int candidateId, int* date){
    setCandidateId(candidateId);//Lo relaciona con un candidato
    this->date = date;
}

int Interview::getCandidateId() const{
    return candidateId;
}

void Interview::setCandidateId(int candidateId){
    Interview::candidateId = candidateId;
}

const int *Interview::getDate() const{
    return date;
}

Interview::~Interview(){
    printf("Llamar al destructor de sistema");//ya que ahí se guardo to-do con memoria dinamica
}