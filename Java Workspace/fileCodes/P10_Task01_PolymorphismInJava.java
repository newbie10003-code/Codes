public class P10_Task01_PolymorphismInJava {
    public static void main(String[] args) {
        ABC obj = new CBA();
        obj.add(5, 7);
    }
}

class ABC {
    ABC() {
        System.out.println("Inside The Constructor of Class ABC");
    }

    void add(int a, int b, int c) {
        System.out.println("Inside the Method1 of Class ABC" + ":" + (a + b + c));
    }

    // Overloading
    void add(int a, int b) {
        System.out.println("Inside the Method2 of Class ABC" + ":" + (a + b));
    }
}

class CBA extends ABC {
    CBA() {
        System.out.println("Inside the Constructor of Class CBA");
    }

    // overriding
    void add(int a, int b) {
        System.out.println("Inside the Method of Class CBA" + ":" + (a + b + 10));
    }
}
