# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\jmlop\Desktop\Universidad\Tercer Semestre\OOP\CasinoEstudiantes\Proyecto-Final-POO\Recruitment-JJA-JML-SP"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\jmlop\Desktop\Universidad\Tercer Semestre\OOP\CasinoEstudiantes\Proyecto-Final-POO\Recruitment-JJA-JML-SP\cmake-build-debug"

# Include any dependencies generated for this target.
include lib/googleTest/googlemock/CMakeFiles/gmock.dir/depend.make
# Include the progress variables for this target.
include lib/googleTest/googlemock/CMakeFiles/gmock.dir/progress.make

# Include the compile flags for this target's objects.
include lib/googleTest/googlemock/CMakeFiles/gmock.dir/flags.make

lib/googleTest/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.obj: lib/googleTest/googlemock/CMakeFiles/gmock.dir/flags.make
lib/googleTest/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.obj: lib/googleTest/googlemock/CMakeFiles/gmock.dir/includes_CXX.rsp
lib/googleTest/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.obj: ../lib/googleTest/googlemock/src/gmock-all.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\jmlop\Desktop\Universidad\Tercer Semestre\OOP\CasinoEstudiantes\Proyecto-Final-POO\Recruitment-JJA-JML-SP\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/googleTest/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.obj"
	cd /d "D:\jmlop\Desktop\Universidad\Tercer Semestre\OOP\CasinoEstudiantes\Proyecto-Final-POO\Recruitment-JJA-JML-SP\cmake-build-debug\lib\googleTest\googlemock" && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\gmock.dir\src\gmock-all.cc.obj -c "D:\jmlop\Desktop\Universidad\Tercer Semestre\OOP\CasinoEstudiantes\Proyecto-Final-POO\Recruitment-JJA-JML-SP\lib\googleTest\googlemock\src\gmock-all.cc"

lib/googleTest/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gmock.dir/src/gmock-all.cc.i"
	cd /d "D:\jmlop\Desktop\Universidad\Tercer Semestre\OOP\CasinoEstudiantes\Proyecto-Final-POO\Recruitment-JJA-JML-SP\cmake-build-debug\lib\googleTest\googlemock" && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\jmlop\Desktop\Universidad\Tercer Semestre\OOP\CasinoEstudiantes\Proyecto-Final-POO\Recruitment-JJA-JML-SP\lib\googleTest\googlemock\src\gmock-all.cc" > CMakeFiles\gmock.dir\src\gmock-all.cc.i

lib/googleTest/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gmock.dir/src/gmock-all.cc.s"
	cd /d "D:\jmlop\Desktop\Universidad\Tercer Semestre\OOP\CasinoEstudiantes\Proyecto-Final-POO\Recruitment-JJA-JML-SP\cmake-build-debug\lib\googleTest\googlemock" && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\jmlop\Desktop\Universidad\Tercer Semestre\OOP\CasinoEstudiantes\Proyecto-Final-POO\Recruitment-JJA-JML-SP\lib\googleTest\googlemock\src\gmock-all.cc" -o CMakeFiles\gmock.dir\src\gmock-all.cc.s

# Object files for target gmock
gmock_OBJECTS = \
"CMakeFiles/gmock.dir/src/gmock-all.cc.obj"

# External object files for target gmock
gmock_EXTERNAL_OBJECTS =

lib/libgmockd.a: lib/googleTest/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.obj
lib/libgmockd.a: lib/googleTest/googlemock/CMakeFiles/gmock.dir/build.make
lib/libgmockd.a: lib/googleTest/googlemock/CMakeFiles/gmock.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\jmlop\Desktop\Universidad\Tercer Semestre\OOP\CasinoEstudiantes\Proyecto-Final-POO\Recruitment-JJA-JML-SP\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ..\..\libgmockd.a"
	cd /d "D:\jmlop\Desktop\Universidad\Tercer Semestre\OOP\CasinoEstudiantes\Proyecto-Final-POO\Recruitment-JJA-JML-SP\cmake-build-debug\lib\googleTest\googlemock" && $(CMAKE_COMMAND) -P CMakeFiles\gmock.dir\cmake_clean_target.cmake
	cd /d "D:\jmlop\Desktop\Universidad\Tercer Semestre\OOP\CasinoEstudiantes\Proyecto-Final-POO\Recruitment-JJA-JML-SP\cmake-build-debug\lib\googleTest\googlemock" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\gmock.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/googleTest/googlemock/CMakeFiles/gmock.dir/build: lib/libgmockd.a
.PHONY : lib/googleTest/googlemock/CMakeFiles/gmock.dir/build

lib/googleTest/googlemock/CMakeFiles/gmock.dir/clean:
	cd /d "D:\jmlop\Desktop\Universidad\Tercer Semestre\OOP\CasinoEstudiantes\Proyecto-Final-POO\Recruitment-JJA-JML-SP\cmake-build-debug\lib\googleTest\googlemock" && $(CMAKE_COMMAND) -P CMakeFiles\gmock.dir\cmake_clean.cmake
.PHONY : lib/googleTest/googlemock/CMakeFiles/gmock.dir/clean

lib/googleTest/googlemock/CMakeFiles/gmock.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\jmlop\Desktop\Universidad\Tercer Semestre\OOP\CasinoEstudiantes\Proyecto-Final-POO\Recruitment-JJA-JML-SP" "D:\jmlop\Desktop\Universidad\Tercer Semestre\OOP\CasinoEstudiantes\Proyecto-Final-POO\Recruitment-JJA-JML-SP\lib\googleTest\googlemock" "D:\jmlop\Desktop\Universidad\Tercer Semestre\OOP\CasinoEstudiantes\Proyecto-Final-POO\Recruitment-JJA-JML-SP\cmake-build-debug" "D:\jmlop\Desktop\Universidad\Tercer Semestre\OOP\CasinoEstudiantes\Proyecto-Final-POO\Recruitment-JJA-JML-SP\cmake-build-debug\lib\googleTest\googlemock" "D:\jmlop\Desktop\Universidad\Tercer Semestre\OOP\CasinoEstudiantes\Proyecto-Final-POO\Recruitment-JJA-JML-SP\cmake-build-debug\lib\googleTest\googlemock\CMakeFiles\gmock.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : lib/googleTest/googlemock/CMakeFiles/gmock.dir/depend

