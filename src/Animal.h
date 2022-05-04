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
    /// Create a simple Animal object
    Animal( Weight::typeWeight newMaxWeight, const std::string& newClassification, const std::string& newSpecies );

    /// Create a complex Animal object
    Animal( Gender newGender, Weight::typeWeight newWeight, Weight::typeWeight newMaxWeight, const std::string &newClassification, const std::string &newSpecies );

    //Getters
    std::string getKingdom() const noexcept;        ///< Get the Kingdom
    std::string getClassification() const noexcept; ///< Get the Classification
    std::string getSpecies() const noexcept;        ///< Get the Species
    Gender getGender() const noexcept;              ///< Get the Gender
    Weight::typeWeight getWeight() noexcept;        ///< Get the Weight

    //Setters
    void setWeight( Weight::typeWeight newWeight ); ///< Set the Weight

    //Speak
    virtual std::string speak() const noexcept; ///< Make the Animal say something
    void setGender(Gender newGender );          ///< Set the gender of the Animal

    //Print out
    void dump() const noexcept override; ///< Dump the contents of the object

    //Validation
    bool validate() const noexcept override;                                                ///< Check if the object is valid
    static bool validateClassification(const std::string &checkClassification ) noexcept;   ///< validate the Classification
    static bool validateSpecies( const std::string &checkSpecies ) noexcept;                ///< validate the species

};