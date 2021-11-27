//
// Created by jmlop on 11/24/2021.
//

#include "Afghan.h"

Afghan::~Afghan() {}

Afghan::Afghan() {
    name = "Afghan";
}

string Afghan::culturalInfo() {
    return name + "\n"
                  "Type: Reserved culture.\n"
                  "EyeContact: Avoid eye contact with members of the opposite gender, or people who are older than you. Otherwise, direct eye contact is expected.\n"
                  "Gestures: No gestures, just avoid using thumbs up, and the ok sign, they are considered an offense.\n"
                  "Touch: Only handshake between men, avoid touching the opposite gender at all costs.\n"
                  "Personal space: Keep an arms length with members of the opposite gender. Otherwise, people are used to little personal space.\n"
                  "Time management: Leave things for last minute, but get things done.\n"
                  "Communication style: Keep a low volume and tone, moderate rhythm. Raising one's voice is extremely disrespectful.\n"
                  "Nap: Napping after lunch.\n";

}

string Afghan::holidayInfo() {
    return "Talk about Nowruz (Afghan new year) to break the ice. It begins in the spring equinox.\n";
}
