cmake_minimum_required(VERSION 3.20)
project(Recruitment-JJA-JML-SP)

set(CMAKE_CXX_STANDARD 14)

add_executable(Recruitment-JJA-JML-SP main.cpp src/Model/Candidate.h src/Model/Candidate.cpp src/Model/Interview.h src/Model/Nationality.h src/Model/System.h src/Model/System.cpp src/Model/Colombian.cpp src/Model/Colombian.h src/Model/Japanese.cpp src/Model/Japanese.h src/Model/German.cpp src/Model/German.h src/Model/Afghan.cpp src/Model/Afghan.h)
