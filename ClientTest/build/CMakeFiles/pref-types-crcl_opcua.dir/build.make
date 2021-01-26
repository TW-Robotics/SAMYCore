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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jbg/Desktop/SAMYCore/ClientTest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jbg/Desktop/SAMYCore/ClientTest/build

# Utility rule file for pref-types-crcl_opcua.

# Include the progress variables for this target.
include CMakeFiles/pref-types-crcl_opcua.dir/progress.make

CMakeFiles/pref-types-crcl_opcua: src_generated/types_crcl_opcua_generated.c
CMakeFiles/pref-types-crcl_opcua: src_generated/types_crcl_opcua_generated.h
CMakeFiles/pref-types-crcl_opcua: src_generated/types_crcl_opcua_generated_handling.h
CMakeFiles/pref-types-crcl_opcua: src_generated/types_crcl_opcua_generated_encoding_binary.h


src_generated/types_crcl_opcua_generated.c: /usr/local/share/open62541/tools/generate_datatypes.py
src_generated/types_crcl_opcua_generated.c: /home/jbg/Desktop/SAMYCore/OPCUA_CRCL/model/Published/CRCL.Types.bsd
src_generated/types_crcl_opcua_generated.c: /home/jbg/Desktop/SAMYCore/OPCUA_CRCL/model/Published/CRCL_OPCUA.csv
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jbg/Desktop/SAMYCore/ClientTest/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating src_generated/types_crcl_opcua_generated.c, src_generated/types_crcl_opcua_generated.h, src_generated/types_crcl_opcua_generated_handling.h, src_generated/types_crcl_opcua_generated_encoding_binary.h"
	/usr/bin/python /usr/local/share/open62541/tools/generate_datatypes.py --namespaceMap=2:https://crcl.org --type-bsd=/home/jbg/Desktop/SAMYCore/ClientTest/../OPCUA_CRCL/model/Published/CRCL.Types.bsd --type-csv=/home/jbg/Desktop/SAMYCore/ClientTest/../OPCUA_CRCL/model/Published/CRCL_OPCUA.csv --no-builtin /home/jbg/Desktop/SAMYCore/ClientTest/build/src_generated//types_crcl_opcua

src_generated/types_crcl_opcua_generated.h: src_generated/types_crcl_opcua_generated.c
	@$(CMAKE_COMMAND) -E touch_nocreate src_generated/types_crcl_opcua_generated.h

src_generated/types_crcl_opcua_generated_handling.h: src_generated/types_crcl_opcua_generated.c
	@$(CMAKE_COMMAND) -E touch_nocreate src_generated/types_crcl_opcua_generated_handling.h

src_generated/types_crcl_opcua_generated_encoding_binary.h: src_generated/types_crcl_opcua_generated.c
	@$(CMAKE_COMMAND) -E touch_nocreate src_generated/types_crcl_opcua_generated_encoding_binary.h

pref-types-crcl_opcua: CMakeFiles/pref-types-crcl_opcua
pref-types-crcl_opcua: src_generated/types_crcl_opcua_generated.c
pref-types-crcl_opcua: src_generated/types_crcl_opcua_generated.h
pref-types-crcl_opcua: src_generated/types_crcl_opcua_generated_encoding_binary.h
pref-types-crcl_opcua: src_generated/types_crcl_opcua_generated_handling.h
pref-types-crcl_opcua: CMakeFiles/pref-types-crcl_opcua.dir/build.make

.PHONY : pref-types-crcl_opcua

# Rule to build all files generated by this target.
CMakeFiles/pref-types-crcl_opcua.dir/build: pref-types-crcl_opcua

.PHONY : CMakeFiles/pref-types-crcl_opcua.dir/build

CMakeFiles/pref-types-crcl_opcua.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pref-types-crcl_opcua.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pref-types-crcl_opcua.dir/clean

CMakeFiles/pref-types-crcl_opcua.dir/depend:
	cd /home/jbg/Desktop/SAMYCore/ClientTest/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jbg/Desktop/SAMYCore/ClientTest /home/jbg/Desktop/SAMYCore/ClientTest /home/jbg/Desktop/SAMYCore/ClientTest/build /home/jbg/Desktop/SAMYCore/ClientTest/build /home/jbg/Desktop/SAMYCore/ClientTest/build/CMakeFiles/pref-types-crcl_opcua.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pref-types-crcl_opcua.dir/depend

