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

#pragma once

#include <iostream>

#include "Weight.h"
#include "Gender.h"
#include "Node.h"

class Animal: public Node{
private:
    std::string species; ///< The name of the Animal species
    std::string classification; ///< The Animal classification
    Gender gender; ///< The gender of the Animal
    Weight animalWeight; ///< The weight of the animal

public:
    static const std::string KINGDOM_NAME; ///< The Kingdom name of the Animal

    //Constructors
    Animal( Weight::typeWeight newMaxWeight, const std::string& newClassification, const std::string& newSpecies );
    Animal( Gender newGender, Weight::typeWeight newWeight, Weight::typeWeight newMaxWeight, const std::string &newClassification, const std::string &newSpecies );

    //Getters
    std::string getKingdom() const noexcept;
    std::string getClassification() const noexcept;
    std::string getSpecies() const noexcept;
    Gender getGender() const noexcept;
    Weight::typeWeight getWeight() noexcept;

    //Setters
    void setWeight( Weight::typeWeight newWeight );

    //Speak
    virtual std::string speak() const noexcept; //@TODO add definition

    //Print out
    void dump() const noexcept override;

    //Validation
    bool validate() const noexcept override;
    static bool validateClassification(const std::string &checkClassification ) noexcept;
    static bool validateSpecies( const std::string &checkSpecies ) noexcept;
    void setGender(Gender newGender );
};