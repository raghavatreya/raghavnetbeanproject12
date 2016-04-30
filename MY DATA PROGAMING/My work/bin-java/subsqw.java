import java.awt.*;
import java.awt.event.*;

public class substraction extends Frame implements ActionListener
{
 public static void main(String [] args )
 {
  Frame f=new Frame("this program for substraction");
  //super("this program for substraction");
  f.setLayout(null);	f.setVisible(true);

 f.setSize(500,450);
 TextField t1=new TextField();t1.setBounds(250,50,80,20);f.add(t1);
 TextField t2=new TextField(); t2.setBounds(250,150,80,20); f.add(t2);
 TextField t3=new TextField(); t3.setBounds(250,250,80,20);f.add(t3);
 
 Button b1=new Button("substraction");b1.setBounds(100,350,100,20);f.add(b1);
 Button b=new Button("first numer");b.setBounds(100,50,130,20);f.add(b);
 Button b3=new Button("second number");b3.setBounds(100,160,130,20);f.add(b3);
  Button b5=new Button("answer is :");b5.setBounds(100,250,100,20);f.add(b5);
 Button b4=new Button("clear");b4.setBounds(300,350,100,20);f.add(b4);
 
}

 }
