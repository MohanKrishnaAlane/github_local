# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\github_local\Example

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\github_local\build

# Include any dependencies generated for this target.
include test/CMakeFiles/ExampleTests.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include test/CMakeFiles/ExampleTests.dir/compiler_depend.make

# Include the progress variables for this target.
include test/CMakeFiles/ExampleTests.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/ExampleTests.dir/flags.make

test/CMakeFiles/ExampleTests.dir/ExampleTests.cpp.obj: test/CMakeFiles/ExampleTests.dir/flags.make
test/CMakeFiles/ExampleTests.dir/ExampleTests.cpp.obj: test/CMakeFiles/ExampleTests.dir/includes_CXX.rsp
test/CMakeFiles/ExampleTests.dir/ExampleTests.cpp.obj: D:/github_local/Example/test/ExampleTests.cpp
test/CMakeFiles/ExampleTests.dir/ExampleTests.cpp.obj: test/CMakeFiles/ExampleTests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\github_local\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/ExampleTests.dir/ExampleTests.cpp.obj"
	cd /d D:\github_local\build\test && C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT test/CMakeFiles/ExampleTests.dir/ExampleTests.cpp.obj -MF CMakeFiles\ExampleTests.dir\ExampleTests.cpp.obj.d -o CMakeFiles\ExampleTests.dir\ExampleTests.cpp.obj -c D:\github_local\Example\test\ExampleTests.cpp

test/CMakeFiles/ExampleTests.dir/ExampleTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ExampleTests.dir/ExampleTests.cpp.i"
	cd /d D:\github_local\build\test && C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\github_local\Example\test\ExampleTests.cpp > CMakeFiles\ExampleTests.dir\ExampleTests.cpp.i

test/CMakeFiles/ExampleTests.dir/ExampleTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ExampleTests.dir/ExampleTests.cpp.s"
	cd /d D:\github_local\build\test && C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\github_local\Example\test\ExampleTests.cpp -o CMakeFiles\ExampleTests.dir\ExampleTests.cpp.s

# Object files for target ExampleTests
ExampleTests_OBJECTS = \
"CMakeFiles/ExampleTests.dir/ExampleTests.cpp.obj"

# External object files for target ExampleTests
ExampleTests_EXTERNAL_OBJECTS =

test/ExampleTests.exe: test/CMakeFiles/ExampleTests.dir/ExampleTests.cpp.obj
test/ExampleTests.exe: test/CMakeFiles/ExampleTests.dir/build.make
test/ExampleTests.exe: lib/libgtest_main.a
test/ExampleTests.exe: libExample.a
test/ExampleTests.exe: lib/libgtest.a
test/ExampleTests.exe: test/CMakeFiles/ExampleTests.dir/linkLibs.rsp
test/ExampleTests.exe: test/CMakeFiles/ExampleTests.dir/objects1.rsp
test/ExampleTests.exe: test/CMakeFiles/ExampleTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\github_local\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ExampleTests.exe"
	cd /d D:\github_local\build\test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ExampleTests.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/ExampleTests.dir/build: test/ExampleTests.exe
.PHONY : test/CMakeFiles/ExampleTests.dir/build

test/CMakeFiles/ExampleTests.dir/clean:
	cd /d D:\github_local\build\test && $(CMAKE_COMMAND) -P CMakeFiles\ExampleTests.dir\cmake_clean.cmake
.PHONY : test/CMakeFiles/ExampleTests.dir/clean

test/CMakeFiles/ExampleTests.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\github_local\Example D:\github_local\Example\test D:\github_local\build D:\github_local\build\test D:\github_local\build\test\CMakeFiles\ExampleTests.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/ExampleTests.dir/depend

