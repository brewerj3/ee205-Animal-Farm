///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  animal_farm_3 - EE 205 - Spr 2022
///
/// @file List.cpp
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   15_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

#include "List.h"

bool List::empty() const noexcept{

}

bool List::isInList(Node *nodeToCheck) const {
    Node* iterateOverList = head;
    while( iterateOverList != nullptr ) {
        if( iterateOverList == nodeToCheck ) {
            return true;
        }
        iterateOverList = iterateOverList->next;
    }
    if( iterateOverList == nodeToCheck ) {
        return true;
    }
    return false;
}

unsigned int List::size() const noexcept {
    return currentCount;
}

bool List::isListSorted() const noexcept {
    return false; //the list will not be sorted.
}

Node *List::getFirstInList() const noexcept {
    return head;
}

void List::deleteAllNodes() noexcept {
    while( head != nullptr ) {
        Node* nodeToDelete = head; //save location of Node to delete
        head = head->next; //move head to next in list
        delete nodeToDelete; //delete node
        currentCount--; //count down by 1
    }
}
