import java.io.*;
public class ep703
{
   public static void main(String [] args) throws IOException
   {
     int i,j,k=1;
     int a[][]=new int [5][5];
      for(i=0;i<5;i++)
      {
	    for(j=0;j<5;j++)
		{
		  a[i][j]=k;
		  System.out.println(a[i][j]);
		}
		System.out.println("\n");
	  }	  
   }
}