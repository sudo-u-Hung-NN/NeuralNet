# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/151/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/151/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ashitaka/Objective-C/neuralNet_sb

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ashitaka/Objective-C/neuralNet_sb/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/neuralNet_sb.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/neuralNet_sb.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/neuralNet_sb.dir/flags.make

CMakeFiles/neuralNet_sb.dir/main.c.o: CMakeFiles/neuralNet_sb.dir/flags.make
CMakeFiles/neuralNet_sb.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ashitaka/Objective-C/neuralNet_sb/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/neuralNet_sb.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/neuralNet_sb.dir/main.c.o -c /home/ashitaka/Objective-C/neuralNet_sb/main.c

CMakeFiles/neuralNet_sb.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/neuralNet_sb.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ashitaka/Objective-C/neuralNet_sb/main.c > CMakeFiles/neuralNet_sb.dir/main.c.i

CMakeFiles/neuralNet_sb.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/neuralNet_sb.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ashitaka/Objective-C/neuralNet_sb/main.c -o CMakeFiles/neuralNet_sb.dir/main.c.s

CMakeFiles/neuralNet_sb.dir/Matrix/Matrix.c.o: CMakeFiles/neuralNet_sb.dir/flags.make
CMakeFiles/neuralNet_sb.dir/Matrix/Matrix.c.o: ../Matrix/Matrix.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ashitaka/Objective-C/neuralNet_sb/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/neuralNet_sb.dir/Matrix/Matrix.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/neuralNet_sb.dir/Matrix/Matrix.c.o -c /home/ashitaka/Objective-C/neuralNet_sb/Matrix/Matrix.c

CMakeFiles/neuralNet_sb.dir/Matrix/Matrix.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/neuralNet_sb.dir/Matrix/Matrix.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ashitaka/Objective-C/neuralNet_sb/Matrix/Matrix.c > CMakeFiles/neuralNet_sb.dir/Matrix/Matrix.c.i

CMakeFiles/neuralNet_sb.dir/Matrix/Matrix.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/neuralNet_sb.dir/Matrix/Matrix.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ashitaka/Objective-C/neuralNet_sb/Matrix/Matrix.c -o CMakeFiles/neuralNet_sb.dir/Matrix/Matrix.c.s

CMakeFiles/neuralNet_sb.dir/Linagb/Linagb.c.o: CMakeFiles/neuralNet_sb.dir/flags.make
CMakeFiles/neuralNet_sb.dir/Linagb/Linagb.c.o: ../Linagb/Linagb.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ashitaka/Objective-C/neuralNet_sb/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/neuralNet_sb.dir/Linagb/Linagb.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/neuralNet_sb.dir/Linagb/Linagb.c.o -c /home/ashitaka/Objective-C/neuralNet_sb/Linagb/Linagb.c

CMakeFiles/neuralNet_sb.dir/Linagb/Linagb.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/neuralNet_sb.dir/Linagb/Linagb.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ashitaka/Objective-C/neuralNet_sb/Linagb/Linagb.c > CMakeFiles/neuralNet_sb.dir/Linagb/Linagb.c.i

CMakeFiles/neuralNet_sb.dir/Linagb/Linagb.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/neuralNet_sb.dir/Linagb/Linagb.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ashitaka/Objective-C/neuralNet_sb/Linagb/Linagb.c -o CMakeFiles/neuralNet_sb.dir/Linagb/Linagb.c.s

CMakeFiles/neuralNet_sb.dir/ExceptionHandling/error.c.o: CMakeFiles/neuralNet_sb.dir/flags.make
CMakeFiles/neuralNet_sb.dir/ExceptionHandling/error.c.o: ../ExceptionHandling/error.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ashitaka/Objective-C/neuralNet_sb/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/neuralNet_sb.dir/ExceptionHandling/error.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/neuralNet_sb.dir/ExceptionHandling/error.c.o -c /home/ashitaka/Objective-C/neuralNet_sb/ExceptionHandling/error.c

CMakeFiles/neuralNet_sb.dir/ExceptionHandling/error.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/neuralNet_sb.dir/ExceptionHandling/error.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ashitaka/Objective-C/neuralNet_sb/ExceptionHandling/error.c > CMakeFiles/neuralNet_sb.dir/ExceptionHandling/error.c.i

