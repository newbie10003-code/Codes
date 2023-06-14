import java.awt.Color;
import java.awt.Frame;
import java.awt.Graphics;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import java.awt.event.MouseMotionAdapter;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

public class P16_Task01_MouseMotionListener_GUI extends MouseMotionAdapter {
    Frame f;

    P16_Task01_MouseMotionListener_GUI() {
        f = new Frame("Mouse Motion Adapter");
        f.addMouseMotionListener(this) ;
        f.setSize(600, 600);
        f.setVisible(true);
        f.addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent e) {
                f.dispose();
            }
        });
    }

    public void mouseDragged(MouseEvent e)
	{
		Graphics g=f.getGraphics();
		g.setColor(Color.red);
		g.fillRect(e.getX(), e.getY(), 2, 2);
	}
    public static void main(String[] args) {
        new P16_Task01_MouseMotionListener_GUI();
    }
}
