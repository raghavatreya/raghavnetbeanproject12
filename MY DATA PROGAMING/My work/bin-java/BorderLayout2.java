import java.io.*;
import java.awt.*;
public class BorderLayout2 extends Frame
{
 public static void main(String [] args)
 {
	Frame f=new BorderLayout2();
	f.add(new Button("n"),BorderLayout.NORTH);
	f.add(new Button("e"),BorderLayout.EAST);
	f.add(new Button("s"),BorderLayout.SOUTH);
	f.add(new Button("w"),BorderLayout.WEST);
	Panel p=new Panel();
	p.setBackground(Color.green);
	f.add(p);
	f.setSize(300,300);
	f.setVisible(true);
 }
}