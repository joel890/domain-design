#pragma once
#include <string>
#include "IContainer.hpp"

class Pallet : public IContainer {
private:
    int itemCount;        // hoeveelheid van item
    std::string itemName; // naam van de item
    int itemCapacity;     // maximaal toegestane hoeveelheid item

public:
    // Constructors
    Pallet(std::string itemName, int itemCapacity, int itemCount);
    Pallet(); // lege pallet aanmaken

    // Getters
    std::string getItemName() const;
    int getItemCount() const;
    int getRemainingSpace() const;

    // Mutate values
    bool reallocateEmptyPallet(std::string itemName, int itemCapacity);
    bool takeOne();
    bool putOne();

    // IContainer overrides
    bool isEmpty() const override;
    bool isFull() const override;
};
