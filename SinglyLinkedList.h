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

class SinglyLinkedList : public List {
public:
    //Constructor
    SinglyLinkedList();

    //List handling
    void push_front( Node* newNode );
    Node* pop_front() noexcept override;
    void insert_after( Node* currentNode, Node* newNode );
    void dump() const noexcept override;
    bool validate() const noexcept override;

};