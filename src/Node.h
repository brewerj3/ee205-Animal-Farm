///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  animal_farm_3 - EE 205 - Spr 2022
///
/// @file Node.h
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   15_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include <iostream>
#include <iomanip>

#include "config.h"

/// A class that contains the Animal Object and pointer to the next Node
class Node{
    friend class List;              ///< List is a Friend
    friend class SinglyLinkedList;  ///< SinglyLinkedList is a Friend

protected:
    Node* next = nullptr;   ///< Points to the next Node

    ///Compares the address of two Nodes
    static bool compareByAddress( const Node* node1, const Node* node2 ) {
        if( node1 < node2 ) {
            return false;
        }
        return true;
    }

public:
    /// Dumps the Node to output
    virtual void dump() const {
        std::cout << std::setw(80) << std::setfill( '=' ) << "" << std::endl;
        std::cout << std::setfill( ' ' );
        std::cout << std::left;
        std::cout << std::boolalpha;
        std::string className = "Node";
        FORMAT( className, "This" ) << this << std::endl;
        FORMAT( className, "Next pointer" ) << next << std::endl;
    }
    /// Checks if the Node is Valid
    virtual bool validate() const noexcept {
        if( next == nullptr ) {
            return true;
        }
        //check for recursion
        if( next == next->next ) {
            std::cout << PROGRAM_NAME << ": Recursion!" << std::endl;
            return false;
        }
        return true;
    }

    virtual bool operator>( const Node& rightSide ) {
        return compareByAddress( this, &(Node&)rightSide );
    }
};