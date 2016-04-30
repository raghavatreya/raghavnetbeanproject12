import java.io.*;
class fileinputstreamdemo
{
  static void p(String s)
  {
   System.out.println(s);
  }
  public static void main(String [] args) throws IOException
  {
    int size;
	InputStream f=new FileInputStream("fileinputstreamdemo.java");
	p("total available bytes "+(size=f.available()));
	
	int n=size/40;
	p("first"+n+"bytes of files read at one time");
	for(int i=0;i<n;i++)
	{
	  p((char)f.read());
	  
	}
  }
}