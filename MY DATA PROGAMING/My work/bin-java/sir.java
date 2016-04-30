import java.io.*;
public class sir
{
   public static void main(String [] args) throws IOException
   {
    //System.out.println("Enter a string ");
	 String s="saras";
	 int a=s.length();
	 char d[]=new char [a];
	 s.getChars(0,a,d,0);
	 for(int i=0;i<=a;i++)
	 {
	     for(int j=0;j<i;j++)
		 {
	               System.out.print(d[j]);	 
		 }
		 System.out.println();
	 }
	 System.out.println("-------panaldrum----");
	 char p[]=new char[a];
	 for(int i=0;i<a;i++)
	 {
	    p[i]=d[a-1-i];//be care 
     }	
	 String z= new String (p);
	System.out.println(z);
	 if(s.compareTo(z)==0)
	 System.out.println("yes");
	 else
	 System.out.println("no");
   
   }
}