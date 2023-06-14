import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

/**
 * Sample
 */
public class Sample {
	public static void main(String[] args) {
		List l = new List();
	}
}

class List extends JFrame
{
	JList list;
	JButton b;
	JLabel l, l2;
	List()
	{
		b = new JButton("Get Day");
		l = new JLabel("Select a day");
		l2 = new JLabel();
		String[] days = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
		list = new JList<>(days);

		add(l);
		add(list);
		add(b);
		add(l2);

		ActionListener al = new ActionListener() {
			public void actionPerformed(ActionEvent e)
			{
				String ans = "";
				if(list.getSelectedIndex() != -1)
				{
					ans = list.getSelectedValue().toString();
					// System.out.println(list.getSelectedValue());
					l2.setText(ans);
				}
			}
		};

		b.addActionListener(al);
		setLayout(new FlowLayout());
		setSize(400, 400);
		setVisible(true);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
}