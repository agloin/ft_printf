# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/agloin/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/193.6911.21/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/agloin/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/193.6911.21/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/agloin/school21/ft_printf_git/sources

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/agloin/school21/ft_printf_git/sources/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/sources.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sources.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sources.dir/flags.make

CMakeFiles/sources.dir/ft_printf.c.o: CMakeFiles/sources.dir/flags.make
CMakeFiles/sources.dir/ft_printf.c.o: ../ft_printf.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/agloin/school21/ft_printf_git/sources/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/sources.dir/ft_printf.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/sources.dir/ft_printf.c.o   -c /home/agloin/school21/ft_printf_git/sources/ft_printf.c

CMakeFiles/sources.dir/ft_printf.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/sources.dir/ft_printf.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/agloin/school21/ft_printf_git/sources/ft_printf.c > CMakeFiles/sources.dir/ft_printf.c.i

CMakeFiles/sources.dir/ft_printf.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/sources.dir/ft_printf.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/agloin/school21/ft_printf_git/sources/ft_printf.c -o CMakeFiles/sources.dir/ft_printf.c.s

CMakeFiles/sources.dir/test_file.c.o: CMakeFiles/sources.dir/flags.make
CMakeFiles/sources.dir/test_file.c.o: ../test_file.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/agloin/school21/ft_printf_git/sources/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/sources.dir/test_file.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/sources.dir/test_file.c.o   -c /home/agloin/school21/ft_printf_git/sources/test_file.c

CMakeFiles/sources.dir/test_file.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/sources.dir/test_file.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/agloin/school21/ft_printf_git/sources/test_file.c > CMakeFiles/sources.dir/test_file.c.i

CMakeFiles/sources.dir/test_file.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/sources.dir/test_file.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/agloin/school21/ft_printf_git/sources/test_file.c -o CMakeFiles/sources.dir/test_file.c.s

CMakeFiles/sources.dir/ft_new_printf.c.o: CMakeFiles/sources.dir/flags.make
CMakeFiles/sources.dir/ft_new_printf.c.o: ../ft_new_printf.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/agloin/school21/ft_printf_git/sources/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/sources.dir/ft_new_printf.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/sources.dir/ft_new_printf.c.o   -c /home/agloin/school21/ft_printf_git/sources/ft_new_printf.c

CMakeFiles/sources.dir/ft_new_printf.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/sources.dir/ft_new_printf.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/agloin/school21/ft_printf_git/sources/ft_new_printf.c > CMakeFiles/sources.dir/ft_new_printf.c.i

CMakeFiles/sources.dir/ft_new_printf.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/sources.dir/ft_new_printf.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/agloin/school21/ft_printf_git/sources/ft_new_printf.c -o CMakeFiles/sources.dir/ft_new_printf.c.s

CMakeFiles/sources.dir/ft_atoi_base.c.o: CMakeFiles/sources.dir/flags.make
CMakeFiles/sources.dir/ft_atoi_base.c.o: ../ft_atoi_base.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/agloin/school21/ft_printf_git/sources/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/sources.dir/ft_atoi_base.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/sources.dir/ft_atoi_base.c.o   -c /home/agloin/school21/ft_printf_git/sources/ft_atoi_base.c

CMakeFiles/sources.dir/ft_atoi_base.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/sources.dir/ft_atoi_base.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/agloin/school21/ft_printf_git/sources/ft_atoi_base.c > CMakeFiles/sources.dir/ft_atoi_base.c.i

CMakeFiles/sources.dir/ft_atoi_base.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/sources.dir/ft_atoi_base.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/agloin/school21/ft_printf_git/sources/ft_atoi_base.c -o CMakeFiles/sources.dir/ft_atoi_base.c.s

# Object files for target sources
sources_OBJECTS = \
"CMakeFiles/sources.dir/ft_printf.c.o" \
"CMakeFiles/sources.dir/test_file.c.o" \
"CMakeFiles/sources.dir/ft_new_printf.c.o" \
"CMakeFiles/sources.dir/ft_atoi_base.c.o"

# External object files for target sources
sources_EXTERNAL_OBJECTS =

sources: CMakeFiles/sources.dir/ft_printf.c.o
sources: CMakeFiles/sources.dir/test_file.c.o
sources: CMakeFiles/sources.dir/ft_new_printf.c.o
sources: CMakeFiles/sources.dir/ft_atoi_base.c.o
sources: CMakeFiles/sources.dir/build.make
sources: CMakeFiles/sources.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/agloin/school21/ft_printf_git/sources/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking C executable sources"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sources.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sources.dir/build: sources

.PHONY : CMakeFiles/sources.dir/build

CMakeFiles/sources.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sources.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sources.dir/clean

CMakeFiles/sources.dir/depend:
	cd /home/agloin/school21/ft_printf_git/sources/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/agloin/school21/ft_printf_git/sources /home/agloin/school21/ft_printf_git/sources /home/agloin/school21/ft_printf_git/sources/cmake-build-debug /home/agloin/school21/ft_printf_git/sources/cmake-build-debug /home/agloin/school21/ft_printf_git/sources/cmake-build-debug/CMakeFiles/sources.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sources.dir/depend

