import java.util.*;

public class P8_Task01_InheritanceInJava {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Mammal obj = new Mammal();
        // obj.print2();
        // obj.print();
    }
}

class Animal {
    Animal() {
        System.out.println("Inside Animal Constructor");
    }

    int val = 10;

    void print2() {
        System.out.println("Inside Animal Class");
    }

    void message() {
        System.out.println("I am an animal");
    }
}

class Mammal extends Animal {
    Mammal() {
        // Using super to call Constructor of base class;
        super(); // will give error if default constructor is not present
        // super(1,2); // will give error if parameterized constructor is not present
        System.out.println("Inside Mammal Constructor");
    }

    int val = 5;

    void print() {
        System.out.println("Inside Mammal Class");
        System.out.println("Without super: val= " + val);
        // Using super keyword with variable to print value of base class
        System.out.println("With super: val= " + super.val);
        // Using super keyword with method to call function of base class
        // Whenever a parent and child class have the same-named methods then to resolve
        // ambiguity we use the super keyword.
        super.message();
        message();
    }

    void message() {
        System.out.println("I am a mammal");
    }
}
