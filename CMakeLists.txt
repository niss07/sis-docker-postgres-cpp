cmake_minimum_required(VERSION 3.16)
project(sis_app LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(PkgConfig REQUIRED)
pkg_check_modules(PQXX REQUIRED libpqxx)

add_executable(sis_app
    src/main.cpp
)

target_include_directories(sis_app PRIVATE
    ${PQXX_INCLUDE_DIRS}
)

target_link_libraries(sis_app PRIVATE
    ${PQXX_LIBRARIES}
)
