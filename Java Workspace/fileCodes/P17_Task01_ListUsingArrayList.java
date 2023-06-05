import java.util.ArrayList;
import java.util.List;

public class P17_Task01_ListUsingArrayList {

	public static void main(String[] args) {
		List<Integer>l1=new ArrayList<Integer>();
		l1.add(0,1);//adds 1 at 0 index
		l1.add(1,2);//adds 2 at 1 index
		l1.add(2,2);
		l1.add(3,null);
		l1.add(4,null);
		System.out.println(l1);
		
		List<Integer>l2=new ArrayList<Integer>();
		l2.add(3);
		l2.add(4);
		l2.add(5);
		System.out.println(l2);
		
		l1.addAll(5,l2);
		System.out.println(l1);
		
		l1.add(5,2);
		System.out.println(l1);
		
		l1.remove(2);
		System.out.println(l1);
		System.out.println(l1.get(3));
		l1.set(1,7);
		System.out.println(l1);
	
	}

}
