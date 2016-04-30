import java.io.*;
final class raghav
{
 String name;
public final void getname()throws IOException
 {
	System.out.println("enter the name");
	DataInputStream in=new DataInputStream(System.in);  
	name=in.readLine();
 }
}
public class madhav1
{
 public static void main(String[] args)throws IOException
 {
  DataInputStream in=new DataInputStream(System.in);  
      raghav r=new raghav();
   r.getname();
 }
} 