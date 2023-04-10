public class calculatorInJava{

    public static void main(String[] args) {
        
        Calculator obj = new Calculator();
        System.out.println(obj.add(4,2));
        System.out.println(obj.multi(5,6));
        System.out.println(obj.sub(3,2));
        System.out.println(obj.divi(11,12));		    
    }
}

class Calculator {

    int add(int a, int b) {
        return (a + b);
    }

    int sub(int a, int b) {
        return (a - b);
    }

    int multi(int a, int b) {
        return (a * b);

    }

    double divi(int a, int b) {
        return (a / b);
    }
}