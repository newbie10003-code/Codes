public class interfaceInJava {
    public static void main(String[] args) {
        Test obj = new Test();
        printable a = new Test();
        a.print();
        obj.print();
    }
}

interface printable
{
    default void print()
    {
        System.out.println("Hello");
    }
}

class Test implements printable
{
    public final void print()
    {
        System.out.println("Hello World");
    }
}