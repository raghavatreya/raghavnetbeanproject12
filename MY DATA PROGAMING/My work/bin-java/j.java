import java.io.*;
import java.util.logging.Level;
import java.util.logging.Logger;
interface student
{
  void getname();
  void getroll();
}
 interface exam
{
    void getexamnum();
}
interface result
{
  void show();
}  
public class j implements student,exam,result
{
int total,ex1,ex2,roll;
String b,s; 
	 public void getname()
	{   DataInputStream in=new DataInputStream(System.in);
		try 
		{	   System.out.println("Enter name of student");
				s=in.readLine();
				b=s;
		}
		catch(IOException ex)  
		{
				System.out.println("ERROR OCCOUR in getname");
		}
	}
    public void getroll()
    {  
		DataInputStream in=new DataInputStream(System.in);
		try
		{	
				System.out.println("Enter roll number of student");
				s=in.readLine();
				roll=Integer.parseInt(s);
		}
		catch(IOException ex)
		{
				System.out.println("ERROR OCCOUR  in getroll ");
		}
    }
	public void getexamnum()
	 {
	    DataInputStream in=new DataInputStream(System.in);
	    try
		{  
				System.out.println("Enter  exam 1  number");
				s=in.readLine();
				ex1=Integer.parseInt(s);
				try
				{
							System.out.println("Enter exam 2 number");
							s=in.readLine();
							ex2=Integer.parseInt(s);
					
				}
                catch (IOException ex)
                {
							System.out.println("ERROR OCCOUR  in getexamnum");
				}				
	  }
      catch(IOException ex)	 
	  {
	            System.out.println("ERROR OCCOUR in getexamnum");
	  }
	  finally
	 {
	   total =ex1+ex2;
	 }
	}
   public void show()
   {
		System.out.println("**show results**");
		System.out.println(" name of student         :"+b+"\n\n");
	    System.out.println(" exam 2 number           :"+ex2+"\n\n");
		System.out.println(" exam 1 number           : "+ex1+"\n\n");
		System.out.println(" total number            : "+total+"\n\n");
		System.out.println(" roll number of student  :"+roll+"\n\n");
  }

  public static void main(String [] args) throws IOException   
  {   	 
			DataInputStream in=new DataInputStream(System.in);
			System.out.println("*********************");
			int p=0;
			String g;
			j f=new j();
		do
		{   
				f.getroll();
				f.getname();	
				f.getexamnum();
				f.show();
				System.out.println("\n Enter 2 for add new student details \n\n 1 for exit");	
				g=in.readLine();
				p=Integer.parseInt(g);
	         
		}
	while(p>1);
  }
}