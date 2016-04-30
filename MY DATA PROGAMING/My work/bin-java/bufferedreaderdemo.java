import java.io.*;
public class  bufferedreaderdemo
{
 public static void main(String[] args) throws IOException
 {
  FileReader fr=new FileReader("test.dat");
  BufferedReader fr=new BufferedReader(fr);
   int c;
   boolean marked=false;
   while((c=f.read())!=-1)
   {
     switch(c)
	 {//16 point
	    case '&':
		         if(!marked)
				{
				   f.mark(32);
				   marked=true;
				   
				}	
                else
				{
				  marked=false;
				  f.reset();
				  System.out.println("&");
				}
				break;
		case ';':
		        if(marked)
				{
				  marked=false;
				  System.out.println(c);
				}
				else
				{
				  System.out.println((char)c);
				}
				break;
		case ' ':
                 if(marked)
				{
				  marked=false;
				  f.reset();
				  System.out.println("&");
				}				 
				else
				{
				  System.out.println((char)c);
				}
				break;
	 }
   }
  }
}