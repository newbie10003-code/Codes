package unit04;

import java.awt.FlowLayout;
import java.awt.event.*;

import javax.swing.JButton;
import javax.swing.JComboBox;
import javax.swing.JFrame;
import javax.swing.JLabel;


public class P15_JComboBox {

	public static void main(String[] args) {
		JComboBoxClass obj=new JComboBoxClass();

	}

}


class JComboBoxClass extends JFrame{
	JComboBox jbox;
	JButton b;
	JLabel label1;
	public JComboBoxClass()
	{
		String week[]= {"MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY","SUNDAY"};
		jbox=new JComboBox<>(week);
		b=new JButton("SUBMIT");
		label1=new JLabel("CHOOSE A DAY FROM THE LIST");
		add(jbox);
		add(b);
		add(label1);
	
		ActionListener al=new ActionListener() 
		{
			public void actionPerformed(ActionEvent e)
			{
				String data="";
				if(jbox.getSelectedIndex()!=-1)
				{
					data="DAY SELECTED: "+jbox.getSelectedItem();
					label1.setText(data);
				}
			}
		};
		
		b.addActionListener(al);
		setLayout(new FlowLayout());
		setVisible(true);
		setSize(400,400);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
	
	
}