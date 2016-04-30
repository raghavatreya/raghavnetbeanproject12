import java.awt.*;
public class choice
{
 public static void main(String [] args)
 {
  Frame f=new Frame();
  f.setLayout(new FlowLayout());
  Choice ch=new Choice();
  ch.add("raghav");
  ch.add("india");
  ch.add("usa");
  f.add(ch);
  f.setSize(300,300);
	f.setVisible(true);
 }
}