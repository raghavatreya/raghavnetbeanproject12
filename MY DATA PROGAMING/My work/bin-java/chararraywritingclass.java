import java.io.*;
public class chararraywritingclass
{
 public static void main(String [] args)throws IOException
 {
  CharArrayWriter f= new CharArrayWriter();
  String s="this should end of this array";
  char buf[]=new char[s.length()];
  int p=s.length();
  s.getChars(0,p,buf,0);
  f.write(buf);
  System.out.println(f.toString());

  char c[]=f.toCharArray();
  for(int i=0;i<c.length;i++)
  {
    System.out.print(c[i]);
  }
  FileWriter f2=new FileWriter("test.txt");
  f.writeTo(f2);
  f2.close();
  f.reset();
  System.out.println();
  for(int  i=0;i<3;i++)
  {
    f.write('X');
  }
  System.out.println(f.toString());
  }
}