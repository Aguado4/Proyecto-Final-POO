//
// Created by jmlop on 11/28/2021.
//

#include "googleTest/googletest/include/gtest/gtest.h"
#include "D:/jmlop/Desktop/Universidad/Tercer Semestre/OOP/CasinoEstudiantes/Proyecto-Final-POO/Recruitment-JJA-JML-SP/src/Model/Factory.h"

TEST(FactoryTest, getCulturalInfo) {
    Factory factory = Factory();
    string expected = "Colombian\n"
                      "Type: Expressive culture.\n"
                      "EyeContact: Maintain uninstense eye contact while speaking and listening.\n"
                      "Gestures: Yes: thumbs up, No: thumbs down, OK: Touch index with thumb, Good Luck: fingers crossed.\n"
                      "Touch: Physical contact is widely accepted. greet men with handshake and women with indirect kiss on cheek.\n"
                      "Personal space: Almost no importance given to personal space, respect it, but don't mind it.\n"
                      "Time management: Leaves things for last minute. They do it before the deadline though.\n"
                      "Communication: style: high volume, fast rythm, strong tone.\n"
                      "Nap: after lunch";
    EXPECT_EQ(expected, factory.getCulturalInfo(0));

}


TEST(FactoryTest, getholidayInfo) {
    Factory factory = Factory();
    string expected = "Talk about Holy Week to break the ice.\n";
    EXPECT_EQ(expected, factory.getHolidayInfo(0));

}
