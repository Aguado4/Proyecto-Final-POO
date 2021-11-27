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
                  "EyeContact: Indirect eye contact. Direct eye contact is interpreted as intimidation.\n"
                  "Gestures: Yes: Touch index with thumb, No: Making an X with arms, OK: Touch index with thumb, Good Luck: no gesture, usually objects that represent good luck.\n"
                  "Touch: Avoid touch unless you're good friends with the person. Greet with a bow, no handshake.\n"
                  "Personal space: If possible, keep appropriate distance between one another.\n"
                  "Time management: Very punctual, they plan ahead of time and stick to it.\n"
                  "Communication style: Low volume, normal rhythm and tone. Respect silences.\n"
                  "Nap: Inemuri (sleeping on duty). Napping in public, sign of working too hard.\n";

}

string Japanese::holidayInfo() {
    return "Talk about Shogatsu (Japanese New year) to break the ice\n";
}