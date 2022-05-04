///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  animal_farm_3 - EE 205 - Spr 2022
///
/// @file SinglyLinkedList.h
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   15_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include "Node.h"
#include "List.h"

/// A singlyLinkedList that inherits from List
class SinglyLinkedList : public List {
public:
    //Constructor
    /// Make a SinglyLinkedList object
    SinglyLinkedList();

    //List handling
    void push_front( Node* newNode );                       ///< Insert a newNode to the front of the Linked List
    Node* pop_front() noexcept override;                    ///< Remove the first node in the list and return it
    void insert_after( Node* currentNode, Node* newNode );  ///< Insert a Node after the given Node
    void dump() const noexcept override;                    ///< Dump the contents of the list
    bool validate() const noexcept override;                ///< validate the Linked List

};