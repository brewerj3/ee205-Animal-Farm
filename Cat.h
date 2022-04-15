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

#include "Mammal.h"

#define MAX_NAME_LENGTH ( 50 )
#define FORMAT_LINE( className, member ) cout << setw(8) << (className) << setw(20) << (member) << setw(52)

enum Breed{UNKNOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX};

extern int currentNumberOfCats;

class Cat: public Mammal {
protected:
    std::string name;
    bool isFixed;

public:
    //Species Name
    static const std::string SPECIES_NAME;

    //Max Weight of Cats
    static const float MAX_WEIGHT;

    //Check if name is valid
    static bool validateName( const std::string& newName);


    //Constructors
    Cat();
    Cat( std::string &newName, const Color newColor, const bool newIsFixed, const Gender newGender, const float newWeight );

    //getters
    std::string getName() const;

    //setters
    void setNameOfCat( std::string newName );

    // Print Method
    void dump();

    // Validation Method
    bool validate();


};