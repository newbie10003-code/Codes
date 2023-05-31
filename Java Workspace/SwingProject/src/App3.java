import javax.swing.JButton;
import javax.swing.JComboBox;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JList;

import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class App3 {
    public static void main(String[] args) {
        ListGUI obj = new ListGUI();
    }
};

class ListGUI extends JFrame
{
    JList list;
    JButton b;
    JLabel label;

    ListGUI()
    {
        String week[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
        list = new JList<>(week);
        b = new JButton("Submit");
        label = new JLabel("Choose a day from the list");

        add(list);
        add(label);
        add(b);

        ActionListener al = new ActionListener() {
            public void actionPerformed(ActionEvent e)
            {
                String data = "";
                if(list.getSelectedIndex() != -1)
                {
                    data = "Day selected: " + list.getSelectedValue();
                    label.setText(data);
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
