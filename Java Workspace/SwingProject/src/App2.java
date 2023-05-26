import javax.swing.JButton;
import javax.swing.JComboBox;
import javax.swing.JFrame;
import javax.swing.JLabel;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class App2 {
    public static void main(String[] args) {
        JComboBoxClass obj = new JComboBoxClass();
    }
}

class JComboBoxClass extends JFrame
{
    JComboBox jbox;
    JButton b;
    JLabel l;
    public JComboBoxClass()
    {
        String week[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
        jbox = new JComboBox<>(week);
        b = new JButton("Submit");
        l = new JLabel("Choose a day from the list");

        add(jbox);
        add(b);
        add(l);

        ActionListener al = new ActionListener() {
            public void actionPerformed(ActionEvent e)
            {
                String data = "";
                if(jbox.getSelectedIndex() != -1)
                {
                    data = "Day Selected: "+ jbox.getSelectedItem();
                    l.setText(data);
                }
            }
        };

        b.addActionListener(al);

        setLayout(new FlowLayout());
        setVisible(true);
        setSize(400, 400);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}