///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  animal_farm_3 - EE 205 - Spr 2022
///
/// @file Weight.cpp
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   14_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cassert>
#include <iomanip>

#include "Weight.h"
#include "config.h"

const Weight::typeWeight Weight::KILOGRAMS_IN_A_SLUG = 14.59390 ;
const Weight::typeWeight Weight::POUNDS_IN_A_KILOGRAM = 2.20462 ;
const Weight::typeWeight Weight::UNKNOWN_WEIGHT = -1;

const std::string Weight::POUND_LABEL = "Pound";
const std::string Weight::SLUG_LABEL = "Slug";
const std::string Weight::KILOGRAM_LABEL = "Kilogram";


Weight::typeWeight Weight::fromSlugToKilogram(typeWeight slug) noexcept {
    return slug * KILOGRAMS_IN_A_SLUG;
}

Weight::typeWeight Weight::fromKilogramToSlug(typeWeight kilogram) noexcept {
    return kilogram / KILOGRAMS_IN_A_SLUG;
}

Weight::typeWeight Weight::fromKilogramToPound(typeWeight kilogram) noexcept {
    return kilogram / POUNDS_IN_A_KILOGRAM;
}

Weight::typeWeight Weight::fromPoundToKilogram(typeWeight pound) noexcept {
    return pound * POUNDS_IN_A_KILOGRAM;
}

Weight::typeWeight Weight::convertWeight(typeWeight fromWeight, Weight::UnitOfWeight fromUnit, Weight::UnitOfWeight toUnit) noexcept {
    typeWeight commonWeight;
    switch ( fromUnit ) {
        case KILOGRAM   : commonWeight = fromWeight;
            break;
        case SLUG       : commonWeight = fromSlugToKilogram( fromWeight );
            break;
        case POUND      : commonWeight = fromPoundToKilogram( fromWeight );
            break;
    }
    typeWeight toWeight;
    switch ( toUnit ) {
        case KILOGRAM   : toWeight = commonWeight;
            break;
        case SLUG       : toWeight = fromKilogramToSlug( commonWeight );
            break;
        case POUND      : toWeight = fromKilogramToPound( commonWeight );
            break;
    }
    return toWeight;
}

Weight::typeWeight Weight::getWeight() const noexcept {
    return weight;
}

Weight::typeWeight Weight::getWeight(Weight::UnitOfWeight weightUnit) const noexcept {
    return convertWeight(getWeight(), getWeightUnit(), weightUnit );
}

Weight::typeWeight Weight::getMaxWeight() const noexcept {
    return maximumWeight;
}

Weight::UnitOfWeight Weight::getWeightUnit() const noexcept {
    return unitOfWeight;
}

void Weight::setWeight( typeWeight newWeight ) {
    if( !isWeightValid( newWeight ) ){
        std::cout << "Invalid Weight when trying to set weight" << std::endl;
        return;
    }

    weight = newWeight;
    bWeightIsKnown = true;
}

void Weight::setWeight(typeWeight newWeight, Weight::UnitOfWeight newUnit) {
    if( !isWeightValid( newWeight ) ){
        std::cout << "Invalid Weight when trying to set weight" << std::endl;
        return;
    }
    weight = newWeight;
    bWeightIsKnown = true;
    unitOfWeight = newUnit;
}

void Weight::setMaxWeight(Weight::typeWeight newMaxWeight) {
    if(newMaxWeight <= 0 ) {
        std::cout << PROGRAM_NAME << ": Invalid Max Weight" << std::endl;
        return;
    }
    maximumWeight = newMaxWeight;
    bWeightHasMax = true;
}

bool Weight::isWeightKnown() const noexcept {
    return bWeightIsKnown;
}

bool Weight::hasMaxWeight() const noexcept {
    return bWeightHasMax;
}

