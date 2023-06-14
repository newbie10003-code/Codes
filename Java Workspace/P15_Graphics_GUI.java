// import java.awt.*;
// // import java.awt.Color;
// // import java.awt.FlowLayout;
// // import java.awt.Graphics;

// import javax.swing.*;

// public class P15_Graphics_GUI extends Canvas {

// 	public static void main(String[] args) 
// 	{
// 		P15_Graphics_GUI o = new P15_Graphics_GUI();
// 		JFrame f = new JFrame();

// 		f.add(o);

// 		f.setVisible(true);
// 		f.setSize(400, 400);
// 		f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

// 	}

// 	public void paint(Graphics grap) 
// 	{
// 		grap.drawOval(125, 140, 40, 70);
// 		grap.drawLine(16, 64, 32, 128);
// 		setForeground(Color.red);
// 		grap.fillOval(25, 140, 40, 70);
// 		grap.drawArc(10, 20, 140, 150, 90, 60);
// 		grap.drawRect(150, 40, 140, 60);
// 	}
// }

// package unit_04;
	
import java.awt.*;
import java.awt.*;
import java.awt.Color;
import java.awt.FlowLayout;
import java.awt.Graphics;

import javax.swing.*;
//import java.awt.Canvas;

class P17_DisplayGraphics_GUI extends Canvas {
	public static void main(String[] args) {
		
		P17_DisplayGraphics_GUI o = new P17_DisplayGraphics_GUI();
		
		JFrame f = new JFrame();
		f.add(o);
		
		f.setVisible(true);
		f.setSize(500 , 500);
		f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
	public void paint(Graphics grap)
	{
		// grap.drawOval(25, 140, 40, 70);
		grap.drawLine(16, 64, 32, 120);
		
		setForeground(Color.RED);
		grap.fillOval(140, 140, 40, 60);
		grap.drawArc(10, 20, 140, 150, 90, 60);
		grap.drawRect(150, 40, 140, 60);
	}

}