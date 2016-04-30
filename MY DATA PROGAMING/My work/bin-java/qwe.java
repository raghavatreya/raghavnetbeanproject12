import java.io.*;
public class qwe
{
  public static void main(String [] args) throws IOException
  {
      int a=2,b,c;
	  DataInputStream in=new DataInputStream(System.in);
	  String s;
	  
	  System.out.println("Enter maximum length of array index");
	  s=in.readLine();
	  a=Integer.parseInt(s);
	  
	  boolean d;
	  d=true;
	  int G[]=new int [a]; 
	   
	   for(b=0;b<a;b++)
	   {
	      G[b]=0;
	   }
	   
	   do
	   
	  {
				   try
				   {
					System.out.println("Enter array index at which you want to enter a number ");
					s=in.readLine();
					b=Integer.parseInt(s);
                     G[b]=0;					
	               	}
					catch(Exception v)
					{ d=false;
					 System.out.println( "--------------------you enter index out of range--------------\n\n"+v.getMessage());
					}
					
					if(d)
				     {			
							try
							{
									System.out.println("Enter number");
									s=in.readLine();
									c=Integer.parseInt(s);
									G[b]=c;
									System.out.println("----------------------------");
							}
							
								catch(Exception k)
								{
									System.out.println("you Enter a character in integer array");
									d=false;
								}
                    }					
	  }while(d);
     	  
  }
}