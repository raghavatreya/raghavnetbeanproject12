import java.io.*;
class A
{
  int i,j;
  void showij()
   {
     System.out.println(i+"\n\n"+j);
   }
}
class B extends A
{
   int k;
   void showk()
   { System.out.println(k);}
   void sum()
   {
    System.out.println(i+j+k);
   }
}
public class ep701
{
     public static void main(String [] args) throws IOException
	 {
	   DataInputStream in=new DataInputStream(System.in);
	   A a=new A();
	   B b=new B();  
	   a.i=10;  // there are two object of a  and  b;
	   a.j=20;
	   a.showij();
	   b.i=7;
	   b.j=8;
	   b.k=9;
	   b.showij();
	   b.showk();
	   a.showij();
	   b.sum();
	 }
}