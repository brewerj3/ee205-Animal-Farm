///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_13a_animal_farm_3 - EE 205 - Spr 2022
///
/// @file catDatabase.h
/// @version 3.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   14_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include <cassert>

#include "Mammal.h"

#define MAX_NAME_LENGTH ( 50 )

class Cat: public Mammal {
protected:
    std::string name;   // Name of the Cat
    bool isFixed;       // Is the Cat fixed or not

public:
    // Species Name
    static const std::string SPECIES_NAME;

    // Max Weight of Cats
    static const Weight::typeWeight MAX_WEIGHT;

    // Constructors
    Cat( const std::string& newName ) : Mammal( MAX_WEIGHT, SPECIES_NAME ) {
        assert( validateName ( newName ) );
        name = newName;
        isFixed = false;
        Cat::validate();
    }
    Cat( const std::string &newName, const Color newColor, const bool newIsFixed, const Gender newGender, const Weight::typeWeight newWeight
    ) : Mammal( newColor, newGender, newWeight, MAX_WEIGHT, SPECIES_NAME ) {
        assert( validateName( newName) );
        name = newName;
        isFixed = newIsFixed;
        Cat::validate();
    }

    // Getters
    std::string getName() const;

    // Setters
    void setNameOfCat( const std::string& newName );
    void fixCat() noexcept;

    // Print Method
    void dump();

    // Make the cat say meow
    std::string speak() const noexcept override;

    // Validation Methods
    bool validate();
    static bool validateName( const std::string& newName );


};