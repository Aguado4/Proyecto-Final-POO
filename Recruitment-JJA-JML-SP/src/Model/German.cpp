//
// Created by jmlop on 11/24/2021.
//

#include "German.h"

German::~German() {}

German::German() {
    name = "German";
}

string German::culturalInfo() {
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

string German::holidayInfo() {
    return "";
}
