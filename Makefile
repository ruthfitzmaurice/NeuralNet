# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.21.1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.21.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/owner/Desktop/NeuralNet

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/owner/Desktop/NeuralNet

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/local/Cellar/cmake/3.21.1/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/local/Cellar/cmake/3.21.1/bin/ccmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/owner/Desktop/NeuralNet/CMakeFiles /Users/owner/Desktop/NeuralNet//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/owner/Desktop/NeuralNet/CMakeFiles 0
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
# Target rules for targets named NeuralNet

# Build rule for target.
NeuralNet: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 NeuralNet
.PHONY : NeuralNet

# fast build rule for target.
NeuralNet/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/NeuralNet.dir/build.make CMakeFiles/NeuralNet.dir/build
.PHONY : NeuralNet/fast

layer.o: layer.cpp.o
.PHONY : layer.o

# target to build an object file
layer.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/NeuralNet.dir/build.make CMakeFiles/NeuralNet.dir/layer.cpp.o
.PHONY : layer.cpp.o

layer.i: layer.cpp.i
.PHONY : layer.i

# target to preprocess a source file
layer.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/NeuralNet.dir/build.make CMakeFiles/NeuralNet.dir/layer.cpp.i
.PHONY : layer.cpp.i

layer.s: layer.cpp.s
.PHONY : layer.s

# target to generate assembly for a file
layer.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/NeuralNet.dir/build.make CMakeFiles/NeuralNet.dir/layer.cpp.s
.PHONY : layer.cpp.s

main.o: main.cpp.o
.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/NeuralNet.dir/build.make CMakeFiles/NeuralNet.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i
.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/NeuralNet.dir/build.make CMakeFiles/NeuralNet.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s
.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/NeuralNet.dir/build.make CMakeFiles/NeuralNet.dir/main.cpp.s
.PHONY : main.cpp.s

neural_network.o: neural_network.cpp.o
.PHONY : neural_network.o

# target to build an object file
neural_network.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/NeuralNet.dir/build.make CMakeFiles/NeuralNet.dir/neural_network.cpp.o
.PHONY : neural_network.cpp.o

neural_network.i: neural_network.cpp.i
.PHONY : neural_network.i

# target to preprocess a source file
neural_network.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/NeuralNet.dir/build.make CMakeFiles/NeuralNet.dir/neural_network.cpp.i
.PHONY : neural_network.cpp.i

neural_network.s: neural_network.cpp.s
.PHONY : neural_network.s

# target to generate assembly for a file
neural_network.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/NeuralNet.dir/build.make CMakeFiles/NeuralNet.dir/neural_network.cpp.s
.PHONY : neural_network.cpp.s

neuron.o: neuron.cpp.o
.PHONY : neuron.o

# target to build an object file
neuron.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/NeuralNet.dir/build.make CMakeFiles/NeuralNet.dir/neuron.cpp.o
.PHONY : neuron.cpp.o

neuron.i: neuron.cpp.i
.PHONY : neuron.i

# target to preprocess a source file
neuron.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/NeuralNet.dir/build.make CMakeFiles/NeuralNet.dir/neuron.cpp.i
.PHONY : neuron.cpp.i

neuron.s: neuron.cpp.s
.PHONY : neuron.s

# target to generate assembly for a file
neuron.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/NeuralNet.dir/build.make CMakeFiles/NeuralNet.dir/neuron.cpp.s
.PHONY : neuron.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... NeuralNet"
	@echo "... layer.o"
	@echo "... layer.i"
	@echo "... layer.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
	@echo "... neural_network.o"
	@echo "... neural_network.i"
	@echo "... neural_network.s"
	@echo "... neuron.o"
	@echo "... neuron.i"
	@echo "... neuron.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system
