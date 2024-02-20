#include <iostream>
#include "queen.h"

int main(int argc, char *argv[]) {
    if (argc != 7) {
        std::cerr << "Usage: " << argv[0] << " x1 y1 x2 y2 x3 y3" << std::endl;
        return 1;
    }

    int x1 = std::atoi(argv[1]);
    int y1 = std::atoi(argv[2]);
    int x2 = std::atoi(argv[3]);
    int y2 = std::atoi(argv[4]);
    int x3 = std::atoi(argv[5]);
    int y3 = std::atoi(argv[6]);

    Queen queen1(x1, y1);
    Queen queen2(x2, y2);
    Queen queen3(x3, y3);

    if (!queen1.isValidPosition() || !queen2.isValidPosition() || !queen3.isValidPosition()) {
        std::cerr << "Incorrect input" << std::endl;
        return 1;
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
