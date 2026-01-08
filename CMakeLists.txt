cmake_minimum_required(VERSION 3.10)
project(FileOrganizer CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON) 

find_package(PkgConfig REQUIRED)
pkg_check_modules(MYSQL REQUIRED mysqlclient)

add_executable(wehopeitruns src/main.cpp)

