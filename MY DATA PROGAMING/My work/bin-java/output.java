import java.io.*;
public class output
{
 public static void main(String [] args)throws IOException
 {
   BufferedOutputStream f=new  BufferedOutputStream(System.out,0);
   byte buf[]="ABCD".getBytes();
   /*for(int i=0;i<buf.length;i++)
   {
    System.out.print(" "+buf[i]);
   }*/
   f.write(buf);
   f.write(buf);
   System.out.println("raghav");
   f.write(buf);
 }
}