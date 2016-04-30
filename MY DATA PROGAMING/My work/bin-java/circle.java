import java.io.*;
public class circle
{
      public static void main(String[] args) throws IOException 
	  {    DataInputStream in = new DataInputStream(System.in);
	     //DataInputStream in= new DataInputStream(System.in);
         System.out.println(" \n\n  This program for Internal point of a circle \n ");
		 int x,y,r;
		 String s;
		 System.out.print(" \n\n Enter radii of circle\n");
		 s=in.readLine();
		 r=Integer.parseInt(s);
		 for(x=0;x<r;x++)
		 {
		    for(y=0;y<r;y++)
			{
			   if((x*x+y*y)<r*r)
			   {
	              System.out.print("("+x);
				  System.out.print(","+y); 
		          System.out.print(")\n");
                  System.out.print("(-"+x);
				  System.out.print(","+y); 
		          System.out.print(")\n");
                  System.out.print("("+x);
				  System.out.print(",-"+y); 
		          System.out.print(")\n");
		      
                   System.out.print("(-"+x);
				   System.out.print(",-"+y); 
		           System.out.print(")\n");
				  }
			}
		 }
	  }
}