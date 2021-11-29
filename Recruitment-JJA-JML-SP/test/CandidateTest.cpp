//
// Created by jmlop on 11/28/2021.
//

#include "googleTest/googletest/include/gtest/gtest.h"
#include "D:/jmlop/Desktop/Universidad/Tercer Semestre/OOP/CasinoEstudiantes/Proyecto-Final-POO/Recruitment-JJA-JML-SP/src/Model/Candidate.h"
#include "D:/jmlop/Desktop/Universidad/Tercer Semestre/OOP/CasinoEstudiantes/Proyecto-Final-POO/Recruitment-JJA-JML-SP/src/Model/Factory.h"

TEST(CandidateTest, getNationalityInfo) {
    Factory factory = Factory();
    Candidate candidate = Candidate("Aguado", 1, factory.getNationalities()[0], "aguado4@jacerianacali.edu.co", "No tiene linkedln",
              "https://github.com/Aguado4/Proyecto-Final-POO.git", 1005745011, false);

    string expected = "Colombian\n"
                      "Type: Expressive culture.\n"
                      "EyeContact: Maintain uninstense eye contact while speaking and listening.\n"
                      "Gestures: Yes: thumbs up, No: thumbs down, OK: Touch index with thumb, Good Luck: fingers crossed.\n"
                      "Touch: Physical contact is widely accepted. greet men with handshake and women with indirect kiss on cheek.\n"
                      "Personal space: Almost no importance given to personal space, respect it, but don't mind it.\n"
                      "Time management: Leaves things for last minute. They do it before the deadline though.\n"
                      "Communication: style: high volume, fast rythm, strong tone.\n"
                      "Nap: after lunch";

    EXPECT_EQ(expected, candidate.getNationalityInfo());

}

TEST(CandidateTest, setHired) {
    Factory factory = Factory();
    Candidate candidate = Candidate("Aguado", 1, factory.getNationalities()[0], "aguado4@jacerianacali.edu.co", "No tiene linkedln",
                                    "https://github.com/Aguado4/Proyecto-Final-POO.git", 1005745011, false);

    candidate.setHired(true);

    EXPECT_EQ(true, candidate.isHired());

}