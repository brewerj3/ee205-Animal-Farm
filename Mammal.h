///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  animal_farm_3 - EE 205 - Spr 2022
///
/// @file Mammal.h
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   14_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include <iostream>

#include "Color.h"
#include "Animal.h"

class Mammal: public Animal{
protected:
    Color color = Color::UNKNOWN_COLOR;

public:
    static const std::string MAMMAL_NAME;

    //Constructors
    Mammal( Weight::typeWeight newMaxWeight, const std::string &newSpecies ) : Animal( newMaxWeight, MAMMAL_NAME, newSpecies ) {};
    Mammal( const Color newColor, const Gender newGender, const float newWeight, const float newMaxWeight, const std::string &newSpecies ) : Animal(newGender, newWeight, newMaxWeight, MAMMAL_NAME, newSpecies ) {
        setColor( newColor );
    };

    //Getters
    Color getColor() const noexcept;

    //Setters
    void setColor( Color newColor ) noexcept;

    //Print out
    void dump() const noexcept override; //@TODO

};