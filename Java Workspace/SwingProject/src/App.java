import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.*;

public class App {
    public static void main(String[] args) throws Exception {
        AddNumbers obj = new AddNumbers();
    }
}

class AddNumbers extends JFrame
{
    JTextField t1;
    JTextField t2;
    JLabel l;
    JButton b;

    public AddNumbers()
    {
        t1 = new JTextField(20);
        t2 = new JTextField(20);

        l = new JLabel("Result");
        b = new JButton("OK");

        add(t1);
        add(t2);
        add(b);
        add(l);

        ActionListener al = new ActionListener() {
            public void actionPerformed(ActionEvent e)
            {
                int num1 = Integer.parseInt(t1.getText());
                int num2 = Integer.parseInt(t2.getText());

                Integer sum = num1 + num2;

                l.setText(sum.toString());
            }
        };

        b.addActionListener(al);
        
        setLayout(new FlowLayout());
        setVisible(true);
        setSize(400, 400);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}