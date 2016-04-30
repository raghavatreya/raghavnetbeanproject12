import java.until.random; 
class handleerror
{
  public static void main(Stirng [] args) throws IOException
  {
    int a=0,b=0,c=0;
	Random r=new Random();
	int i;
	for(i=0;i<5;i++)
	{
	 try
	 {
	   b=r.nextInt();
	   c=r.nextInt();
	   System.out.println(b);
	   System.out.println(c);
	   a=12345/(b/c);
	 }
	catch(ArithmeticException e)
	{
	  System.out.println(e.getmessage());
	  a=0;
	}
	System.out.println("a : "+a);
	}
  }
}