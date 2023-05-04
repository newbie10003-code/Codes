import java.util.Scanner;

public class P14_Task01_MultithreadingInJava {
    public static void main(String[] args) {
        C1 obj = new C1();
        obj.show1();

        C2 obj2 = new C2();
        obj2.show2();
    }
}

class C1 {
    void show1() {
        for (int i = 0; i < 11; i++) {
            System.out.println(i + " - Hey_1!");
        }
    }
}

class C2 {
    void show2() {
        // try
        // {
        // wait(10000);
        // }
        // catch (InterruptedException e)
        // {
        // e.printStackTrace();
        // }

        // for (int i = 0; i < 10; i++) {
        // System.out.println(i + " - Hey_2!");
        // }

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the value of a: ");
        int a = sc.nextInt();
        System.out.println("Entered value of a: " + a);
    }
}