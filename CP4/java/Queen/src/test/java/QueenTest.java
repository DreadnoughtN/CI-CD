import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertTrue;
import org.junit.Test;

public class QueenTest {

    @Test
    public void testIsUnderThreat() {
        Queen queen1 = new Queen(1, 1);
        Queen queen2 = new Queen(1, 8);
        Queen queen3 = new Queen(5, 5);

        assertTrue(queen1.isUnderThreat(queen2));
        assertTrue(queen1.isUnderThreat(queen3));
    }

    @Test
    public void testIsValidPosition() {
        Queen queen1 = new Queen(1, 1);
        Queen queen2 = new Queen(0, 5);
        Queen queen3 = new Queen(9, 4);

        assertTrue(queen1.isValidPosition());
        assertFalse(queen2.isValidPosition());
        assertFalse(queen3.isValidPosition());
    }
}
