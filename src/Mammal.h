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
/// This class holds information to make a Mammal and inherits from Animal
class Mammal: public Animal{
protected:
    Color color = Color::UNKNOWN_COLOR; ///< The color of the Mammal

public:
    static const std::string MAMMAL_NAME;   ///< The name of the Mammal

    //Constructors
    /// Creates a simple Mammal
    Mammal( Weight::typeWeight newMaxWeight, const std::string &newSpecies ) : Animal( newMaxWeight, MAMMAL_NAME, newSpecies ) {};
    /// Creates a complex Mammal
    Mammal( const Color newColor, const Gender newGender, const float newWeight, const float newMaxWeight, const std::string &newSpecies ) : Animal(newGender, newWeight, newMaxWeight, MAMMAL_NAME, newSpecies ) {
        setColor( newColor );
    };

    //Getters
    Color getColor() const noexcept;    ///< Get the Color

    //Setters
    void setColor( Color newColor ) noexcept;   ///< Set the Color

    //Print out
    void dump() const noexcept override;        ///< dump the contents of Mammal and Animal Class

};