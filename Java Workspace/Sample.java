import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class Sample extends MouseMotionAdapter {
    Frame f;
    Sample()
    {
        f = new Frame("Mouse motion adapter");
        f.addMouseMotionListener(this);
        f.setVisible(true);
        f.setSize(400, 400);
    }

    public void mouseDragged(MouseEvent e)
    {
        Graphics grap = f.getGraphics();
        grap.setColor(Color.RED);
        grap.fillRect(e.getX(), e.getY(), 3, 3);
    }

    public static void main(String[] args) {
        new Sample();
    }
}