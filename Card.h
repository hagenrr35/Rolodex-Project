#pragma once
#ifndef CARD_H
#define CARD_H

#include <string>
#include <iostream>

class Card {
private:
    std::string firstName;
    std::string lastName;
    std::string occupation;
    std::string address;
    std::string phoneNumber;

public:
    Card(const std::string& firstName, const std::string& lastName, const std::string& occupation,
        const std::string& address, const std::string& phoneNumber);

    // Getters and Setters
    const std::string& getFirstName() const;
    const std::string& getLastName() const;
    const std::string& getOccupation() const;
    const std::string& getAddress() const;
    const std::string& getPhoneNumber() const;
    void setFirstName(const std::string& firstName);
    void setLastName(const std::string& lastName);
    void setOccupation(const std::string& occupation);
    void setAddress(const std::string& address);
    void setPhoneNumber(const std::string& phoneNumber);

    // Display the card
    void show(std::ostream& os) const;
};

#endif // CARD_H
