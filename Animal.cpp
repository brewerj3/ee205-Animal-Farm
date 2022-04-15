///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  animal_farm_3 - EE 205 - Spr 2022
///
/// @file Animal.cpp
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   14_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

#include "Animal.h"
#include "Weight.h"
#include "Gender.h"
#include "config.h"
#include "Color.h"

const std::string Animal::KINGDOM_NAME = "Animalia";

Animal::Animal(Weight::typeWeight newMaxWeight, const std::string &newClassification, const std::string &newSpecies) {
    animalWeight.setMaxWeight( newMaxWeight );
    species = newSpecies;
    classification = newClassification;
    gender = Gender::UNKNOWN_GENDER;

}

Animal::Animal(const Gender newGender, const Weight::typeWeight newWeight, const Weight::typeWeight newMaxWeight,
               const std::string &newClassification, const std::string &newSpecies) {
    gender = newGender;
    animalWeight.setWeight( newWeight );
    animalWeight.setMaxWeight( newMaxWeight );
    species = newSpecies;
    classification = newClassification;


}

std::string Animal::getKingdom() const noexcept {
    return KINGDOM_NAME;
}

std::string Animal::getClassification() const noexcept {
    return classification;
}

std::string Animal::getSpecies() const noexcept {
    return species;
}

Gender Animal::getGender() const noexcept {
    return gender;
}

Weight::typeWeight Animal::getWeight() noexcept {
    return animalWeight.getWeight();
}

void Animal::setWeight(const Weight::typeWeight newWeight) {
    animalWeight.setWeight(newWeight);
}

void Animal::dump() const noexcept {
//@TODO add dump
}

bool Animal::validate() const noexcept {
    //Check if Animal Object is valid
    if( !validateClassification( Animal::classification ) ) {
        return false;
    }
    if( !validateSpecies( Animal::species ) ) {
        return false;
    }
    if( !animalWeight.validate() ) {
        return false;
    }
    return true;
}

bool Animal::validateClassification(const std::string &checkClassification) noexcept {
    //Check if Animal Classification is valid
    if( checkClassification.empty() ) {
        std::cout << PROGRAM_NAME << ": Classification must not be empty" << std::endl;
        return false;
    }
    return true;
}

bool Animal::validateSpecies(const std::string &checkSpecies) noexcept {
    //Check if Animal Species is Valid
    if( checkSpecies.empty() ) {
        std::cout << PROGRAM_NAME << ": Species must not be empty" << std::endl;
        return false;
    }
    return true;
}

void Animal::setGender(const Gender newGender) {
    if( getGender() == Gender::UNKNOWN_GENDER ) {
        gender = newGender;
    }
    std::cout << PROGRAM_NAME << "Cannot change a gender" << std::endl;
}
