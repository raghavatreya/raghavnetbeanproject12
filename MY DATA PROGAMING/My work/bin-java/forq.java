class forq
{
  public static void main(String [] args)
  {
   int i,j,k;   
   for(i=0;i<5;i++)
   {

   for(j=0;j<5;j++)
	 {
	   if(i==0||i==4||j==0 ||j==4)
	     System.out.print("*");
        else
		{
		  System.out.print(" ");
		 }
		 }
	 System.out.print("\n");
   }
  }
}
