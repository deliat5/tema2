cmake_minimum_required(VERSION 3.10)

project(temaPOO2)

add_executable(temaPOO2
        main.cpp
        src/Sunflower.cpp
        src/Liliac.cpp
        src/Rose.cpp
        src/Bouquet.cpp
        src/AbstractFlower.cpp
)


target_include_directories(temaPOO2 PRIVATE ${CMAKE_SOURCE_DIR}/include)
