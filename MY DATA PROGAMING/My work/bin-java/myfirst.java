public class myfirst
{
	public static void main(String[] args)
	{
		int a=10,b=0,c;
		try
		{
			c=a/b;   //WHERE exception may be occur;
		}
		catch(Exception ex)
		{   // how to handle exception;
			//System.out.print(ex.toString());
			System.out.print("\n\nRaghav"+ex);
		}
		finally
		{
			// final work we want to execute        
	        System.out.print("\n\nResult is : ");
		}
	}
	
}
