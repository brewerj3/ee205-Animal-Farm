///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_13a_animal_farm_3 - EE 205 - Spr 2022
///
/// @file main.cpp
/// @version 3.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   14_Apr_2022
///////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include <cassert>
#include <cstring>

#include "Cat.h"
#include "SinglyLinkedList.h"
#include "config.h"

#define MAX_NAME1    "1234567890123456789012345678901234567890123456789"
#define ILLEGAL_NAME "12345678901234567890123456789012345678901234567890"

int main(){
    std::cout << "Starting " << PROGRAM_NAME << std::endl;


    SinglyLinkedList catDatabase;
    catDatabase.push_front( new Cat( "Loki",   Color::CREAM,  true, Gender::MALE,    1.0 ) );
    catDatabase.push_front( new Cat( "Milo",   Color::BLACK,  true, Gender::MALE,    1.1 ) );
    catDatabase.push_front( new Cat( "Bella",  Color::BROWN,  true, Gender::FEMALE,  1.2 ) );
    catDatabase.push_front( new Cat( "Kali",   Color::CALICO, true, Gender::FEMALE,  1.3 ) );
    catDatabase.push_front( new Cat( "Trin",   Color::WHITE, true, Gender::FEMALE,   1.4 ) );
    //printAllCats();


    //deleteAllCats();

    //printAllCats();

    std::cout << "Done with " << PROGRAM_NAME << std::endl;
}