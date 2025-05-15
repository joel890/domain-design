#include <iostream>
#include "pallet.hpp"


// Constructors
Pallet::Pallet(std::string itemName, int itemCapacity, int itemCount):
    itemName(itemName), itemCount(itemCount), itemCapacity(itemCapacity) {}
Pallet::Pallet() : itemName(""), itemCount(0), itemCapacity(0) {}

// Getters
std::string Pallet::getItemName() const {
    return itemName;
}
int Pallet::getItemCount() const {
    return itemCount;
}
int Pallet::getRemainingSpace() const {
    return itemCapacity - itemCount;
}

// Mutating values
bool Pallet::reallocateEmptyPallet(std::string itemName, int itemCapacity) {
    if (isEmpty()) { // Check eerst of de pallet leeg
        this->itemName = itemName;
        this->itemCapacity = itemCapacity;
        return true;
    }
    std::cout << "Pallet is niet leeg\n"; // geef foutmelding
    return false;
}
bool Pallet::takeOne() {
    if (isEmpty()) { // Check of de pallet nog items heeft
        std::cout << "Kan niet plukken van een kale kip\n";
        return false;
    }
    itemCount --; // Verwijder 1 item.
    return true;
}
bool Pallet::putOne() {
    if (isFull()) { // Check of de pallet al vol is
        std::cout << "Hoho, Pallet is vol\n";
        return false;
    }
    itemCount ++; // Add 1 item
    return true;
}

// IContainer gebruiker
bool Pallet::isEmpty() const {
    return itemCount == 0;
}

bool Pallet::isFull() const {
    return itemCount == itemCapacity;
}
