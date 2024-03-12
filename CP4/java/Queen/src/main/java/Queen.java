public class Queen {
    private int x;
    private int y;

    public Queen(int x_pos, int y_pos) {
        x = x_pos;
        y = y_pos;
    }

    public boolean isUnderThreat(Queen other) {
        return (x == other.x || y == other.y || Math.abs(x - other.x) == Math.abs(y - other.y));
    }

    public boolean isValidPosition() {
        return (x >= 1 && x <= 8 && y >= 1 && y <= 8);
    }

    public int getX() {
        return x;
    }

    public int getY() {
        return y;
    }
}
