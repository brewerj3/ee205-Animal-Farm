cmake_minimum_required(VERSION 3.22)
project(ee205_lab_08d_animal_farm_1_to_clion)

set(CMAKE_CXX_STANDARD 14)

add_executable(animalFarm
        main.cpp
        config.h
        catDatabase.cpp catDatabase.h
        addCats.cpp addCats.h
        catValidation.cpp catValidation.h
        reportCats.cpp reportCats.h
        deleteCats.cpp deleteCats.h)
