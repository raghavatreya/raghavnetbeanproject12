import java.awt.*;
public class sbdemo
{
 public static void main(String [] args)
 {
	Frame f=new Frame();
   // f.setLayout(new FlowLayout());
	f.setSize(350,350);
	Scrollbar spane=new Scrollbar(Scrollbar.HORIZONTAL,625,25,600,700);
	spane.setBackground(Color.BLACK);f.add(spane,BorderLayout.SOUTH);
	f.setVisible(true);
  }
}