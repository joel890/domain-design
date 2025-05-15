#pragma once
#include <string>

class Employee {
private:
    std::string const name;       // Naam van werknemer (kan niet veranderd worden)
    bool busy;                    // Status van werknemer
    bool forkliftCertificate;     // Bezit van certificaat

public:
    // Constructors
    Employee(std::string name, bool forkliftCertificate);

    // Getters
    std::string getName() const;
    bool getBusy() const;
    bool getForkliftCertificate() const;

    // Setters
    void setBusy(bool busy);
    void setForkliftCertificate(bool forkliftcertificate);
};
