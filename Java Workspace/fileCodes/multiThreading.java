import org.w3c.dom.stylesheets.DocumentStyle;

public class multiThreading 
{
    public static void main(String[] args) 
    {
        
        System.out.println("Application Started\n");
        
        for (int i = 0; i < 10; i++) {
            System.out.println("Printing Document - " + (i + 1));
        }
        
        System.out.println("\nApplication Finished");
        
        Thread obj = new Thread(new myThread());
        obj.start();
        obj.notifyAll();
    }
}

// class myThread extends Thread
// {
//     public void run()
//     {
//         System.out.println("Bunuu's Thread");
//     }
// }

class myThread implements Runnable
{
    public void run()
    {
        System.out.println("Bunuu's Thread\n");

        System.out.println("Thread Started\n");
        
        for (int i = 0; i < 10; i++) {
            System.out.println("Printing Sport - " + (i + 1));
        }
        
        System.out.println("\nThread Finished");
    }
}