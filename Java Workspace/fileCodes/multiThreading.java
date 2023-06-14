public class multiThreading 
{
    public static void main(String[] args) 
    {
        // myThread r = new myThread();
        Thread obj = new Thread(new myThread());
        obj.start();
        // obj.setDaemon(true);

        System.out.println("Application Started\n");

        for (int i = 0; i < 10; i++) {
            System.out.println("Printing Document - " + (i + 1));
        }

        System.out.println("\nApplication Finished");

        // obj.notifyAll(); 
    }
}

// class myThread extends Thread
// {
//     public void run()
//     {
//         System.out.println("Bunuu's Thread\n");

//         System.out.println("Thread Started\n");

//         for (int i = 0; i < 10; i++) {
//             System.out.println("Printing Sport - " + (i + 1));
//         }

//         // System.out.println(10 / 0);

//         System.out.println("\nThread Finished");
//     }
// }

interface abc
{
    String s = "";
    void add();
}

class myThread implements Runnable, abc
{
    public void run()
    {
        System.out.println("Bunuu's Thread\n");

        System.out.println("Thread Started\n");

        for (int i = 0; i < 10; i++) {
            System.out.println("Printing Sport - " + (i + 1));
        }

        System.out.println("\nThread Finished");
        System.out.println("Hi");
    }

    public void add()
    {
        System.out.println("Adding");
    }
}

// package unit03;

// public class multiThreading {

//     public static void main(String[] args) throws InterruptedException {
//         WebCountClass wcc = new WebCountClass();
//         wcc.webcount();
//         System.out.println(WebCountClass.count);
//         Thread t1 = new Thread(new Runnable() {

//             @Override
//             public void run() {
//                 System.out.println("Hello");
//                 wcc.webcount();

//             }
//         });
//         Thread t2 = new Thread(new Runnable() {
//             public synchronized void run() {
//                 System.out.println("Hiiii");
//                 wcc.webcount();
//             }
//         });
//         t1.start();
//         t2.start();

//         t1.join();
//         t2.join();

//         // main thread
//         System.out.println(Thread.currentThread().getName());
//         System.out.println("Count " + WebCountClass.count);

//     }

// }

// class WebCountClass {
//     public static int count = 0;

//     public void webcount() {
//         for (int i = 0; i < 1000; i++) {
//             count++;
//         }
//     }
// }

// /*
//  * 1000
//  * main
//  * Count 2308
//  * if we use didn't use join method it will make a jump to main thread (made by
//  * jvm and
//  * independent of other thread) and print count value
//  * but if we use join it will lock and will run thread t1 and t2 completely and
//  * then print count
//  * value.
//  * 
//  * we can use synchronized keyword for sequential acces of the code...?
//  * 
//  */