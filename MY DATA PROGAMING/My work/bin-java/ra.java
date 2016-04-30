import java.io.*;
import java.awt.*;
public class ra
{
 public static void main(String []args)
 {
	Frame f=new Frame();
	f.setLayout(new FlowLayout());
	Checkbox cb=new Checkbox("literate");
	f.add(cb);
	f.setSize(300,300);
	f.setVisible(true);
 }
}