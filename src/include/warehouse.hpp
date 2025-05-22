#include <array>
#include <vector>
#include "employee.hpp"
#include "shelf.hpp"


class Warehouse{
public:
    // Attribute
    std::vector <Employee> Employees; // Een vector vol met employees
    std::vector <Shelf> Shelves;      // Een vector vol met shelves

    // Constructor
    Warehouse();                      // Maakt een leeg Warehouse aan

    // Adders
    void addEmployee(Employee employee);
    void addShelf(Shelf shelf);

    // Mutate values
    bool rearrangeShelf(Shelf& shelf);
    bool pickItems(const std::string itemName, int itemCount);

};