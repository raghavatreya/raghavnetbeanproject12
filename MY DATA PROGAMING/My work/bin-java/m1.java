import java.awt.*;
//import java.math.*;
import java.awt.event.*;
class a extends Frame implements ActionListener
{
Frame f;
TextField t1;
Button b1,b,b2;
Float s,c;
a()
{
               f=new Frame("PROGRAM ");
		 f.setLayout(null);	f.setVisible(true);

		 f.setSize(500,500);
		 t1=new TextField(  );t1.setBounds(250,50,80,20);f.add(t1);
         b=new Button("*");b.setBounds(20,200,195,20);f.add(b);
		 b1=new Button("+");b1.setBounds(250,200,50,20);f.add(b1);
		 b2=new Button("=");b2.setBounds(310,200,100,20);f.add(b2);
		 
	 	 b.addActionListener(this);
	 	 b2.addActionListener(this);
		 b1.addActionListener(this);
		
}
 public void actionPerformed(ActionEvent ae)
    {
       if(ae.getSource()==b)
	   {
	   s=Float.parseFloat(t1.getText());

	   }
	}
}
public class m1
{
 public static void main(String [] args)
 {
   add a=new add();
 }
}