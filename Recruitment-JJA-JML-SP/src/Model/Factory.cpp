//
// Created by jmlop on 11/27/2021.
//

#include "Factory.h"

Factory::~Factory() {
    delete nationalities[0];
    delete nationalities[1];
    delete nationalities[2];
    delete nationalities[3];
}

Factory::Factory(){
    Colombian* colombian = new Colombian();
    German* german = new German();
    Afghan* afghan = new Afghan();
    Japanese* japanese = new Japanese();
    nationalities.push_back(colombian);
    nationalities.push_back(german);
    nationalities.push_back(afghan);
    nationalities.push_back(japanese);
}

string Factory::getCulturalInfo(int nationality) {
    return nationalities[nationality]->culturalInfo();
}

string Factory::getHolidayInfo(int nationality) {
    return nationalities[nationality]->holidayInfo();
}

Candidate* Factory::createCandidate() {
    string name, email, linkedin, git;
    int id, passport, nationality;
    cout<<"Enter the candidate's name:\n";
    cin>>name;
    cout<<"Enter the candidate's ID:\n";
    cin>>id;
    cout<<"Enter the candidate's email:\n";
    cin>>email;
    cout<<"Enter the candidate's LinkedIn URL:\n";
    cin>>linkedin;
    cout<<"Enter the candidate's GIT URL:\n";
    cin>>git;
    cout<<"Enter the candidate's passport number:\n";
    cin>>passport;
    cout<<"Which is the candidate's nationality?\n1.Colombian\n2.German\n3.Afghan\n4.Japanese\n";
    cin>>nationality;
    Candidate* candidate = new Candidate(name, id, nationalities[nationality - 1], email, linkedin, git, passport, false);
    return candidate;
}