#include "Interview.h"

Interview::Interview(int candidateId, int* date){
    setCandidateId(candidateId);
    this->date = date;
}

int Interview::getCandidateId() const {
    return candidateId;
}

void Interview::setCandidateId(int candidateId) {
    Interview::candidateId = candidateId;
}

const int *Interview::getDate() const {
    return date;
}

Interview::~Interview(){}