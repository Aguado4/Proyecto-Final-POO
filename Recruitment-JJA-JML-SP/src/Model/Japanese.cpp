//
// Created by jmlop on 11/24/2021.
//

#include "Japanese.h"

Japanese::~Japanese() {}

Japanese::Japanese() {
    name = "Japanese";
}

string Japanese::culturalInfo() {
    return name + "\n"
                  "Type: Reserved culture.\n"
                  "EyeContact: \n"
                  "Gestures: Yes: No:  Good Luck:\n"
                  "Touch: \n"
                  "Personal space: \n"
                  "Time management: \n"
                  "Communication style: \n"
                  "Nap: ";

}

string Japanese::holidayInfo() {
    return "";
}