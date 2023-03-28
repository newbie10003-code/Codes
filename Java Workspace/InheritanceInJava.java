/**
 * InheritanceInJava
 */
public class InheritanceInJava {

    public static void main(String[] args) {
        Three g = new Three();
        g.method1();
        g.method2();
        g.method1();
        g.method3();
        Two two = new Two(1, 2, 2);

        D obj = new D(2);
        obj.method4();
    }
}

class One
{
    int a;
    One()
    {
        System.out.println("One Constructor 1P");
    }
    One(int y, int z)
    {
        System.out.println("One constructor with 2P");
    }
    public void method1()
    {
        System.out.println("First Method from class one");
    }
}

class Two extends One
{
    int b;
    Two(int x, int y, int z)
    {
        b = x;
        System.out.println("Two");
    }
    public void method2()
    {
        System.out.println("Second Method");
    }
}

class Three extends Two
{
    int c;
    Three()
    {
        super(1, 2, 3);
        System.out.println("Three Constructor");
    }
    Three(int x, int y, int z)
    {
        super(x, y, z);
        c = x;
        System.out.println("Three");
    }
    public void method3()
    {
        System.out.println("ThirdMethod");
    }
}