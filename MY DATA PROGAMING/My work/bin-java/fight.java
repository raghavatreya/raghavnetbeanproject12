import java.awt.*;
import java.awt.event.*;

public class fight extends Frame implements ActionListener
{
 TextField t1,t2,t3;
 Label b,b2,b5;
 Button b1,b4;
 public void actionPerformed(ActionEvent ae)
 {
  float x,y,z;
  if(ae.getSource()==b1)
  {
   x=Float.parseFloat(t1.getText().trim());
   y=Float.parseFloat(t2.getText().trim());
   z=x+y;
   t3.setText(Float.toString(z));
  }
  else
  {
   t1.setText(null);
   t2.setText(null);
   t3.setText(null);
  }
 }

 public static void main(String [] args)
 {
  Frame f=new Frame("  SUBSTRACTION	  	PROGRAM		");
  f.setLayout(null);	f.setVisible(true);

 f.setSize(500,500);
 TextField t1=new TextField();t1.setBounds(250,50,80,20);f.add(t1);
 TextField t2=new TextField(); t2.setBounds(250,150,80,20); f.add(t2);
 TextField t3=new TextField(); t3.setBounds(250,250,80,20);f.add(t3);
 
 Button b1=new Button("substraction");b1.setBounds(100,350,100,20);f.add(b1);
 Label b=new Label("first numer");b.setBounds(100,50,130,20);f.add(b);
 Label b2=new Label("second number");b2.setBounds(100,160,130,20);f.add(b2);
 Label b5=new Label("answer is :");b5.setBounds(100,250,100,20);f.add(b5);
 Button b4=new Button("clear");b4.setBounds(300,350,100,20);f.add(b4);
 
    b1.addActionListener(this);
    b4.addActionListener(this);

	addWindowListener( new WindowAdapter() 
   {
    public void windowClosing(WindowEvent we)
    {
     System.exit(0);
    }
   }
 }
}