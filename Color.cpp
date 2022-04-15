///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  animal_farm_3 - EE 205 - Spr 2022
///
/// @file Color.cpp
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   14_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

#include "Color.h"

std::ostream& operator<<( std::ostream& lhs_stream, const Color& rhs_Color ) {
    switch( rhs_Color ) {
        case Color::UNKNOWN_COLOR:    return lhs_stream << "Unknown Color";
        case Color::BLACK:              return lhs_stream << "Black";
        case Color::BROWN:            return lhs_stream << "Brown";
        case Color::WHITE:          return lhs_stream << "White";
        case Color::RED:            return lhs_stream << "Red";
        case Color::BLUE:           return lhs_stream << "Blue";
        case Color::GINGER:         return lhs_stream << "Ginger";
        case Color::CREAM:          return lhs_stream << "Cream";
        case Color::CINNAMON:       return lhs_stream << "Cinnamon";
        case Color::CALICO:         return lhs_stream << "Calico";
        default:                throw std::out_of_range( "This unit can't be mapped to a string" );
    }
}