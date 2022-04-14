cmake_minimum_required(VERSION 3.22)

set(projname "animal_farm_3")
project(${projname})

set(CMAKE_CXX_STANDARD 14)

add_executable(animalFarm
               main.cpp
               config.h
               Cat.cpp Cat.h
               addCats.cpp addCats.h
               catValidation.cpp catValidation.h
               reportCats.cpp reportCats.h
               deleteCats.cpp deleteCats.h
               Node.cpp Node.h Animal.cpp Animal.h)
