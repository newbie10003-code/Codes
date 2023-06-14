// package unit04;

import java.util.ArrayList;
import java.util.List;

/*
 * Don't need to give size of the array at start
 * no index out of bound exception if used properly
 * 
 * Duplicates are allowed
 * Multiple null values are allowed
 * Preserve insertion order
 */
public class P17_Task01_ListUsingArrayList {

	public static void main(String[] args) {
		List<Integer> l1 = new ArrayList<Integer>();
		l1.add(0, 1);// adds 1 at 0 index
		l1.add(1, 2);// adds 2 at 1 index
		l1.add(2, 2);
		l1.add(3, null);
		l1.add(4, null);
		System.out.println(l1);

		/*
		 * Creating another array List
		 * List<Integer>is an Interface while ArrayList<Integer>is a class
		 * List<Integer> its object cannot be created
		 */

		List<Integer> l2 = new ArrayList<Integer>();
		l2.add(3);
		l2.add(4);
		l2.add(5);
		System.out.println(l2);

		// will add list l2 from index 5
		l1.addAll(5, l2);
		System.out.println(l1);

		// add 2 at 5th index (add new element in array list at particular location)
		// first arguemment ==> location
		// second arguemment ==> value
		l1.add(5, 2);
		System.out.println(l1);

		// remove index from l1
		l1.remove(2);
		System.out.println(l1);

		// Prints element at index 3
		System.out.println(l1.get(3));

		// Replace 0 th element with 5
		l1.set(1, 7);
		System.out.println(l1);

	}

}
