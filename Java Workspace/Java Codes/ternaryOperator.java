import java.math.*;

public class ternaryOperator {
    public static void main(String[] args) {
        int a = 5, b = 10;
        int x = a > b ? add(a, b) : sub(a, b);
        System.out.println(x);
    }

    public static int add(int a, int b) {
        System.out.println(a + b);
        return a + b;
    }

    public static int sub(int a, int b) {
        System.out.println(Math.abs(a - b));
        return Math.abs(a - b);
    }
}