cmake_minimum_required(VERSION 3.22)

set(projname "animal_farm_3")
project(${projname})

set(CMAKE_CXX_STANDARD 14)

add_executable( animalFarm
                main.cpp
                config.h
                Cat.cpp Cat.h
        Node.h
                Animal.cpp Animal.h
                Weight.cpp Weight.h
                Gender.cpp Gender.h
                Mammal.cpp Mammal.h
                Color.cpp Color.h List.cpp List.h Node.h SinglyLinkedList.cpp SinglyLinkedList.h)
