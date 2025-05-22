#include <iostream>
#include "shelf.hpp"


// Constructor
Shelf::Shelf() {}

// Mutate values
bool Shelf::swapPallet(int slot,int slot2){
    if (slot >= 0 && slot < pallets.size() &&
        slot2 >= 0 && slot2 < pallets.size() &&
        slot != slot2){ // Check of slot/slot2 een logische index heeft en ze niet gelijk zijn aan elkaar.

        Pallet copyPallet = pallets[slot];
        pallets[slot] = pallets[slot2];
        pallets[slot2] = copyPallet;
        std::cout<<"Pallets zijn omgewisseld!\n";
        return true;
    }
    std::cout<<"Pallets kunnen niet worden omgewisseld.\n";
    return false;
}

// IContainer gebruiker
bool Shelf::isEmpty() const {
    for (const Pallet& pallet : pallets) {
        if (!pallet.isEmpty()) {
            std::cout<<"Shelf is niet leeg\n";
            return false;
        }
    }
    std::cout<<"Shelf is leeg!\n";
    return true;
}

bool Shelf::isFull() const {
    for (const Pallet& pallet : pallets) {
        if (!pallet.isFull()) {
            std::cout<<"Shelf is niet vol\n";
            return false;
        }
    }
    std::cout<<"Shelf is vol!\n";
    return true;
}
