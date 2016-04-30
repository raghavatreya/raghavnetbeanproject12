import java.io.*;
public class thr
 {
		DataInputStream in =new DataInputStream(System.in);  
		int i;
		String s;
		 int[] a=new int [3];
		 thr()
		 {
			for(i=0;i<3;i++)
				{
					a[i]=0;
				}
		 }
		void run() throws IOException
		{
			System.out.print("\n\nEnter Array Elements : ");
			for(i=0;i<3;i++)
			{ 
				s=in.readLine();
				a[i]=Integer.parseInt(s);
			}
		}
		public static void main(String [] args) throws IOException
		{
			thr y=new thr();
			Thread t=new Thread();
			t.start();
			try
			{
				t.sleep(10000);
			}
			catch(InterruptedException e)
			{
				System.out.print("Sant");
			}
		}
}
