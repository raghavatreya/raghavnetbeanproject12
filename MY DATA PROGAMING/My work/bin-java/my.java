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
public class my
{	
	public static void main(String[] args) throws IOException
	{
		sum m = new sum();
		m.setdata();
		m.sum();
	}
}