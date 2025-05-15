#include <array>
#include "pallet.hpp"

class Shelf: public IContainer{
public:
    // Attribute
    std::array <Pallet,4> pallets; // 1 shelf bestaat uit 4 pallets.

    // Constructor
    Shelf(); // Empty shelf

    // Mutate Values
    bool swapPallet(int slot,int slot2);

    // IContainer override
    bool isEmpty() const override;
    bool isFull() const override;

};