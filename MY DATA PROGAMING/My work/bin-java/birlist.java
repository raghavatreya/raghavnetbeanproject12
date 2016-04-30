import java.io.*;
public class birlist
{
	public static void main(String [] args) throws IOException
	{
      String dirname="/java";
	   File f=new File(dirname);
	   if(f.isDirectory())
	   {
			System.out.println(" Directory is "+dirname);
	        String g[]=f.list();
			for(int i=0;i<g.length;i++)
			{
			   File k=new File(dirname+"/"+g[i]);
				if(k.isDirectory())
				{
				  System.out.println(" Directory is "+g[i]);
				}
				else
				{
					System.out.println(" Directory is not "+g[i]);
				}
			}
	   }
	   else 
	   {
			System.out.println(" not a Directory "+dirname);
	   }
	}
}