import java.io.*;
import java.util.logging.Level;
import java.util.logging.Logger;
public class oops13_18
{ 
  public static void main(String [] args) 
  {
    int  a=1,b=0;
    int c;
    String d;
            DataInputStream in=new DataInputStream(System.in);
			System.out.println("---------------------------");
			System.out.println(" \n\n Enter first number \n\n");
				try 
					{
						d=in.readLine();  			  
						a=Integer.parseInt(d);
					}
				catch(Exception ex)
					{
						System.out.println("Error Occour Entering first number");
						//  System.out.print(ex.message.toString());			  
						a=0;
					}
		
			System.out.println("Enter second number ");      
					try 
					{
						d=in.readLine();  			  
						b=Integer.parseInt(d);
					}
					catch(Exception ex)
					{
						System.out.println("Error Occour Entering second number");
						 System.out.print(ex.getMessage());			  
					}
			System.out.println("-----------------c is divibile product of a/b------------");		
					try
					{
						c=(a/b); 
						System.out.println("----------Results is c="+c+"---------");
					}
					catch(Exception ex)
					{  
						System.out.print("\n \n divided time error");
						System.out.println("------Results is 0-------");
						// System.out.print(ex.message.toString());
					}
					finally
					{
					  System.out.println("-------------------------------------");
					}
 }
}