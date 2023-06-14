// package unit04;

import java.util.LinkedHashSet;
import java.util.Set;

/*
 * {set}
 * No Duplicates
 * at most one null element
 * 
 * {linked HashSet}
 * Inside,It uses doubly linkedlist internally
 * Preserve insertion order
 * 
 */
public class P17_Task01_SetUsingLinkedHashset {

	public static void main(String[] args) {
		// set demonstration using hashSet
		Set<String> hashSet = new LinkedHashSet<String>();
		hashSet.add("Sumit");
		hashSet.add("Chauhan");
		hashSet.add("Singh");
		hashSet.add(null);
		hashSet.add("Sumit");
		hashSet.add("sumit");
		hashSet.add(null);
		hashSet.add(null);
		hashSet.add("set");
		System.out.println(hashSet);
		hashSet.remove(null);// not work with index uses element

		Set<Integer> s = new LinkedHashSet<Integer>();
		s.add(1000);
		s.add(10);
		s.add(10);
		s.add(10);
		s.add(13);
		s.add(15);
		s.add(50);

		s.remove(15);

		System.out.println(s);

	}

}
