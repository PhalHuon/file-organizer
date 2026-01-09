cmake_minimum_required(VERSION 3.10)
project(FileOrganizer CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON) 

find_package(PkgConfig REQUIRED)
pkg_check_modules(MYSQL REQUIRED mysqlclient)

set(SOURCE_FILES src/main.cpp src/tree.cpp)
set(HEADER_FILES include/tree.hpp)

add_executable(wehopeitruns ${SOURCE_FILES} ${HEADER_FILES})

target_include_directories(wehopeitruns PRIVATE
	${CMAKE_SOURCE_DIR}/include
)

