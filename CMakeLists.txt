cmake_minimum_required(VERSION 3.22)
project(ee205_lab_08d_animal_farm_1_to_clion)

set(CMAKE_CXX_STANDARD 14)

add_executable(animalFarm
        main.cpp
        config.h
        addCats.cpp addCats.h
        catDatabase.cpp catDatabase.h
        catValidation.cpp catValidation.h
        deleteCats.cpp deleteCats.h
        reportCats.cpp reportCats.h
        updateCats.cpp updateCats.h)
