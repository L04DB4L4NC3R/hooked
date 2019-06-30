cmake_minimum_required (VERSION 2.9)

# Setup projectname
project (hooked)

# Compile and link 2 executables into a binary
add_executable(sample src/constants_echo.cpp src/echo.cpp)

SET( version 1.0  )
MESSAGE( building version ${version}  )

SET( supported_hooks pre post update  )
MESSAGE("hooks supported: ")
FOREACH (val ${supported_hooks})
	MESSAGE("hook: ${val}")
ENDFOREACH(val)
