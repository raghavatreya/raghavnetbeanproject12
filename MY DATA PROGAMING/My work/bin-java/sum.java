public class sum
{
  public static void main(String []args)
  {
    int i,j,k,l,n;
	System.out.print("(i, j, k,l) \n");
	//System.out.print(","+j);
	//System.out.print(","+k);
	//System.out.print(")\n");
	for(i=0;i<10;i++)
	{
	  for(j=0;j<10;j++)
	  {
         for(k=0;k<10;k++)
         {
		   for(l=0;l<10;l++)
		   {
		     if(l>k  && k>j  && j>i)
			 {
			   if((i+j+k)==l)
			   {
			     System.out.print("("+i);
				 System.out.print(","+j);
	             System.out.print(","+k);
				 System.out.print(","+l);
	             System.out.print(")\n");
			   }
			   }
		   }
		 }		 
	  }
	}
  }
}