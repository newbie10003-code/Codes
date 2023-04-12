public class polymorphismInJava {
    public static void main(String[] args) {
        CBA obj = new CBA();
        obj.add(4, 5);
    }
}

class ABC {
    ABC() {
        System.out.println("Inside The Constructor of Class ABC");
    }

    void add(int a, int b, int c) {
        int X = a + b + c;
        System.out.println("Inside the Method1 of Class ABC" + ":" + X);
    }

    void add(int a, int b) {
        int X = a + b;
        System.out.println("Inside the Method2 of Class ABC" + ":" + X);
    }
}

class CBA extends ABC {
    CBA() {
        System.out.println("Inside the Constructor of Class CBA");
    }

    void add(int a, int b) {
        int X = a + b + 50;
        System.out.println("Inside the Method of Class CBA" + ":" + X);
    }
}