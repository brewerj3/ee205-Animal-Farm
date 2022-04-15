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
    return false;
}

unsigned int List::size() const noexcept {
    return 0;
}

bool List::isSorted() const noexcept {
    return false; //the list will not be sorted.
}

Node *List::getFirstInList() const noexcept {
    return head;
}

void List::deleteAllNodes() noexcept {
    while( head != nullptr ) {
        Node* nodeToDelete = head;
        head = head->next;
        delete nodeToDelete;
        currentCount--;
    }
}
