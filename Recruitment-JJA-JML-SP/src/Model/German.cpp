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
                  "EyeContact: Constant direct eye contact is expected.\n"
                  "Gestures: Yes: Touch index with thumb, No: Thumbs down, OK: same as yes, Good Luck: Wrapping fingers around thumbs.\n"
                  "Touch: Don't touch unless you are good friends with the person.\n"
                  "Personal space: Always keep at an arm's length.\n"
                  "Time management: Very punctual, they plan ahead of time and stick to it.\n"
                  "Communication style: High volume, normal rhythm, intense tone.\n"
                  "Nap: no naps.\n";

}

string German::holidayInfo() {
    return "";
}
