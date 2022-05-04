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

#pragma once

#include <iostream>

/// Enum class containing the Genders a animal can have
enum class Gender{UNKNOWN_GENDER =0, MALE, FEMALE};

/// When outputting output the Names of the gender enum class
std::ostream& operator<<( std::ostream& lhs_stream, const Gender& rhs_gender );