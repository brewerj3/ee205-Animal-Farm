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


Color color = Color::UNKNOWN_COLOR;

const std::string Mammal::MAMMAL_NAME = "Mammilian";

Color Mammal::getColor() const noexcept {
    return Mammal::color;
}

void Mammal::setColor(const Color newColor) noexcept {
    color = newColor;
}

void Mammal::dump() const noexcept {
    Animal::dump();
    std::cout << std::setw(80) << std::setfill( '=' ) << "" << std::endl;
    std::cout << std::setfill( ' ' );
    std::cout << std::left;
    std::cout << std::boolalpha;
    std::string className = "Mammal";
    FORMAT( className, "This" ) << this << std::endl;
    FORMAT( className, "Mammal Name" ) << Mammal::MAMMAL_NAME << std::endl;
    FORMAT( className, "Color" ) << Mammal::color << std::endl;

}

