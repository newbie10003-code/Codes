// package unit04;

import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

public class P15_AddTwoNumbers_GUI {

	public static void main(String[] args) {
		AddNumbers obj = new AddNumbers();

	}

}

class AddNumbers extends JFrame {

	JTextField t1;
	JTextField t2;
	JLabel l;
	JButton b;

	public AddNumbers() {
		t1 = new JTextField(20);// it is a text field so we have to fetch integer from it using parse function
		t2 = new JTextField(20);

		l = new JLabel("Result");
		b = new JButton("Calculate");

		add(t1);
		add(t2);
		add(b);
		add(l);

		// ActionListener

		ActionListener al = new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				int num1 = Integer.parseInt(t1.getText());
				int num2 = Integer.parseInt(t2.getText());

				Integer sum = num1 + num2;

				l.setText(sum.toString());// toString works on wrapper class
			}
		};

		b.addActionListener(al);// bind calulate button with action class
		setLayout(new FlowLayout());
		setVisible(true);
		setSize(400, 400);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
}