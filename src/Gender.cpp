///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  animal_farm_3 - EE 205 - Spr 2022
///
/// @file Gender.cpp
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   14_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include "Gender.h"

std::ostream& operator<<( std::ostream& lhs_stream, const Gender& rhs_gender ) {
    switch( rhs_gender ) {
        case Gender::UNKNOWN_GENDER:    lhs_stream << "Unknown gender";
        break;
        case Gender::MALE:              lhs_stream << "Male";
        break;
        case Gender::FEMALE:            lhs_stream << "Female";
        break;
        default:                throw std::out_of_range( "This unit can't be mapped to a string" );
    }
    throw std::out_of_range( " Somethings wrong" );
}