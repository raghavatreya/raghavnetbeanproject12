import java.io.*;
public class logic
{
  public static void main(String [] args) throws IOException
  {  DataInputStream in=new DataInputStream(System.in);
     String s;
	 System.out.println("Enter a number");
    int i,l,g=0;
	s=in.readLine();
	l=Integer.parseInt(s);
	for(i=0;(2*i)<l;i++)
	{
	   if((i*i)==l)
	   {  g=1;
	     System.out.println("square root is "+i);
	   }
	}
	if(g==0)
	{
	  System.out.println("SQUARW ROOT IS NOT POSSIBLE");
	}
  }
}