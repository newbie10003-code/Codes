public class P3_Task_01_CalculatorInJava {
    public static void main(String[] args) {
        Calculator c = new Calculator();
        c.add(4, 20);
        c.sub(53, 43);
        c.mul(234, 2);
        c.div(10, 0);
    }
}

class Calculator {
    public void add(int a, int b) {
        System.out.println("Result of addition: " + (a + b));
    }

    public void sub(int a, int b) {
        System.out.println("Result of subtraction: " + (a - b));
    }

    public void mul(int a, int b) {
        System.out.println("Result of multiplication: " + (a * b));
    }

    public void div(int a, int b) {
        System.out.println("Result of division: " + (a / b));
    }
}
