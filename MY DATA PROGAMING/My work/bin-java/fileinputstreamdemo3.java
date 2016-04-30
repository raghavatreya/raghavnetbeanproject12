import java.io.*;
public  class fileinputstreamdemo3
{
 public static void main(String [] args)throws IOException
 {
   int size;
   InputStream f= new FileInputStream("fileinputstreamdemo.java");
   System.out.println("total file bytes "+(size=f.available()));
  System.out.println("raghav"); 
  int i,n=size/40;
  for(i=0;i<n;i++)
  {
   System.out.println( (char)f.read());
   
  }
  FileInputStream fin;
  FileOutputStream fout;
	try
	{
	  fin=new FileInputStream(args[0]);
	  fout=new FileInputStream(args[1]);
	}
	catch(FileNotFoundException e)
	{
	  System.out.println(e);
	}
	catch(ArrayIndexOutOfBoundsException e)
	{
      System.out.println("uasa"+e);	
 	}
 }
} 