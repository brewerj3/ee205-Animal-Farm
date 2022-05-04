///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_13a_animal_farm_3 - EE 205 - Spr 2022
///
/// @file cat.h
/// @version 3.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   14_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include <cassert>

#include "Mammal.h"

/// Cat inherits from Mammal and contains information about a Cat
class Cat: public Mammal {
protected:
    std::string name;   ///< The name of the Cat
    bool isFixed;       ///< Is the Cat fixed or not

public:
    // Species Name
    static const std::string SPECIES_NAME;      ///< The name of the Species

    // Max Weight of Cats
    static const Weight::typeWeight MAX_WEIGHT; ///< A Weight Class tha that holds information about the weight of the Cat

    // Constructors
    /// Constructs a Cat with just a Name
    Cat( const std::string& newName ) : Mammal( MAX_WEIGHT, SPECIES_NAME ) {
        assert( validateName ( newName ) );
        name = newName;
        isFixed = false;
        Cat::validate();
    }
    /// Creates a Cat with a Name, Color, Fixed state, Gender, Weight
    Cat( const std::string &newName, const Color newColor, const bool newIsFixed, const Gender newGender, const Weight::typeWeight newWeight
    ) : Mammal( newColor, newGender, newWeight, MAX_WEIGHT, SPECIES_NAME ) {
        assert( validateName( newName) );
        name = newName;
        isFixed = newIsFixed;
        Cat::validate();
    }

    // Getters
    std::string getName() const;                        ///< Gets the name of the Cat

    // Setters
    void setNameOfCat( const std::string& newName );    ///< Set the name of the Cat
    void fixCat() noexcept;                             ///< Fixes the Cat(spay/neuter)

    // Print Method
    void dump() const noexcept override;                ///< Dump the contents of the Cat Object

    // Make the cat say meow
    std::string speak() const noexcept override;        ///< Make the cat Meow

    // Validation Methods
    bool validate();                                            ///< Check if the object is Valid
    static bool validateName( const std::string& newName );     ///< Check if the names is Valid
};