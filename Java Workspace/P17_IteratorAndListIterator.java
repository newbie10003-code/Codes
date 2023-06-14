// package unit04;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.ListIterator;

/* We have 2 iterators in Java:
 	* Iterator: next(), hasNext(), remove();
 	* ListIterator: Iterator + previous(), hasPrevious(), access next and previous index;
 * */
public class P17_IteratorAndListIterator {
	public static void main(String[] args) {

		//iterator();
		listIterator();

	}

	// static void iterator() {
	// 	System.out.println("######Iterator#####");
	// 	List<Integer> list = new ArrayList<>();
	// 	list.add(1);
	// 	list.add(2);
	// 	list.add(3);
	// 	list.add(4);

	// 	Iterator<Integer> i = list.iterator();
	// 	while (i.hasNext()) {
	// 		System.out.println(i.next());
	// 	}

	// 	i.remove();

	// 	i = list.iterator();
	// 	System.out.println("After using iterator.remove()");

	// 	while (i.hasNext()) {
	// 		System.out.println(i.next());
	// 	}
	// }

	public static void listIterator()
	{
		List<Integer> l = new ArrayList<>();
		l.add(1);
		l.add(2);
		l.add(3);
		l.add(4);

		Iterator<Integer> it = l.iterator();
		while (it.hasNext()) {
			// it = Integer.parseInt("2");
			System.out.print(it.next() + " ");
		}
	}
}