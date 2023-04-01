import java.lang.Math.*;
public class StaticImport {
    public static void main(String[] args) {
        A a = new B();
        a.hi();
    }
}
class A{
    void hi(){
        System.out.println("HI");
    }
}
class B extends A{
    B(){
        System.out.println("B construct");
    }
}