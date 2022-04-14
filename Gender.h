///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  animal_farm_3 - EE 205 - Spr 2022
///
/// @file Gender.h
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   14_Apr_2022
///////////////////////////////////////////////////////////////////////////////
//#ifndef ANIMAL_FARM_3_GENDER_H
//#define ANIMAL_FARM_3_GENDER_H

//#endif //ANIMAL_FARM_3_GENDER_H

#include <iostream>

enum class Gender{UNKNOWN_GENDER =0, MALE, FEMALE};

std::ostream& operator<<( std::ostream& lhs_stream, const Gender& rhs_gender );