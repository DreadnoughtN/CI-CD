#ifndef QUEEN_H
#define QUEEN_H

class Queen {
private:
    int x, y;

public:
    Queen(int x_pos, int y_pos);
    bool isUnderThreat(const Queen& other) const;
    bool isValidPosition() const;
    int getX() const;
    int getY() const;
};

#endif
