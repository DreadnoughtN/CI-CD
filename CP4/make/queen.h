#ifndef QUEEN_H
#define QUEEN_H

class Queen {
private:
    int x;
    int y;

public:
    Queen(int x_pos = 0, int y_pos = 0);
    bool isUnderThreat(const Queen& other) const;
    bool isValidPosition() const;
    int getX() const;
    int getY() const;
};

#endif // QUEEN_H