CMakeFiles/neuralNet_sb.dir/ExceptionHandling/error.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/neuralNet_sb.dir/ExceptionHandling/error.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ashitaka/Objective-C/neuralNet_sb/ExceptionHandling/error.c -o CMakeFiles/neuralNet_sb.dir/ExceptionHandling/error.c.s

CMakeFiles/neuralNet_sb.dir/Vector/Vector.c.o: CMakeFiles/neuralNet_sb.dir/flags.make
CMakeFiles/neuralNet_sb.dir/Vector/Vector.c.o: ../Vector/Vector.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ashitaka/Objective-C/neuralNet_sb/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/neuralNet_sb.dir/Vector/Vector.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/neuralNet_sb.dir/Vector/Vector.c.o -c /home/ashitaka/Objective-C/neuralNet_sb/Vector/Vector.c

CMakeFiles/neuralNet_sb.dir/Vector/Vector.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/neuralNet_sb.dir/Vector/Vector.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ashitaka/Objective-C/neuralNet_sb/Vector/Vector.c > CMakeFiles/neuralNet_sb.dir/Vector/Vector.c.i

CMakeFiles/neuralNet_sb.dir/Vector/Vector.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/neuralNet_sb.dir/Vector/Vector.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ashitaka/Objective-C/neuralNet_sb/Vector/Vector.c -o CMakeFiles/neuralNet_sb.dir/Vector/Vector.c.s

CMakeFiles/neuralNet_sb.dir/Object/ObjectManager.c.o: CMakeFiles/neuralNet_sb.dir/flags.make
CMakeFiles/neuralNet_sb.dir/Object/ObjectManager.c.o: ../Object/ObjectManager.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ashitaka/Objective-C/neuralNet_sb/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/neuralNet_sb.dir/Object/ObjectManager.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/neuralNet_sb.dir/Object/ObjectManager.c.o -c /home/ashitaka/Objective-C/neuralNet_sb/Object/ObjectManager.c

CMakeFiles/neuralNet_sb.dir/Object/ObjectManager.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/neuralNet_sb.dir/Object/ObjectManager.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ashitaka/Objective-C/neuralNet_sb/Object/ObjectManager.c > CMakeFiles/neuralNet_sb.dir/Object/ObjectManager.c.i

CMakeFiles/neuralNet_sb.dir/Object/ObjectManager.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/neuralNet_sb.dir/Object/ObjectManager.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ashitaka/Objective-C/neuralNet_sb/Object/ObjectManager.c -o CMakeFiles/neuralNet_sb.dir/Object/ObjectManager.c.s

CMakeFiles/neuralNet_sb.dir/Layer/DenseLayer/DenseLayer.c.o: CMakeFiles/neuralNet_sb.dir/flags.make
CMakeFiles/neuralNet_sb.dir/Layer/DenseLayer/DenseLayer.c.o: ../Layer/DenseLayer/DenseLayer.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ashitaka/Objective-C/neuralNet_sb/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/neuralNet_sb.dir/Layer/DenseLayer/DenseLayer.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/neuralNet_sb.dir/Layer/DenseLayer/DenseLayer.c.o -c /home/ashitaka/Objective-C/neuralNet_sb/Layer/DenseLayer/DenseLayer.c

CMakeFiles/neuralNet_sb.dir/Layer/DenseLayer/DenseLayer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/neuralNet_sb.dir/Layer/DenseLayer/DenseLayer.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ashitaka/Objective-C/neuralNet_sb/Layer/DenseLayer/DenseLayer.c > CMakeFiles/neuralNet_sb.dir/Layer/DenseLayer/DenseLayer.c.i

CMakeFiles/neuralNet_sb.dir/Layer/DenseLayer/DenseLayer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/neuralNet_sb.dir/Layer/DenseLayer/DenseLayer.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ashitaka/Objective-C/neuralNet_sb/Layer/DenseLayer/DenseLayer.c -o CMakeFiles/neuralNet_sb.dir/Layer/DenseLayer/DenseLayer.c.s

CMakeFiles/neuralNet_sb.dir/Layer/Activation/SigmoidActivationLayer.c.o: CMakeFiles/neuralNet_sb.dir/flags.make
CMakeFiles/neuralNet_sb.dir/Layer/Activation/SigmoidActivationLayer.c.o: ../Layer/Activation/SigmoidActivationLayer.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ashitaka/Objective-C/neuralNet_sb/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/neuralNet_sb.dir/Layer/Activation/SigmoidActivationLayer.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/neuralNet_sb.dir/Layer/Activation/SigmoidActivationLayer.c.o -c /home/ashitaka/Objective-C/neuralNet_sb/Layer/Activation/SigmoidActivationLayer.c

