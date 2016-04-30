import java.io.*;
public class pascaltriangle
{
	public static void main(String [] args)throws IOException
	{
		String s;
		Double x,y;
		System.out.println("********pascaltriangle**************"); 
		System.out.println("Enter a number ->"); 
			DataInputStream in=new DataInputStream(System.in);
			s=in.readLine();
		int j,g=Integer.parseInt(s);
		for(int q=0;q<g;q++)
			{ 
				for(int d=g;d>q;d--)
					{
						System.out.print("  "); 
					}
				for(j=0;j<=q;j++)
				{		y=fact(q,j);
						s=y.toString();
						int p;
						p=s.length();
						s= s.substring(0, p-2);
						if(p>5)
						{	System.out.print(s+" "); }
						else if(p>4)
						{	System.out.print(s+"  "); }
						else
						{	System.out.print(s+"   "); }
				}
				System.out.println();
			}
}
	static double fact(int r,int z)
	{
		int u=r-z;
		double l=1.0,m=1.0,n=1.0;
			for(int i=1;i<=r;i++)
				{
					l=l*i;
				}
			for(int i=1;i<=z;i++)
			{
				m=m*i;
			}
			for(int i=1;i<=u;i++)
			{
				n=n*i;
			}
			l=l/(n*m);
		return l;
	} 
}