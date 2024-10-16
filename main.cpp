#include <iostream>
#include <string>
#include "Card.h"
#include "Rolodex.h"

int main() {
    Rolodex rolodex;

    // Initializing with test data
    Card card1("Tony", "Hansen", "Writer", "12 E. St. NY, NY 33333", "555-9999");
    Card card2("Jon", "Smyth", "Computer Hardware", "CMU Computer Services Pittsburgh, PA", "555-1324");
    Card card3("Alonza", "Heard", "Mechanic", "123 Anyplace Ave Malden, MA", "555-5678");
    Card card4("Jen", "Reyes", "Graphic artist", "325 Oak Rd Wilmington, MA", "555-4950");
    Card card5("Alan", "Lupine", "Vet", "1 Bigelow Ave. Lawrence, MA", "555-7654");
    Card card6("Jewel", "Proverb", "Landscaper", "34 Washington St. Waltham, MA", "555-3333");
    Card card7("Paul", "Revere", "Radical Revolutionary", "45 Commonwealth Ave. Boston, MA", "555-1776");
    Card card8("Adolf", "Coors", "Beer Manufacturer", "Boston MA", "555-2337");
    Card card9("Seymour", "Papert", "Lego Professor", "MIT", "555-1111");
    Card card10("Fred", "Milton", "Sales", "12 Freedom Way Nashua, NH", "555-9981");

    rolodex.add(card1);
    rolodex.add(card2);
    rolodex.add(card3);
    rolodex.add(card4);
    rolodex.add(card5);
    rolodex.add(card6);
    rolodex.add(card7);
    rolodex.add(card8);
    rolodex.add(card9);
    rolodex.add(card10);

    // Test Steps
    std::cout << "List the rolodex:\n";
    rolodex.show(std::cout);

    std::cout << "\nSearch for Alonza Heard:\n";
    if (rolodex.search("Heard", "Alonza")) {
        std::cout << "Found Alonza Heard:\n";
        rolodex.getCurrentCard().show(std::cout);
    }
    else {
        std::cout << "Alonza Heard not found.\n";
    }

    std::cout << "\nView the current card:\n";
    rolodex.getCurrentCard().show(std::cout);

    std::cout << "\nFlip to the next card:\n";
    rolodex.flip().show(std::cout);

    std::cout << "\nSearch for Jon Smyth:\n";
    if (rolodex.search("Smyth", "Jon")) {
        std::cout << "Found Jon Smyth:\n";
        rolodex.getCurrentCard().show(std::cout);
    }
    else {
        std::cout << "Jon Smyth not found.\n";
    }

    std::cout << "\nRemove Jon Smyth:\n";
    rolodex.remove();
    std::cout << "View the current card:\n";
    rolodex.getCurrentCard().show(std::cout);

    std::cout << "\nAdd Matthew Williams:\n";
    Card matthewCard("Matthew", "Williams", "Teacher", "69 Main St, Acton, MA", "555-9330");
    rolodex.add(matthewCard);
    std::cout << "View the current card:\n";
    rolodex.getCurrentCard().show(std::cout);

    std::cout << "\nFlip to the next card:\n";
    rolodex.flip().show(std::cout);

    std::cout << "\nRemove Adolf Coors:\n";
    rolodex.remove();
    std::cout << "View the current card:\n";
    rolodex.getCurrentCard().show(std::cout);

    std::cout << "\nAdd Jim Butler:\n";
    Card jimCard("Jim", "Butler", "Contractor", "33 Cedar Lane, Concord, MA", "555-8535");
    rolodex.add(jimCard);
    std::cout << "View the current card:\n";
    rolodex.getCurrentCard().show(std::cout);

    std::cout << "\nSearch for Jewel Proverb:\n";
    if (rolodex.search("Proverb", "Jewel")) {
        std::cout << "Found Jewel Proverb:\n";
        rolodex.getCurrentCard().show(std::cout);
    }
    else {
        std::cout << "Jewel Proverb not found.\n";
    }

    std::cout << "\nRemove Jewel Proverb:\n";
    rolodex.remove();
    std::cout << "View the current card:\n";
    rolodex.getCurrentCard().show(std::cout);

    std::cout << "\nAdd another Jim Butler:\n";
    Card jimCard2("Jim", "Butler", "Consultant", "22 Minuteman St, Lexington, MA", "555-4422");
    rolodex.add(jimCard2);

    std::cout << "\nAdd Dan Butler:\n";
    Card danCard("Dan", "Butler", "Chauffeur", "68 Willow St, Westford, MA", "555-8493");
    rolodex.add(danCard);

    std::cout << "\nList the rolodex:\n";
    rolodex.show(std::cout);

    return 0;
}
