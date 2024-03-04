#include <iostream>
#include "queen.h"

int main() {
    int x1, y1, x2, y2, x3, y3;

    std::cout << "Enter coordinates for Queen 1 (1 <= x,y <= 8): ";
    std::cin >> x1 >> y1;
    Queen queen1(x1, y1);
    if (!queen1.isValidPosition()) {
        std::cout << "Invalid input for Queen 1";
        return 0;
    }

    std::cout << "Enter coordinates for Queen 2 (1 <= x,y <= 8): ";
    std::cin >> x2 >> y2;
    Queen queen2(x2, y2);
    if (!queen2.isValidPosition()) {
        std::cout << "Invalid input for Queen 2";
        return 0;
    }



std::cout << "Enter coordinates for Queen 3 (1 <= x,y <= 8): ";
    std::cin >> x3 >> y3;
    Queen queen3(x3, y3);
    if (!queen3.isValidPosition()) {
        std::cout << "Invalid input for Queen 3";
        return 0;
    }

    if (queen1.isUnderThreat(queen2) && queen1.isUnderThreat(queen3) && queen2.isUnderThreat(queen3)) {
        std::cout << "All 3 queens are under threat";
    } else if (queen1.isUnderThreat(queen2)) {
        std::cout << "Queens 1 and 2 are under threat";
    } else if (queen2.isUnderThreat(queen3)) {
        std::cout << "Queens 2 and 3 are under threat";
    } else if (queen1.isUnderThreat(queen3)) {
        std::cout << "Queens 1 and 3 are under threat";
    } else {
        std::cout << "No threats";
    }

    return 0;
}
