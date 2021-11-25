#include "Interview.h"

Interview::Interview(int candidateId, string date, int hour){
    setCandidateId(candidateId);
    setDate(date);
    setHour(hour);
}

int Interview::getCandidateId() const {
    return candidateId;
}

void Interview::setCandidateId(int candidateId) {
    Interview::candidateId = candidateId;
}

const string &Interview::getDate() const {
    return date;
}

void Interview::setDate(const string &date) {
    Interview::date = date;
}

int Interview::getHour() const {
    return hour;
}

void Interview::setHour(int hour) {
    Interview::hour = hour;
}

Interview::~Interview(){}