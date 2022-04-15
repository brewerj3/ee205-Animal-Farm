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

Animal::Animal(float newMaxWeight, const std::string &newClassification, const std::string &newSpecies) {

    Weight::setWeight(newMaxWeight);
}

Animal::Animal(const Gender newGender, const float newWeight, const float newMaxWeight,
               const std::string &newClassification, const std::string &newSpecies) {


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

float Animal::getWeight() const noexcept {
    return Weight::getWeight();
}

void Animal::setWeight(const float newWeight) {
    Weight::setWeight( newWeight );
}

void Animal::dump() const noexcept {
//@TODO add dump
}

bool Animal::validate() const noexcept {
    //Check if Animal Object is valid
    return false;
}

bool Animal::validateClassification(const std::string &checkClassification) noexcept {
    //Check if Animal Classification is valid
    return false;
}

bool Animal::validateSpecies(const std::string &checkSpecies) noexcept {
    //Check if Animal Species is Valid
    return false;
}

void Animal::setGender(const Gender newGender) {
    if( getGender() == Gender::UNKNOWN_GENDER ) {
        gender = newGender;
    }
    std::cout << PROGRAM_NAME << "Can not change a gender" << std::endl;
}
