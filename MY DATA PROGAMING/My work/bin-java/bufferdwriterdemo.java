import java.io.*;
public class bufferdwriterdemo
{
 public static void main(String [] args)throws IOException
 {
   BufferedWriter f=new BufferedWriter(new PrintWriter(System.out));
   String s="this will show without flush \n";
   char buf[]=new char[s.length()];
   s.getChars(0,s.length(),buf,0);
   f.write(buf);
   f.write(buf);
   System.out.println("test :");
   
 }
}