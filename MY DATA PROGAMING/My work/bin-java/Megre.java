import  java.io.*;
class array
{
public int  i,j,k;
public int  G[]=new int [3];
 String S;
 //System.out.pritntln("Enter Array Element");
 
 array() 
 {
    for(i=0;i<3;i++)
	this.G[i]=0;
	this.i=3;this.j=3;this.k=0;
 }
 void get()throws IOException
 {
  DataInputStream in =new DataInputStream(System.in);  
   for(i=0;i<3;i++)
   {
     System.out.println("Enter Element no"+i);
		S=in.readLine();
		 this.G[i]=Integer.parseInt(S);
   }
   for(i=0;i<2;i++)
   {
    G[i]=G[i+1]+G[i];
	G[i+1]=G[i]-G[i+1];
	G[i]=G[i]-G[i+1];
   }
 }
 void print()
 {
  for(i=0;i<3;i++)
  System.out.println("array element are ["+i+"]"+G[i]);
 }
}
public class Megre
{
 public static void main(String [] args)throws IOException
 {
 int x=0;
  //System.out.pritntln("Enter firsrt");
  array ob1=new array();
  array ob2=new array();
  //array ob3=new array();
try 
 {
	ob1.get();
	ob2.get();
 }
 catch(Exception p)
 {
  System.out.println("Exception caught");
 }
 int z=ob1.j+ob2.j;
 System.out.println("**********"+z);
  int D[]=new int [z];
  for(int s=0;s<6;s++)
  {System.out.println("**********"+s);
    if()
	{System.out.println("**********"+ob1.G[s]);
	 D[s]=ob1.G[s];
	}
	else
	{
		D[s]=ob2.G[s];
	}
  }
  for(int s=0;s<z;s++)
  {
   System.out.println("new array's d["+s+"]="+D[s]);
  }
  }
} 