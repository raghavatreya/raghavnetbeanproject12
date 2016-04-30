import java.awt.*;
public class listdemo
{
 public static void main(String [] args)
 {
   Frame f=new Frame();
  f.setLayout(new FlowLayout());
  List list=new List(2,true);
  list.add("raghav");
  list.add("india");
  list.add("usa");
  f.add(list);
  f.setSize(300,300);
	f.setVisible(true);
 }
}