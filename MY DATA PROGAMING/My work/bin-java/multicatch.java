public class multicatch
{
  public static void  main(String [] args)
  {
		try
		{
		  int a=args.length;  // what happen with this Argument 
		  System.out.println("a=  "+a);
         int b=42/a;
		 System.out.println("\n\n"+b+"\n\n");
         int c[]={ 1 };
         c[42]=99;
      		 
        }
         catch(ArithmeticException e)
        {
		 System.out.println("\n\n raghav "+e);
		 }
        catch(ArrayIndexOutOfBoundsException e)
        {
		  System.out.println("\n\n atreya"+e);
		}	
        System.out.println("troy");		
  }
}