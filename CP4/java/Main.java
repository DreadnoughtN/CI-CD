import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int x1, y1, x2, y2, x3, y3;

        System.out.print("Enter coordinates for Queen 1 (1 <= x,y <= 8): ");
        x1 = scanner.nextInt();
        y1 = scanner.nextInt();
        Queen queen1 = new Queen(x1, y1);
        if (!queen1.isValidPosition()) {
            System.out.println("Invalid input for Queen 1");
            return;
        }

        System.out.print("Enter coordinates for Queen 2 (1 <= x,y <= 8): ");
        x2 = scanner.nextInt();
        y2 = scanner.nextInt();
        Queen queen2 = new Queen(x2, y2);
        if (!queen2.isValidPosition()) {
            System.out.println("Invalid input for Queen 2");
            return;
        }

        System.out.print("Enter coordinates for Queen 3 (1 <= x,y <= 8): ");
        x3 = scanner.nextInt();
        y3 = scanner.nextInt();
        Queen queen3 = new Queen(x3, y3);
        if (!queen3.isValidPosition()) {
            System.out.println("Invalid input for Queen 3");
            return;
        }

        if (queen1.isUnderThreat(queen2) && queen1.isUnderThreat(queen3) && queen2.isUnderThreat(queen3)) {
            System.out.println("All 3 queens are under threat");
        } else if (queen1.isUnderThreat(queen2)) {
            System.out.println("Queens 1 and 2 are under threat");
        } else if (queen2.isUnderThreat(queen3)) {
            System.out.println("Queens 2 and 3 are under threat");
        } else if (queen1.isUnderThreat(queen3)) {
            System.out.println("Queens 1 and 3 are under threat");
        } else {
            System.out.println("No threats");
        }
    }
}
