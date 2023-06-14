// package unit04;
import java.math.*;

import java.awt.FlowLayout;

import javax.swing.JFrame;
import javax.swing.JScrollBar;

public class P15_JScrollBar_GUI {
	public static void main(String[] args) {
		JScrollBar_GUI jsg = new JScrollBar_GUI();

	}
}

class JScrollBar_GUI extends JFrame {

	JScrollBar js;

	JScrollBar_GUI() {
		js = new JScrollBar();
		add(js);

		setLayout(new FlowLayout());
		setVisible(true);
		setSize(400, 400);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}

}