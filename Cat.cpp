///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_13a_animal_farm_3 - EE 205 - Spr 2022
///
/// @file catDatabase.cpp
/// @version 3.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   14_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cstring>
#include <iomanip>

#include "Cat.h"
#include "config.h"


int currentNumberOfCats = 0;

const std::string Cat::SPECIES_NAME = "Felis Catus";
const float Cat::MAX_WEIGHT = 40;

bool Cat::validateName(const std::string& newName) {
    if( newName.length() > MAX_NAME_LENGTH ) {
        std::cout << PROGRAM_NAME << ": Name is to long" << std::endl;
        return false;
    }
    if( newName.length() <= 0 ) {
        std::cout << PROGRAM_NAME << ": Name is too short" << std::endl;
        return false;
    }
    if( newName.empty() ) {
        std::cout << PROGRAM_NAME << ": Name cannot be empty" << std::endl;
        return false;
    }
    return true;
}
