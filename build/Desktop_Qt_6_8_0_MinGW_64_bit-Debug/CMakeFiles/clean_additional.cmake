# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Qt-6Calculator_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Qt-6Calculator_autogen.dir\\ParseCache.txt"
  "Qt-6Calculator_autogen"
  )
endif()
