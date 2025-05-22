#include <iostream>
#include "warehouse.hpp"

// Constructor
Warehouse::Warehouse() {}

// Add employee and shelves to the vector.
void Warehouse::addEmployee(Employee employee) {
    Employees.push_back(employee);
}
void Warehouse::addShelf(Shelf shelf) {
    Shelves.push_back(shelf);
}

// Mutate values
bool Warehouse::rearrangeShelf(Shelf& shelf) {
    for (Employee &employee : Employees) {
        if (!employee.getBusy() && employee.getForkliftCertificate()) { //Check of employee vrij is en certificaat heeft

            for (size_t i = 0; i < shelf.pallets.size(); ++i) {
                for (size_t j = i + 1; j < shelf.pallets.size(); ++j) {
                    if (shelf.pallets[i].getItemCount() > shelf.pallets[j].getItemCount()) {
                        std::swap(shelf.pallets[i], shelf.pallets[j]); // Als 1 pallet kleiner is dan de ander dan wordt dat de nieuwe 'kleinste' waarde.
                    }
                }
            }
            std::cout << "Werknemer heeft de schap gesorteerd\n";
            return true;
        }
    }
    std::cout << "Geen werknemer gevonden om schap te sorteren.\n";
    return false;
}

// Probeert items op te halen van alle pallets
bool Warehouse::pickItems(const std::string itemName, int itemCount) {
    for (Shelf &shelf : Shelves){
        for(Pallet &pallet : shelf.pallets){
            if(pallet.getItemName() == itemName && pallet.getRemainingSpace() < itemCount)
                for (int i = itemCount; i > 0 ; --i) {
                    pallet.takeOne();
                }
        }
        std::cout<<"item aantal gepicked!\n";
        return true;
    }
    std::cout<<"item niet gevonden of itemcount klopt niet.\n";
    return false;
}
