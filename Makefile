# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/n3rdy/dev/godot/Darwin/N3rdNEAT

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/n3rdy/dev/godot/Darwin/N3rdNEAT

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/bin/ccmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/n3rdy/dev/godot/Darwin/N3rdNEAT/CMakeFiles /home/n3rdy/dev/godot/Darwin/N3rdNEAT//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/n3rdy/dev/godot/Darwin/N3rdNEAT/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named N3rdNEAT

# Build rule for target.
N3rdNEAT: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 N3rdNEAT
.PHONY : N3rdNEAT

# fast build rule for target.
N3rdNEAT/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/N3rdNEAT.dir/build.make CMakeFiles/N3rdNEAT.dir/build
.PHONY : N3rdNEAT/fast

#=============================================================================
# Target rules for targets named godot-cpp

# Build rule for target.
godot-cpp: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 godot-cpp
.PHONY : godot-cpp

# fast build rule for target.
godot-cpp/fast:
	$(MAKE) $(MAKESILENT) -f godot-cpp/CMakeFiles/godot-cpp.dir/build.make godot-cpp/CMakeFiles/godot-cpp.dir/build
.PHONY : godot-cpp/fast

src/GodotLibrary.o: src/GodotLibrary.cpp.o
.PHONY : src/GodotLibrary.o

# target to build an object file
src/GodotLibrary.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/N3rdNEAT.dir/build.make CMakeFiles/N3rdNEAT.dir/src/GodotLibrary.cpp.o
.PHONY : src/GodotLibrary.cpp.o

src/GodotLibrary.i: src/GodotLibrary.cpp.i
.PHONY : src/GodotLibrary.i

# target to preprocess a source file
src/GodotLibrary.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/N3rdNEAT.dir/build.make CMakeFiles/N3rdNEAT.dir/src/GodotLibrary.cpp.i
.PHONY : src/GodotLibrary.cpp.i

src/GodotLibrary.s: src/GodotLibrary.cpp.s
.PHONY : src/GodotLibrary.s

# target to generate assembly for a file
src/GodotLibrary.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/N3rdNEAT.dir/build.make CMakeFiles/N3rdNEAT.dir/src/GodotLibrary.cpp.s
.PHONY : src/GodotLibrary.cpp.s

src/N3rdNEAT.o: src/N3rdNEAT.cpp.o
.PHONY : src/N3rdNEAT.o

# target to build an object file
src/N3rdNEAT.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/N3rdNEAT.dir/build.make CMakeFiles/N3rdNEAT.dir/src/N3rdNEAT.cpp.o
.PHONY : src/N3rdNEAT.cpp.o

src/N3rdNEAT.i: src/N3rdNEAT.cpp.i
.PHONY : src/N3rdNEAT.i

# target to preprocess a source file
src/N3rdNEAT.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/N3rdNEAT.dir/build.make CMakeFiles/N3rdNEAT.dir/src/N3rdNEAT.cpp.i
.PHONY : src/N3rdNEAT.cpp.i

src/N3rdNEAT.s: src/N3rdNEAT.cpp.s
.PHONY : src/N3rdNEAT.s

# target to generate assembly for a file
src/N3rdNEAT.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/N3rdNEAT.dir/build.make CMakeFiles/N3rdNEAT.dir/src/N3rdNEAT.cpp.s
.PHONY : src/N3rdNEAT.cpp.s

src/connector.o: src/connector.cpp.o
.PHONY : src/connector.o

# target to build an object file
src/connector.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/N3rdNEAT.dir/build.make CMakeFiles/N3rdNEAT.dir/src/connector.cpp.o
.PHONY : src/connector.cpp.o

src/connector.i: src/connector.cpp.i
.PHONY : src/connector.i

# target to preprocess a source file
src/connector.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/N3rdNEAT.dir/build.make CMakeFiles/N3rdNEAT.dir/src/connector.cpp.i
.PHONY : src/connector.cpp.i

src/connector.s: src/connector.cpp.s
.PHONY : src/connector.s

# target to generate assembly for a file
src/connector.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/N3rdNEAT.dir/build.make CMakeFiles/N3rdNEAT.dir/src/connector.cpp.s
.PHONY : src/connector.cpp.s

src/neural_network.o: src/neural_network.cpp.o
.PHONY : src/neural_network.o

# target to build an object file
src/neural_network.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/N3rdNEAT.dir/build.make CMakeFiles/N3rdNEAT.dir/src/neural_network.cpp.o
.PHONY : src/neural_network.cpp.o

src/neural_network.i: src/neural_network.cpp.i
.PHONY : src/neural_network.i

# target to preprocess a source file
src/neural_network.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/N3rdNEAT.dir/build.make CMakeFiles/N3rdNEAT.dir/src/neural_network.cpp.i
.PHONY : src/neural_network.cpp.i

src/neural_network.s: src/neural_network.cpp.s
.PHONY : src/neural_network.s

# target to generate assembly for a file
src/neural_network.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/N3rdNEAT.dir/build.make CMakeFiles/N3rdNEAT.dir/src/neural_network.cpp.s
.PHONY : src/neural_network.cpp.s

src/node.o: src/node.cpp.o
.PHONY : src/node.o

# target to build an object file
src/node.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/N3rdNEAT.dir/build.make CMakeFiles/N3rdNEAT.dir/src/node.cpp.o
.PHONY : src/node.cpp.o

src/node.i: src/node.cpp.i
.PHONY : src/node.i

# target to preprocess a source file
src/node.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/N3rdNEAT.dir/build.make CMakeFiles/N3rdNEAT.dir/src/node.cpp.i
.PHONY : src/node.cpp.i

src/node.s: src/node.cpp.s
.PHONY : src/node.s

# target to generate assembly for a file
src/node.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/N3rdNEAT.dir/build.make CMakeFiles/N3rdNEAT.dir/src/node.cpp.s
.PHONY : src/node.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... N3rdNEAT"
	@echo "... godot-cpp"
	@echo "... src/GodotLibrary.o"
	@echo "... src/GodotLibrary.i"
	@echo "... src/GodotLibrary.s"
	@echo "... src/N3rdNEAT.o"
	@echo "... src/N3rdNEAT.i"
	@echo "... src/N3rdNEAT.s"
	@echo "... src/connector.o"
	@echo "... src/connector.i"
	@echo "... src/connector.s"
	@echo "... src/neural_network.o"
	@echo "... src/neural_network.i"
	@echo "... src/neural_network.s"
	@echo "... src/node.o"
	@echo "... src/node.i"
	@echo "... src/node.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

