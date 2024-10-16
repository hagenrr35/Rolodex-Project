#include "Card.h"

Card::Card(const std::string& firstName, const std::string& lastName, const std::string& occupation,
    const std::string& address, const std::string& phoneNumber)
    : firstName(firstName), lastName(lastName), occupation(occupation), address(address), phoneNumber(phoneNumber) {}

const std::string& Card::getFirstName() const {
    return firstName;
}

const std::string& Card::getLastName() const {
    return lastName;
}

const std::string& Card::getOccupation() const {
    return occupation;
}

const std::string& Card::getAddress() const {
    return address;
}

const std::string& Card::getPhoneNumber() const {
    return phoneNumber;
}

void Card::setFirstName(const std::string& firstName) {
    this->firstName = firstName;
}

void Card::setLastName(const std::string& lastName) {
    this->lastName = lastName;
}

void Card::setOccupation(const std::string& occupation) {
    this->occupation = occupation;
}

void Card::setAddress(const std::string& address) {
    this->address = address;
}

void Card::setPhoneNumber(const std::string& phoneNumber) {
    this->phoneNumber = phoneNumber;
}

void Card::show(std::ostream& os) const {
    os << "First Name: " << firstName << "\n";
    os << "Last Name: " << lastName << "\n";
    os << "Occupation: " << occupation << "\n";
    os << "Address: " << address << "\n";
    os << "Phone Number: " << phoneNumber << "\n";
}
