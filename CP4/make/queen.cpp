#include "queen.h"
#include <cmath>

Queen::Queen(int x_pos, int y_pos) : x(x_pos), y(y_pos) {}

bool Queen::isUnderThreat(const Queen& other) const {
    return (x == other.x || y == other.y || std::abs(x - other.x) == std::abs(y - other.y));
}

bool Queen::isValidPosition() const {
    return (x >= 1 && x <= 8 && y >= 1 && y <= 8);
}

int Queen::getX() const { return x; }

int Queen::getY() const { return y; }

