import java.io.*;
public class day
{
  public static void main(String [] args)
  {
    
	int a,b=0,c=1;
    int d,i=1; 
     d=args.length;
//	 if(args[i]==0)
						try
						{
							b=Integer.parseInt(args[0]);
						}
						catch(Exception g)
						{
								System.out.println("string or character array is not permissible\n..."+g.getMessage());
						        d=0;
					    }
					d--;
	 while(d>0)
    {
				try
				{
						a=Integer.parseInt(args[d]);
						if(a>b)
						{
						  b=a;
				    	}	
				}
				catch(Exception j)
				{
				
						System.out.println("YOU ENter A STRING ");
					    d=0;
				}
   if(d==1)
		{
			System.out.println("--------------Maximum number is "+b+"--------------------");
		}   
	 d--;			  
	}	
  }
  
}