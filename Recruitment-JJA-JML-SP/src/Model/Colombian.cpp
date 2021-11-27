//
// Created by jmlop on 11/24/2021.
//

#include "Colombian.h"

Colombian::~Colombian() {}

Colombian::Colombian() {
    name = "Colombian";
}

string Colombian::culturalInfo() {
    return name + "\n"
           "Type: Expressive culture.\n"
           "EyeContact: Maintain uninstense eye contact while speaking and listening.\n"
           "Gestures: Yes: thumbs up, No: thumbs down, OK: Touch index with thumb, Good Luck: fingers crossed.\n"
           "Touch: Physical contact is widely accepted. greet men with handshake and women with indirect kiss on cheek.\n"
           "Personal space: Almost no importance given to personal space, respect it, but don't mind it.\n"
           "Time management: Leaves things for last minute. They do it before the deadline though.\n"
           "Communication: style: high volume, fast rythm, strong tone.\n"
           "Nap: after lunch";

}

string Colombian::holidayInfo() {
    return "Talk about Holy Week to break the ice.\n";
}