CMakeFiles/neuralNet_sb.dir/Layer/Activation/SigmoidActivationLayer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/neuralNet_sb.dir/Layer/Activation/SigmoidActivationLayer.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ashitaka/Objective-C/neuralNet_sb/Layer/Activation/SigmoidActivationLayer.c > CMakeFiles/neuralNet_sb.dir/Layer/Activation/SigmoidActivationLayer.c.i

CMakeFiles/neuralNet_sb.dir/Layer/Activation/SigmoidActivationLayer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/neuralNet_sb.dir/Layer/Activation/SigmoidActivationLayer.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ashitaka/Objective-C/neuralNet_sb/Layer/Activation/SigmoidActivationLayer.c -o CMakeFiles/neuralNet_sb.dir/Layer/Activation/SigmoidActivationLayer.c.s

CMakeFiles/neuralNet_sb.dir/Layer/SoftmaxLayer/SoftmaxLayer.c.o: CMakeFiles/neuralNet_sb.dir/flags.make
CMakeFiles/neuralNet_sb.dir/Layer/SoftmaxLayer/SoftmaxLayer.c.o: ../Layer/SoftmaxLayer/SoftmaxLayer.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ashitaka/Objective-C/neuralNet_sb/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/neuralNet_sb.dir/Layer/SoftmaxLayer/SoftmaxLayer.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/neuralNet_sb.dir/Layer/SoftmaxLayer/SoftmaxLayer.c.o -c /home/ashitaka/Objective-C/neuralNet_sb/Layer/SoftmaxLayer/SoftmaxLayer.c

CMakeFiles/neuralNet_sb.dir/Layer/SoftmaxLayer/SoftmaxLayer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/neuralNet_sb.dir/Layer/SoftmaxLayer/SoftmaxLayer.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ashitaka/Objective-C/neuralNet_sb/Layer/SoftmaxLayer/SoftmaxLayer.c > CMakeFiles/neuralNet_sb.dir/Layer/SoftmaxLayer/SoftmaxLayer.c.i

CMakeFiles/neuralNet_sb.dir/Layer/SoftmaxLayer/SoftmaxLayer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/neuralNet_sb.dir/Layer/SoftmaxLayer/SoftmaxLayer.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ashitaka/Objective-C/neuralNet_sb/Layer/SoftmaxLayer/SoftmaxLayer.c -o CMakeFiles/neuralNet_sb.dir/Layer/SoftmaxLayer/SoftmaxLayer.c.s

CMakeFiles/neuralNet_sb.dir/Layer/Layer.c.o: CMakeFiles/neuralNet_sb.dir/flags.make
CMakeFiles/neuralNet_sb.dir/Layer/Layer.c.o: ../Layer/Layer.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ashitaka/Objective-C/neuralNet_sb/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/neuralNet_sb.dir/Layer/Layer.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/neuralNet_sb.dir/Layer/Layer.c.o -c /home/ashitaka/Objective-C/neuralNet_sb/Layer/Layer.c

CMakeFiles/neuralNet_sb.dir/Layer/Layer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/neuralNet_sb.dir/Layer/Layer.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ashitaka/Objective-C/neuralNet_sb/Layer/Layer.c > CMakeFiles/neuralNet_sb.dir/Layer/Layer.c.i

CMakeFiles/neuralNet_sb.dir/Layer/Layer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/neuralNet_sb.dir/Layer/Layer.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ashitaka/Objective-C/neuralNet_sb/Layer/Layer.c -o CMakeFiles/neuralNet_sb.dir/Layer/Layer.c.s

CMakeFiles/neuralNet_sb.dir/Layer/Activation/ReluActivationLayer.c.o: CMakeFiles/neuralNet_sb.dir/flags.make
CMakeFiles/neuralNet_sb.dir/Layer/Activation/ReluActivationLayer.c.o: ../Layer/Activation/ReluActivationLayer.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ashitaka/Objective-C/neuralNet_sb/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/neuralNet_sb.dir/Layer/Activation/ReluActivationLayer.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/neuralNet_sb.dir/Layer/Activation/ReluActivationLayer.c.o -c /home/ashitaka/Objective-C/neuralNet_sb/Layer/Activation/ReluActivationLayer.c

