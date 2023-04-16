public class superKeyword {
    public static void main(String[] args) {
        A a = new A();
        B b = new B();
        b.display();
        b.display2();
    }
}

interface blueprint
{
    void display();
    int i = 1;
};

class A implements blueprint
{
    protected final int j = 10;
    // int i = 12;
    public void display()
    {
        System.out.println("The value of J is: " + i + " " +j);
    }
};

class B extends A
{
    void display2()
    {
        System.out.println("The value of j is: " + j);
    }
}