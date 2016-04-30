float a,d,c,d,e,f;
		if(ae.getSource()==b1)
		{
			a=Float.parseFloat(t3.getText().trim());
           c=0;d=0;b=0		
		    if(a>250001)
			{
			  e=a-250000;
			  b=e*0.3+25000;
			  c=e*0.02;
			  d=e*.01;	
              a=250000;			  
			}
			else if(a>200001)
			{
			 e=a-200000;
			 b=b+5000+e*0.02;
			 c=c+e*0.02;
			 a=200000;
			}
			else if(a>150001 )
			{
			  e=a-150000;
			  b=b+e*0.01;
			  c=c+e*0.02;
			  a=150000;
			}
			else if(a>100000)
			{
			   e=a-100000;
			   c=c+e*0.01;
			   a=100000;
			}
			else
			{
			  c=0;d=0;b=0;
			}
		    l7.setText(Float.toString(c));
			l8.setText(Float.toString(d));
			l9.setText(Float.toString(b));
		}
		else if(ae.getSource()==b2)
		{ 
			t1.setText(null);
			t2.setText(null);
			t3.setText(null);
			//l3.setText(null);
		}
		else(ae.getSource()==b3)
		{
		f.addWindowListener( new WindowAdapter() 
				{
					public void windowClosing(WindowEvent we)
					{
						System.exit(1);
					}
				});		
		}
		
