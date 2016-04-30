import java.io.*;
class meter
{  
	String s[] = new String [2];
	double m,c,f,i;
	int n;
     public  void get() throws IOException
	  {  
		DataInputStream l=new DataInputStream(System.in); 
	    System.out.println("Enter length in meter and centimeter");
		for(n=0;n<2;n++)
		{
		  s[n]=l.readLine();
		}
		m=Integer.parseInt(s[0]);
		c=Integer.parseInt(s[1]);
		f=m*100/(12*2.54);
		i=c/2.54;
		if(i>1)
		{  
  		  i=i-12;
		  f=f+1;
		}
		System.out.println("Value of length in foot"+f);
		System.out.println("Value of length in inches"+i);
	  }
}
public class foot
{
   public static void main(String [] args) throws IOException
   { String [] s;
   s=new String [2];
     String a;
     DataInputStream in = new DataInputStream(System.in);
     double m,c,f,i;
	 int x,n;
	 meter j =new meter () ;
     System.out.println("Which unit you want to convert length \n 1 for foot to meter \n 2 for meter to foot");
     a=in.readLine();
     x=Integer.parseInt(a);
     if(x==1)  	 
      { 
         j.get();	
	   }    
          else
              {  System.out.println("Enter value of length in foot \n inches ");
                for(n=0;n<2;n++)
                {
				  s[n]=in.readLine();
				}	
        		f=Integer.parseInt(s[0]);
 				i=Integer.parseInt(s[1]);
				m=f*12*2.54*.01;
				c=i*2.54;
				if(c>100)
				{
				  m=m+ (c-100)*.01;
				  c=c-100;
				}
				System.out.println("Value of length in meter"+m);
				System.out.println("Value of length in centimeter :"+c);
		  	  }	
        
   }
}