#pragma once
#ifndef ROLODEX_H
#define ROLODEX_H

#include "Card.h"
#include <list>

class Rolodex {
private:
    std::list<Card> cards;
    std::list<Card>::iterator currentCard;

public:
    Rolodex();

    void add(Card& card);
    Card remove();
    const Card& getCurrentCard() const;
    Card flip();
    bool search(const std::string& lastName, const std::string& firstName);
    void show(std::ostream& os) const;
};

#endif // ROLODEX_H
