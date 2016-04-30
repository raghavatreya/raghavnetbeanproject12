public class fact
{
  public static void main(String [] args)
  {
     int i=1,k,j;
      j=Integer.parseInt(args[0]);
       k=args.length;
	   if(k==1)
	   {
	      for(;j>0;j--)
          {
             i=i*j;		
		  }
		 System.out.print("factorial of a number is " +i);
      	 }
        if(k>1)
        {
	      System.out.print("too many arguments");	
		}
      if(k==0)
       {
	     System.out.print(" factorial value is missing");
	   }	   
  }
}