CMakeFiles/neuralNet_sb.dir/Layer/Activation/ReluActivationLayer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/neuralNet_sb.dir/Layer/Activation/ReluActivationLayer.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ashitaka/Objective-C/neuralNet_sb/Layer/Activation/ReluActivationLayer.c > CMakeFiles/neuralNet_sb.dir/Layer/Activation/ReluActivationLayer.c.i

CMakeFiles/neuralNet_sb.dir/Layer/Activation/ReluActivationLayer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/neuralNet_sb.dir/Layer/Activation/ReluActivationLayer.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ashitaka/Objective-C/neuralNet_sb/Layer/Activation/ReluActivationLayer.c -o CMakeFiles/neuralNet_sb.dir/Layer/Activation/ReluActivationLayer.c.s

# Object files for target neuralNet_sb
neuralNet_sb_OBJECTS = \
"CMakeFiles/neuralNet_sb.dir/main.c.o" \
"CMakeFiles/neuralNet_sb.dir/Matrix/Matrix.c.o" \
"CMakeFiles/neuralNet_sb.dir/Linagb/Linagb.c.o" \
"CMakeFiles/neuralNet_sb.dir/ExceptionHandling/error.c.o" \
"CMakeFiles/neuralNet_sb.dir/Vector/Vector.c.o" \
"CMakeFiles/neuralNet_sb.dir/Object/ObjectManager.c.o" \
"CMakeFiles/neuralNet_sb.dir/Layer/DenseLayer/DenseLayer.c.o" \
"CMakeFiles/neuralNet_sb.dir/Layer/Activation/SigmoidActivationLayer.c.o" \
"CMakeFiles/neuralNet_sb.dir/Layer/SoftmaxLayer/SoftmaxLayer.c.o" \
"CMakeFiles/neuralNet_sb.dir/Layer/Layer.c.o" \
"CMakeFiles/neuralNet_sb.dir/Layer/Activation/ReluActivationLayer.c.o"

# External object files for target neuralNet_sb
neuralNet_sb_EXTERNAL_OBJECTS =

neuralNet_sb: CMakeFiles/neuralNet_sb.dir/main.c.o
neuralNet_sb: CMakeFiles/neuralNet_sb.dir/Matrix/Matrix.c.o
neuralNet_sb: CMakeFiles/neuralNet_sb.dir/Linagb/Linagb.c.o
neuralNet_sb: CMakeFiles/neuralNet_sb.dir/ExceptionHandling/error.c.o
neuralNet_sb: CMakeFiles/neuralNet_sb.dir/Vector/Vector.c.o
neuralNet_sb: CMakeFiles/neuralNet_sb.dir/Object/ObjectManager.c.o
neuralNet_sb: CMakeFiles/neuralNet_sb.dir/Layer/DenseLayer/DenseLayer.c.o
neuralNet_sb: CMakeFiles/neuralNet_sb.dir/Layer/Activation/SigmoidActivationLayer.c.o
neuralNet_sb: CMakeFiles/neuralNet_sb.dir/Layer/SoftmaxLayer/SoftmaxLayer.c.o
neuralNet_sb: CMakeFiles/neuralNet_sb.dir/Layer/Layer.c.o
neuralNet_sb: CMakeFiles/neuralNet_sb.dir/Layer/Activation/ReluActivationLayer.c.o
neuralNet_sb: CMakeFiles/neuralNet_sb.dir/build.make
neuralNet_sb: CMakeFiles/neuralNet_sb.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ashitaka/Objective-C/neuralNet_sb/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Linking C executable neuralNet_sb"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/neuralNet_sb.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/neuralNet_sb.dir/build: neuralNet_sb

.PHONY : CMakeFiles/neuralNet_sb.dir/build

CMakeFiles/neuralNet_sb.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/neuralNet_sb.dir/cmake_clean.cmake
.PHONY : CMakeFiles/neuralNet_sb.dir/clean

CMakeFiles/neuralNet_sb.dir/depend:
	cd /home/ashitaka/Objective-C/neuralNet_sb/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ashitaka/Objective-C/neuralNet_sb /home/ashitaka/Objective-C/neuralNet_sb /home/ashitaka/Objective-C/neuralNet_sb/cmake-build-debug /home/ashitaka/Objective-C/neuralNet_sb/cmake-build-debug /home/ashitaka/Objective-C/neuralNet_sb/cmake-build-debug/CMakeFiles/neuralNet_sb.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/neuralNet_sb.dir/depend

