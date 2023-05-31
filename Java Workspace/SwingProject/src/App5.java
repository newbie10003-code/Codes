import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextArea;
import javax.swing.*;
import java.awt.event.*;

import java.awt.*;

public class App5 {
    public static void main(String[] args) {
        InputTextGUI area = new InputTextGUI();
    }
}

class InputTextGUI extends JFrame
{
    JTextArea tal;
    JLabel l;
    JButton b;
    InputTextGUI()
    {
        tal = new JTextArea(5, 30);
        b = new JButton("Submit");
        l = new JLabel("Greetings");

        add(tal);
        add(b);
        add(l);

        ActionListener al = new ActionListener()
        {
            public void actionPerformed(ActionEvent e)
            {
                String text = tal.getText();
                l.setText(text);
            }
        };

        b.addActionListener(al);

        setLayout(new FlowLayout());
        setVisible(true);
        setSize(400, 400);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}
