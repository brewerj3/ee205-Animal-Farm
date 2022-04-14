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
    Animal( Gender newGender, float newWeight, float newMaxWeight, const std::string &newClassification, const std::string &newSpecies );

    //Getters
    std::string getKingdom() const noexcept;
    std::string getClassification() const noexcept;
    std::string getSpecies() const noexcept;
    Gender getGender() const noexcept;
    float getWeight() const noexcept;

    //Setters
    void setWeight( float newWeight );

    //Speak
    virtual std::string speak() const noexcept;

    //Print out
    void dump() const noexcept override;

    //Validation
    bool validate() const noexcept override;
    static bool validateClassification(const std::string &checkClassification ) noexcept;
    static bool validateSpecies( const std::string &checkSpecies ) noexcept;
    void setGender(const Gender newGender );
};