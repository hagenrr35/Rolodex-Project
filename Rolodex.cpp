#include "Rolodex.h"

Rolodex::Rolodex() {
    currentCard = cards.begin();
}

void Rolodex::add(Card& card) {
    auto it = cards.begin();
    while (it != cards.end() && (it->getLastName() + it->getFirstName()) < (card.getLastName() + card.getFirstName())) {
        ++it;
    }
    currentCard = cards.insert(it, card);
}

Card Rolodex::remove() {
    auto it = currentCard;
    if (it == cards.end()) {
        it = cards.begin();
    }
    else {
        ++it;
    }

    if (it == cards.end()) {
        it = cards.begin();
    }

    Card removedCard = *currentCard;
    currentCard = cards.erase(currentCard);

    // Check if the currentCard iterator is pointing to the end of the list after erasing
    if (currentCard == cards.end()) {
        currentCard = cards.begin();
    }

    return removedCard;
}


const Card& Rolodex::getCurrentCard() const {
    return *currentCard;
}

Card Rolodex::flip() {
    ++currentCard;
    if (currentCard == cards.end()) {
        currentCard = cards.begin();
    }
    return *currentCard;
}

bool Rolodex::search(const std::string& lastName, const std::string& firstName) {
    for (auto it = cards.begin(); it != cards.end(); ++it) {
        if (it->getLastName() == lastName && it->getFirstName() == firstName) {
            currentCard = it;
            return true;
        }
    }
    return false;
}

void Rolodex::show(std::ostream& os) const {
    for (const auto& card : cards) {
        card.show(os);
        os << "---------------------\n";
    }
}
