import java.io.*;
public class great
{
       public static void main(String[] args) throws IOException
	   {    DataInputStream in = new DataInputStream(System.in);
           int b,i,j,k=0,count,joke=0;
	      String n;
	       System.out.println("Enter an number");
		   n=in.readLine();
		   b=Integer.parseInt(n);
		   for(i=1;i<=b;i++)
		   { count=0;
		     for(j=1;j<i;j++)
			 {  
			    if(i%j==0)
				{
			       count=count+1;				
				}
			 }
		     if(count>joke)
		     {
		       joke=count;
			    k=i;
	         }
			}
			
             System.out.print("maxi. times divible number is"+k);			
      }
}