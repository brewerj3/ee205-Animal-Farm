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
#include "Gender.h"

class Animal{
private:
    static const std::string KINGDOM_NAME;
    std::string species;
    std::string classification;
    Gender gender;
    Weight weight;

public:
    //Constructors
    Animal( float newMaxWeight, const std::string &newClassification, const std::string &newSpecies );
    Animal( const Gender newGender, const float newWeight, const float newMaxWeight, const std::string &newClassification, const std::string &newSpecies );

};