bool Weight::isWeightValid(typeWeight weightToValidate) const noexcept {
    if( hasMaxWeight() && (weightToValidate > maximumWeight ) ) {
        std::cout << PROGRAM_NAME << ": Weight is more the maximum weight" << std::endl;
        return false;
    }
    if( weightToValidate == -1 ) {
        std::cout << PROGRAM_NAME << ": Weight is UNKNOWN WEIGHT" << std::endl;
        return true;
    }
    if( weightToValidate <= 0 ) {
        std::cout << PROGRAM_NAME ": Weight cannot be less than or equal to 0" << std::endl;
        return false;
    }
    return true;
}

bool Weight::validate() const noexcept {
    if( !isWeightValid( Weight::weight) ) {
        return false;
    }
    return true; //@TODO Make this actually useful
}

void Weight::dump() const noexcept {
    assert(validate());
    std::string className = "Animal";
    std::cout << std::setw(8) << (className) << std::setw(20) << "weight" << Weight::weight << " out of "<< Weight::maximumWeight << " " << Weight::unitOfWeight << std::endl;
}

Weight::Weight() noexcept {
    weight = UNKNOWN_WEIGHT;
}

Weight::Weight(typeWeight newWeight) {
    setWeight( newWeight );
}

Weight::Weight(Weight::UnitOfWeight newUnitOfWeight) noexcept {
    unitOfWeight = newUnitOfWeight;
}

Weight::Weight(typeWeight newWeight, Weight::UnitOfWeight newUnitOfWeight) {
    setWeight( newWeight, newUnitOfWeight );
}

Weight::Weight(typeWeight newWeight, typeWeight newMaxWeight) {
    setWeight( newWeight );
    if( newMaxWeight <= 0 ) {
        return;
    }
    maximumWeight = newMaxWeight;
    bWeightHasMax = true;
}

Weight::Weight(Weight::UnitOfWeight newUnitOfWeight, typeWeight newMaxWeight) {
    unitOfWeight = newUnitOfWeight;
    if( newMaxWeight <= 0 ) {
        return;
    }
    maximumWeight = newMaxWeight;
    bWeightHasMax = true;
}

Weight::Weight(typeWeight newWeight, Weight::UnitOfWeight newUnitOfWeight, typeWeight newMaxWeight) {
    setWeight( newWeight, newUnitOfWeight );
    if( newMaxWeight <= 0 ) {
        return;
    }
    maximumWeight = newMaxWeight;
    bWeightHasMax = true;
}

bool Weight::operator==(const Weight& rhs_Weight) const {
    float lhs_weight = (bWeightIsKnown) ? getWeight( Weight::POUND ) : 0;
    float rhs_weight = (rhs_Weight.bWeightIsKnown) ? rhs_Weight.getWeight( Weight::POUND ) : 0;
    return lhs_weight == rhs_weight;
}

bool Weight::operator<(const Weight &rhs_Weight) const {
    float lhs_weight = (bWeightIsKnown) ? getWeight( Weight::POUND ) : 0;
    float rhs_weight = (rhs_Weight.bWeightIsKnown) ? rhs_Weight.getWeight( Weight::POUND ) : 0;
    return lhs_weight < rhs_weight;
}

Weight& Weight::operator+=(typeWeight rhs_addToWeight) {
    typeWeight lhs_weight = (bWeightIsKnown) ? getWeight( Weight::POUND ) : 0;
    lhs_weight += rhs_addToWeight;
    setWeight(lhs_weight);
    return *this;
}

/// Output the correct UnitOfWeight when printing to output
std::ostream& operator<<( std::ostream& lhs_stream, const Weight::UnitOfWeight rhs_UnitOfWeight ) {
    switch( rhs_UnitOfWeight ) {
        case Weight::POUND:     lhs_stream << Weight::POUND_LABEL;
        break;
        case Weight::KILOGRAM:  lhs_stream << Weight::KILOGRAM_LABEL;
        break;
        case Weight::SLUG:      lhs_stream << Weight::SLUG_LABEL;
        break;
        default:                throw std::out_of_range( "This unit can't be mapped to a string" );
    }
}