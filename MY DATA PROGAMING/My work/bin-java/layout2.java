import java.io.*;
import java.awt.*;
public class BorderLayout2 extends Frame
{
 public static void main(String [] args)
 {
	Frame f=new BorderLayout2();
	f.add(new Button("n"),ButtonLayout.NORTH);
	f.add(new Button("e"),ButtonLayout.EAST);
	f.add(new Button("s"),ButtonLayout.SOUTH);
	f.add(new Button("w"),ButtonLayout.WEST);
	Panel p=new Panel();
	p.setBackground(Color.green);
	f.add(p);
	f.setSize(300,300);
	f.setVisible(true);
 }
}