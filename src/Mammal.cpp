///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  animal_farm_3 - EE 205 - Spr 2022
///
/// @file Mammal.cpp
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   14_Apr_2022
///////////////////////////////////////////////////////////////////////////////


#include <iomanip>

#include "Mammal.h"
#include "Color.h"
#include "config.h"

const std::string Mammal::MAMMAL_NAME = "Mammalian";

Color Mammal::getColor() const noexcept {
    return Mammal::color;
}

void Mammal::setColor(const Color newColor) noexcept {
    color = newColor;
}

void Mammal::dump() const noexcept {
    Animal::dump();
    std::string className = "Mammal";
    FORMAT( className, "Color" ) << Mammal::color << std::endl;

}

