import java.io.*;
interface student
{
  int roll =new int;
  String n;
  void getname();
  void getroll();  
 }
interface exam
{
  int ex1=new int;
  int ex2=new int;
     void getexamname();
}
interface result
{
 void show();
}
class raghav implements student implements exam implements result throws IOException
{  String s;
  DataInputStream in=new DataInputStream(System.in);
   raghav()
   {
     System.out.println("Enter name of student");
	 s=in.readLine();
      n=s;
 	 System.out.println("Enter roll number of student");
	 s=in.readLine();
	 roll=Integer.printlnt(s);
	 System.out.println("Enter  exam 1  number");
	 s=in.readLine();
	 ex1=Integer.printlnt(s);
	 System.out.println("Enter exam 2 number");
	 s=in.readLine();
	 ex2=Integer.printlnt(s);
    System.out.println("**show results**");
	System.out.println(" name of student"+n);
	System.out.println(" exam 2 number"+ex2);
	System.out.println(" exam 1 number"+ex1);
	System.out.println(" roll number of student"+roll);
   }
}
public class mastc14q16 
{
  public static void main(String [] args) extends raghav throws IOException 
  {  raghav r=new raghav();  	  
     DataInputStream in=new DataInputStream(System.in);
	 System.out.println("*********************");
	
  }
}