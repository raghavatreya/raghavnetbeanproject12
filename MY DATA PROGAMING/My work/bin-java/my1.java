import java.io.*;
class sum
{
	int a,b,c;
	String n;
	public void setdata()throws IOException
	{
		DataInputStream in = new DataInputStream(System.in);
		System.out.print("\n\nEnter First No. : ");
		n = in.readLine();
		a = Integer.parseInt(n);
		System.out.print("\n\nEnter Second No. : ");
		n = in.readLine();
		b = Integer.parseInt(n);
		
	}
	public void sum()
	{
		c = a+b;
		System.out.print("\n\nAddition is : "+c+"\n");
	}
}
public class my1
{	
	public static void main(String[] args) throws IOException
	{
		sum[] s = new sum[3];
		int i;
		/*int[] a = new int[3];
		int[][] a = new int[3][3];
		int[][][] a = new int[3][3][3];*/
		for(i=0;i<3;i++)
		{
			s[i] = new sum();
		}
		System.out.print("\n\nEnter Elements : ");
		for(i=0;i<3;i++)
		{
			s[i].setdata();
		}
		System.out.print("\n\nThree Elements Sum are : ");
		for(i=0;i<3;i++)
		{
			s[i].sum();
		}
	}
}