cmake_minimum_required(VERSION 2.8)
project(Foo)

option(shared "build mylib as a shared library" ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_executable(Foo main.cc foo.cc)  # No lib

if (shared)
	add_library(mylib SHARED foo.cc)
else (shared)
	add_library(mylib STATIC foo.cc)
endif (shared)

include (GenerateExportHeader)          
GENERATE_EXPORT_HEADER(mylib  # generates the export header shared_exports.h  automatically
   BASE_NAME mylib
   EXPORT_MACRO_NAME SHARED_EXPORTS
   EXPORT_FILE_NAME shared_exports.h
   STATIC_DEFINE SHARED_EXPORTS_BUILT_AS_STATIC)

add_executable(Foo2 main.cc)
target_link_libraries(Foo2 mylib)
