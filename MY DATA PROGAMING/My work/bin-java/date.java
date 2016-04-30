import java.io.*;
class out
{
   void outday(int d ,int b )
     {
    if(d>=b)
		{
		 System.out.print(b);
		}
		else
		{
		  System.out.print("Enter proper day");
		}
    }
   void outmonth( int x, int s, int y)
    {
       switch(s)
	   {
	       case 1: System.out.print("jan");outday(31,x);outyear(y); break;
		   case 2: System.out.print("feb");
		                           if(y%4==0)
								   {
								   outday(29,x);
								   }
								   else
								   {
								    outday(28,x);
								   }
								   outyear(y);break;
		   case 3: System.out.print("march");outday(31,x);outyear(y);break;
		   case 4: System.out.print("april");outday(30,x);outyear(y);break;  
           case 5: System.out.print("may");outday(31,x);outyear(y);break;
           case 6: System.out.print("june");outday(30,x);outyear(y);break;
           case 7: System.out.print("july");outday(31,x);outyear(y);break;
           case 8: System.out.print("august");outday(31,x);outyear(y);break;
           case 9: System.out.print("september");outday(30,x);outyear(y);break;
		   case 10: System.out.print("octomber");outday(31,x);outyear(y);break;
		   case 11: System.out.print("november");outday(30,x);outyear(y);break;
		   case 12: System.out.print("december");outday(31,x);outyear(y);break;
	       default :System.out.print("Enter proper month ");break;
	   }
   }
   void outyear(int d)
   {
   System.out.println(","+d);
   }
}
public class date
{  
    
   public static void main(String [] args) throws IOException
	 {  
         int a,b,c,i;
           DataInputStream in =new DataInputStream(System.in);
	      System.out.println("Enter date  in date  month  year format ");
		  String[] n = new String[3];
		  for(i=0;i<3;i++)
		  {
		   n[i]=in.readLine();
		  }
		  a=Integer.parseInt(n[0]);
		  b=Integer.parseInt(n[1]);
		  c=Integer.parseInt(n[2]);
	   	
         out s = new out();
         s.outmonth(a,b,c);		 
	 }
}