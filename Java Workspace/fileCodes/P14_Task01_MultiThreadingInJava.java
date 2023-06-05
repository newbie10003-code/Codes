import java.util.Iterator;
import java .util.Scanner;
public class P14_Task01_MultiThreadingInJava {
	
	public static void main(String[] args) {
		Thread t1=new Thread(new T1(),"t1");
		Thread t2=new Thread(new T2(),"t2");
		Thread t3=new Thread(new T3(),"t3");
		t1.start();
		t2.start();
		t3.start();
		System.out.println(Thread.currentThread().getName());
	}
}


class C1
{
	void show()
	{
	Scanner sc=new Scanner(System.in);
		System.out.println("Enter the value of a ");
		int a =sc.nextInt();
		System.out.println(a);
		for(int i=0;i<11;i++)
		{
			System.out.println(i+" Hey-1!");
		}
	
	}
}


class C2
{
	void show()
	{
		for(int i=0;i<10;i++)
		{
			System.out.println(i+" Hey-2!");
		}
	}
}


class T1 extends Thread{
	public void run()
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the value of a ");
		int a =sc.nextInt();
		System.out.println(a);
		for(int i=0;i<1000;i++)
		{
			System.out.println(i+" Hey-1!");
		}
		System.out.println("Done with Thread T1 ");
		sc.close();
	}
}

class T2 extends Thread{
	public void run()
	{
		for(int i=0;i<10;i++)
		{
			System.out.println(i+" Hey-2!");
		}
		System.out.println("Done with Thread T2 ");
	}
}

class T3 extends Thread{
	public void run()
	{
		System.out.println("Entering in Thread T3 ");
		try {
			Thread.sleep(1000);
		}
		catch(InterruptedException ie)
		{
			ie.printStackTrace();
		}
		for(int i=0;i<10;i++)
		{
			System.out.println(i+" Hey-3!");
		}
		System.out.println("Done with Thread T3 ");
	}
}
