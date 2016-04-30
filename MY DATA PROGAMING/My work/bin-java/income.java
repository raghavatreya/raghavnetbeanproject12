import java.awt.*;
import java.awt.event.*;
class add extends Frame implements ActionListener
{
 TextField t1,t2,t3;
 Label l,l1,l2,l3,l7,l8,l9,l4,l5,l6;
 Button b,b2,b1;
 Frame f;
     add()
	 {
	     f=new Frame(" INCOMETAX PROGRAM ");
		 f.setLayout(null);	f.setVisible(true);

		 f.setSize(500,500);
		 t1=new TextField();t1.setBounds(250,50,80,20);f.add(t1);
		 t2=new TextField(); t2.setBounds(250,100,80,20); f.add(t2);
	     t3=new TextField(); t3.setBounds(250,150,80,20); f.add(t3);
		 
		 l3=new  Label (null); l3.setBounds(400,150,80,20);f.add(l3);
		 l=new  Label("Enter Name:");l.setBounds(100,50,130,20);f.add(l);
		 l1=new  Label("Enter Code :");l1.setBounds(100,100,130,20);f.add(l1);	
		 l2=new  Label("INCOME :");l2.setBounds(100,150,100,20);f.add(l2);
		
    	 l4=new  Label(null);l4.setBounds(10,300,100,20);f.add(l4);
		 l5=new  Label(null);l5.setBounds(150,300,140,20);f.add(l5);
		 l6=new  Label(null);l6.setBounds(300,300,100,20);f.add(l6);
		 
		 l9=new  Label("EDUCATION:");l9.setBounds(150,250,140,20);f.add(l9);
		 l8=new  Label("INCOME TAX");l8.setBounds(300,250,100,20);f.add(l8);
		 l7=new  Label("SURCHARGE");l7.setBounds(10,250,100,20);f.add(l7);
		
		 b=new Button("INCOMETAX  CALCULATE");b.setBounds(20,200,195,20);f.add(b);
		 b1=new Button("EXIT");b1.setBounds(250,200,50,20);f.add(b1);
		 b2=new Button("CLEAR");b2.setBounds(310,200,100,20);f.add(b2);
		 
	 	 b.addActionListener(this);
	 	 b2.addActionListener(this);
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
			float a,c,it,e,itax=0,sur=0,edu=0,k,x;
		if(ae.getSource()==b)
		{
			a=Float.parseFloat(t3.getText().trim());
            x=a;	
		    
			 if(a>250000)
			{
			  e=a-250000f;		itax=(e*.3f+25000);		sur=x*0.02f;			edu=x*.01f;				  
			}

 			
			else if(a>150000)
			{
				e=a-150000f;		itax=(5000+e*0.2f);		  		sur=x*0.02f;
			}
						
			else if(a>100000)
			{
				e=a-100000f;		sur=x*0.02f; 		itax=e*.1f;
			}
			if(a<100000)
			{
			  edu=0;sur=0;itax=0;
			}
			
			
		    l4.setText(Float.toString(edu));
			l5.setText(Float.toString(sur));
			l6.setText(Float.toString(itax));

		}
		else if(ae.getSource()==b1)
		{
			System.exit(1);
		}
		else if(ae.getSource()==b2)
		{
			t1.setText(null);l4.setText(null);
			t2.setText(null);l5.setText(null);
			t3.setText(null);l6.setText(null);
		}
 }
	 
}


public class income
{
 public static  void main(String [] args)
 {
  add r=new add();
 }
}

