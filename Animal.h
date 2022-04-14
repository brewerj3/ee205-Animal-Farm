///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  animal_farm_3 - EE 205 - Spr 2022
///
/// @file Animal.h
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   14_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

#include "Weight.h"

class Animal{
private:
    static const std::string KINGDOM_NAME;
    std::string species;
    std::string classification;
    enum Gender{UNKNOWN_GENDER, MALE, FEMALE};
    Weight weight;

public:
    //Constructors
    Animal( float newMaxWeight, const std::string &newClassification, const std::string &newSpecies );

};