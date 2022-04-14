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
        case Gender::UNKNOWN_GENDER:    return lhs_stream << "Unknown gender";
        case Gender::MALE:              return lhs_stream << "Male";
        case Gender::FEMALE:            return lhs_stream << "Female";
        default:                throw std::out_of_range( "This unit can't be mapped to a string" );
    }

}