#include "employee.hpp"


// Constructor
Employee::Employee(std::string const Name, bool forkliftcertificate):
    name(Name),
    forkliftCertificate(forkliftcertificate),
    busy(false){}

// Getters
std::string Employee::getName() const {
    return name;
}
bool Employee::getBusy() const {
    return busy;
}
bool Employee::getForkliftCertificate() const {
    return forkliftCertificate;
}

// Setters
void Employee::setBusy(bool busy) {
    this->busy = busy;
}
void Employee::setForkliftCertificate(bool forkliftcertificate) {
    this->forkliftCertificate = forkliftcertificate;
}