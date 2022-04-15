///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  animal_farm_3 - EE 205 - Spr 2022
///
/// @file Weight.h
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   14_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include <iostream>

class Weight{
public:
    enum UnitOfWeight{ POUND, SLUG, KILOGRAM }; //Pounds and Newtons are measures of force, Kilogram is a measure of Mass

    //Typedef of Weight
    typedef float typeWeight;

    //static constants
    static const float KILOGRAMS_IN_A_SLUG;
    static const float POUNDS_IN_A_KILOGRAM;
    static const float UNKNOWN_WEIGHT;

    static const std::string POUND_LABEL;
    static const std::string SLUG_LABEL;
    static const std::string KILOGRAM_LABEL;

    //Conversion methods
    static float fromSlugToKilogram( float slug ) noexcept;
    static float fromKilogramToSlug( float kilogram ) noexcept;
    static float fromKilogramToPound( float kilogram ) noexcept;
    static float fromPoundToKilogram( float pound ) noexcept;

    //Convert between unit types
    static float convertWeight( float fromWeight, UnitOfWeight fromUnit, UnitOfWeight toUnit ) noexcept;

    //getters
    typeWeight getWeight() const noexcept;
    typeWeight getWeight( UnitOfWeight weightUnit ) const noexcept;
    typeWeight getMaxWeight() const noexcept;
    UnitOfWeight getWeightUnit() const noexcept;

    //setters
    void setWeight(typeWeight newWeight );
    void setWeight( typeWeight newWeight, UnitOfWeight newUnit );
    void setMaxWeight( typeWeight newMaxWeight );

    //bools
    bool isWeightKnown() const noexcept;
    bool hasMaxWeight() const noexcept;
    bool isWeightValid( float weightToValidate ) const noexcept;
    bool validate() const noexcept;

    //Print out from Class
    void dump() const noexcept;

    //Constructors
    explicit Weight() noexcept;
    explicit Weight( typeWeight newWeight );
    explicit Weight( UnitOfWeight newUnitOfWeight ) noexcept;
    explicit Weight( typeWeight newWeight, UnitOfWeight newUnitOfWeight );
    explicit Weight( typeWeight newWeight, typeWeight newMaxWeight );
    explicit Weight( UnitOfWeight newUnitOfWeight, typeWeight newMaxWeight );
    explicit Weight( typeWeight newWeight, UnitOfWeight newUnitOfWeight, typeWeight newMaxWeight );

    //Operators
    bool operator==(const Weight& rhs_Weight ) const ;
    bool operator<(const Weight& rhs_Weight ) const ;
    Weight& operator+=( typeWeight rhs_addToWeight );


private:
    UnitOfWeight unitOfWeight = POUND;
    typeWeight weight {};
    typeWeight maximumWeight {};
    bool bWeightHasMax = false;
    bool bWeightIsKnown = false;
};

std::ostream& operator<<( std::ostream& lhs_stream, Weight::UnitOfWeight rhs_UnitOfWeight );
