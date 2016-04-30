import java.io.*;
interface student
{
  // int roll; 
 // String na;
   // void getname();
  //void getroll();  
 }
 interface exam
{
  int ex1=0;
  int ex2=0;
    // void getexamname();
}
interface result
{
   int total=0;
 //void show();
}  
public class 12 //implements student// implements exam implements result
{
  public static void main(String [] args) throws IOException   
  { 
     String s,na;  
     DataInputStream in=new DataInputStream(System.in);
	 System.out.println("*********************");
	int p=1,roll;
	do
	{
		System.out.println("Enter name of student");
		s=in.readLine();
		na=s;
		System.out.println("Enter roll number of student");
		s=in.readLine();
		roll=Integer.parseInt(s);
		/*System.out.println("Enter  exam 1  number");
		s=in.readLine();
		ex1=Integer.parseInt(s);
		System.out.println("Enter exam 2 number");
		s=in.readLine();
		ex2=Integer.parseInt(s);
		total=ex1+ex2;*/
		System.out.println("**show results**");
		System.out.println(" name of student"+na);
	//	System.out.println(" exam 2 number"+ex2);
//		System.out.println(" exam 1 number"+ex1);
	//	System.out.println(" total number"+total);
		System.out.println(" roll number of student"+roll);
        System.out.println("\n Enter 1 for add new student details \n\n 2 for exit");
		s=in.readLine();
		p=Integer.parseInt(s);
	}while(p>0);
  }
}