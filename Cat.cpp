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
const Weight::typeWeight Cat::MAX_WEIGHT = 40;



std::string Cat::getName() const {
    return name;
}

void Cat::setNameOfCat( const std::string& newName ) {
    assert( validateName( newName ) );
    name = newName;
}

void Cat::fixCat() noexcept {
    isFixed = true; // Cant unfix a Cat
}

void Cat::dump() {
    Mammal::dump();
    //std::cout << std::setw(80) << std::setfill( '=' ) << "" << std::endl;
    //std::cout << std::setfill( ' ' );
    //std::cout << std::left;
    //std::cout << std::boolalpha;
    std::string className = "Cat";
    FORMAT( className, "Cat name" ) << Cat::getName() << std::endl;
    FORMAT( className, "Is the cat fixed" ) << Cat::isFixed << std::endl;
}

std::string Cat::speak() const noexcept {
    return "Meow";
}

bool Cat::validate() {
    if( !validateName( Cat::name )) {
        return false;
    }
    if( !Animal::validate() ) {
        return false;
    }
    return true;
}

bool Cat::validateName( const std::string& newName ) {
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