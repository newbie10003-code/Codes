import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

public class P15_Task01_Calculator_GUI {

	public static void main(String[] args) {
		Calculator obj=new Calculator();

	}

}


class Calculator extends JFrame{
	
	JTextField t1;
	JTextField t2;
	JLabel l;
	JButton b1,b2,b3,b4;
	
	public Calculator() {
		t1=new JTextField(20);//it is a text field so we have to fetch integer from it using parse function 
		t2=new JTextField(20);
		
		l=new JLabel("Result");
		
		b1=new JButton("+");
		b2=new JButton("-");
		b3=new JButton("/");
		b4=new JButton("*");
		
		add(t1);
		add(t2);
		add(b1);
		add(b2);
		add(b3);
		add(b4);
		add(l);
		
//		ActionListener
		
		ActionListener al=new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				int num1=Integer.parseInt(t1.getText());
				int num2=Integer.parseInt(t2.getText());
				
				
				if(e.getSource()==b1)
				{
					Integer sum=num1 + num2;
					l.setText(sum.toString());//toString works on wrapper class
				}
				else if(e.getSource()==b2)
				{
					Integer diff=num1 - num2;
					l.setText(diff.toString());//toString works on wrapper class
				}
				else if(e.getSource()==b3)
				{
					Integer div=num1 / num2;
					l.setText(div.toString());//toString works on wrapper class
				}
				else if(e.getSource()==b4)
				{
					Integer mull=num1 * num2;
					l.setText(mull.toString());//toString works on wrapper class
				}
			}
		};
		
		b1.addActionListener(al);//bind calulate button with action class
		b2.addActionListener(al);
		b3.addActionListener(al);
		b4.addActionListener(al);
		
		
		setLayout(new FlowLayout());
		setVisible(true);
		setSize(400,400);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
}
