#include "Interview.h"

Interview::Interview(int candidateId, int* date){
    setCandidateId(candidateId);
    this->date = date;
}

void Interview::printDate(){
    cout << "Hour: " << this->date[3] << endl
            << "Day: " << this->date[2] << endl
            << "Month: " << this->date[1] << endl
            << "Year: " << this->date[0] << endl;
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