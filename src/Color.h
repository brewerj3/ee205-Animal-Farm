///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  animal_farm_3 - EE 205 - Spr 2022
///
/// @file Color.h
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   14_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include <iostream>

enum class Color{ UNKNOWN_COLOR, BLACK, BROWN, WHITE, RED, BLUE, GINGER, CREAM, CINNAMON, CALICO };

std::ostream& operator<<( std::ostream& lhs_stream, const Color& rhs_Color );