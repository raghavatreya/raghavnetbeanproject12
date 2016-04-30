import java.io.*;
public class mast19_12
{
  void getname()
  {
      System.out.println("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n#################");
  }
  public static void main(String [] args) throws IOException
  {
     mast19_12 f=new mast19_12();  
    DataInputStream in =new DataInputStream(System.in);
	int a,b,c,d,i,j;
	String[] s = new String[2];
	System.out.println("Enter value of a & b where A+jB \n\n A\n B");
	s[0]=in.readLine();
	a=Integer.parseInt(s[0]);
	s[1]=in.readLine();
	b=Integer.parseInt(s[1]);
	
    System.out.println("Enter value of c & d where C+jD \n\n C\n D");
	s[0]=in.readLine();
	c=Integer.parseInt(s[0]);
	s[1]=in.readLine();
	d=Integer.parseInt(s[1]);

             try
				{
					i= (a*c-d*b)/(c*c+d*d);
					j=(d*a+c*b)/(c*c+d*d);
					System.out.println("\n\n"+i+"+j"+j);
				}
			 catch(Exception r)
				{
					System.out.println(r.getMessage());
				    f.getname();
				}
	} 
}  