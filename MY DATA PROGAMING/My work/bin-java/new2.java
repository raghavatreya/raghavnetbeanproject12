import java.io.*;
public class new2
{
  static public void main(String [] args) throws IOException
  {
     DataInputStream in=new DataInputStream(System.in);
 	 int num;
     boolean isprime=true;
	 String s;
	 s=in.readLine();
	 num=Integer.parseInt(s);
   int i;
   for(i=2;i<=num/i;i++)
   {
     if(num%i==0)
	 {
	   isprime=false;
	   break;
	 }
   }   
  if(isprime)
  System.out.println("prime");
  else
  System.out.println("not prime ");
  }
}