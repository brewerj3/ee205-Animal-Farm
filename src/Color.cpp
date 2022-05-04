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
        case Color::UNKNOWN_COLOR:  lhs_stream << "Unknown Color";
        break;
        case Color::BLACK:          lhs_stream << "Black";
        break;
        case Color::BROWN:          lhs_stream << "Brown";
        break;
        case Color::WHITE:          lhs_stream << "White";
        break;
        case Color::RED:            lhs_stream << "Red";
        break;
        case Color::BLUE:           lhs_stream << "Blue";
        break;
        case Color::GINGER:         lhs_stream << "Ginger";
        break;
        case Color::CREAM:          lhs_stream << "Cream";
        break;
        case Color::CINNAMON:       lhs_stream << "Cinnamon";
        break;
        case Color::CALICO:         lhs_stream << "Calico";
        break;
        default:                throw std::out_of_range( "This unit can't be mapped to a string" );
    }
}