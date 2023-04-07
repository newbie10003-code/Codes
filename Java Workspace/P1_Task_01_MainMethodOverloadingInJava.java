// package unit01;

public class P1_Task_01_MainMethodOverloadingInJava {

	public static void main(String[] args) 
	{
		System.out.println("Hello Uma !!!");
		Test a = new Test();
		a.add(5, 3);
		main();
	}
	static void main()
	{
		System.out.println("Hello ....this is overloaded main method ");
		Test a = new Test();
		a.add(5, 3);
	}
}

class Test
{
	void add(int a, int b)
	{
		System.out.println(a + b);
	}
}