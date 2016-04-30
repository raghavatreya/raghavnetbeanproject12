import java.io.*;
class raghav
{  String s;
    int a;
   float b; 
                 public  void getdetail() throws IOException
				 {
				   System.out.println("Enter population of  city");
				   s=in.readLine();
				   a=Integer.parseInt(s);
                   System.out.println("Enter literacy level of city");
				   s=in.readLine();
				   b=Integer.parseInt(s);
				   System.out.println("Enter city name ");
				   s=in.readLine();
				     
				 }
               
}
public class 4city
{
  public static void main(String [] args) throws IOException
  {
     
        raghav a[]=new raghav a[5];
		 int i;
		 for(i=0;i<4;i++)
		 {   
		     a[i].getdetail();
		 }

  }
}