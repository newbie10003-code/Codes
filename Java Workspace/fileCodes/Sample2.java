import java.awt.*;

import javax.swing.*;

public class Sample2 {

	public static void main(String[] args) {
		Jtable_GUI obj = new Jtable_GUI();
	}
}

class Jtable_GUI extends JFrame {
	JTable jt;

	Jtable_GUI() {
		String data[][] = { { "101", "Amit", "670000" }, { "102", "Jai", "780000" }, { "101", "Sachin", "70000" } };

		String column[] = { "ID", "NAME", "SALARY" };

		jt = new JTable(data, column);
		// jt.setBounds(30 , 40 , 200 , 300);
		JScrollPane sp = new JScrollPane(jt);
		

		// add(jt);
		add(sp);

		setLayout(new FlowLayout());
		setVisible(true);
		setSize(400, 400);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
}