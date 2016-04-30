public class power
{
       public static void main(String [] args)
	   {
	      int i=1,j;
		  j=args.length;
		  if(j==2)
		  {
		  int f,n;
		  f=Integer.parseInt(args[0]);
		  n=Integer.parseInt(args[1]);
		  for(;n>0;n--)
		     {
			   i=i*f;
			 }
			 System.out.print ("answer is :"+i);
		  }
		  if(j==1)
		  {
		      System.out.print("power value is missing");
		  }
		  if(j==0)
		  {
		     System.out.print("base and power are missng");
		  }
		  if(j>2)
		  {
		       System.out.print("too many argument");
		  }
	   }
}	   
	   