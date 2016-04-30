import java.io.*;
import java.awt.*;
public class BorderLayout1
{
 public static void main(String [] args)
 {
   Frame f=new Frame();
   Scrollbar sbRight =new Scrollbar(Scrollbar.VERTICAL);
   f.add(sbRight,BorderLayout.EAST);
   Scrollbar sbLeft =new Scrollbar(Scrollbar.VERTICAL);
   f.add(sbLeft,BorderLayout.WEST);
   Label labelTop=new Label("this is north");
   labelTop.setFont(new Font("serif",Font.ITALIC,25));
   labelTop.setForeground(Color.white);
      labelTop.setBackground(Color.black);
	  f.add(labelTop,BorderLayout.NORTH);
	  Label labelBottom=new Label("this is south");
	labelBottom.setFont(new Font("serif",Font.ITALIC,25));
   labelBottom.setForeground(Color.white);
      labelBottom.setBackground(Color.black);
	  f.add(labelBottom,BorderLayout.SOUTH);
	  f.setSize(330,330);
	  f.setVisible(true);
	  
	  
 }
}