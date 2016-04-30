import java.awt.*;
public class textdemo
{
 public static void main(String [] args)
 {
   Frame f=new Frame();
  f.setLayout(new FlowLayout());//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
  TextField tf=new TextField(100);
  tf.setText("raghav kumar atreya get well soon");f.add(tf);
  TextArea t1=new TextArea();f.add(t1);
  TextArea t2=new TextArea(6,20);f.add(t2);
  TextArea t3=new TextArea(3,20);f.add(t3);
  t3.setText("1111\n2222\n3333\n444\n5555\n6666\n");
  f.setSize(300,300);
	f.setVisible(true);
 }
}  