/**
 * P8_Task01_InheritanceInJava
 */
public class P8_Task01_InheritanceInJava {

    public static void main(String[] args) {
        Mammal b = new Mammal();
        b.print();
        b.print2();
    }
}

class Animal
{
    public void print() {
        System.out.println("Inside A");
    }
}

class Mammal extends Animal
{
    public void print2() {
        System.out.println("Inside B");
    }
}
