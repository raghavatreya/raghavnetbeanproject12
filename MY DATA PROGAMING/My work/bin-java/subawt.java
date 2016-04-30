import java.awt.*;
import java.awt.event.*;
class add extends Frame implements ActionListener
{
 TextField t1,t2;
 Label l,l1,l2,l3;
 Button b,b2,b3,b5,b1;
 Frame f;
     add()
	 {
	     f=new Frame(" SUBSTRACTION  PROGRAM ");
		 f.setLayout(null);	f.setVisible(true);

		 f.setSize(500,500);
		 t1=new TextField();t1.setBounds(250,50,80,20);f.add(t1);
		 t2=new TextField(); t2.setBounds(250,100,80,20); f.add(t2);
	     
		 l3=new  Label (null); l3.setBounds(400,150,80,20);f.add(l3);
		 l=new  Label("first numer :");l.setBounds(100,50,130,20);f.add(l);
		 l1=new  Label("second number :");l1.setBounds(100,100,130,20);f.add(l1);	
		 l2=new  Label("answer is :");l2.setBounds(100,150,100,20);f.add(l2);
		
		 b=new Button("SUBSTRACTION");b.setBounds(50,200,135,20);f.add(b);
		 b1=new Button("MULTIPLICATION");b1.setBounds(250,200,135,20);f.add(b1);
		 b3=new Button("ADD");b3.setBounds(100,250,60,20);f.add(b3);
	     b5=new Button("DIVIDE");b5.setBounds(150,300,60,20);f.add(b5);
		 b2=new Button("CLEAR");b2.setBounds(200,250,60,20);f.add(b2);
		 
		b.addActionListener(this);
		b2.addActionListener(this);
		b3.addActionListener(this);
		b5.addActionListener(this);
		b1.addActionListener(this);
		
				f.addWindowListener( new WindowAdapter() 
				{
					public void windowClosing(WindowEvent we)
					{
						System.exit(1);
					}
				});
	 }
	 public void actionPerformed(ActionEvent ae)
    {
		float a,d,c;
		if(ae.getSource()==b)
		{
			a=Float.parseFloat(t1.getText().trim());
			d=Float.parseFloat(t2.getText().trim());
			c=a-d;
			l3.setText(Float.toString(c));
		}
		else if(ae.getSource()==b3)
		{
				a=Float.parseFloat(t1.getText().trim());
				d=Float.parseFloat(t2.getText().trim());
				c=a+d;
				l3.setText(Float.toString(c));
		
		}
		else if(ae.getSource()==b5)
		{
			a=Float.parseFloat(t1.getText().trim());
			d=Float.parseFloat(t2.getText().trim());
			c=a/d;
			l3.setText(Float.toString(c));
		}
		else if(ae.getSource()==b1)
		{
			a=Float.parseFloat(t1.getText().trim());
			d=Float.parseFloat(t2.getText().trim());
			c=a*d;
			l3.setText(Float.toString(c));
		}
		else
		{
			t1.setText(null);
			t2.setText(null);
			l3.setText(null);
		}
 }
	 
}
public class subawt
{
 public static  void main(String [] args)
 {
  add r=new add();
 }
}