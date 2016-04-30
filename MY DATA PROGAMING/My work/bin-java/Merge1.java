import java.io.*;
public class Merge1  implements Runnable
{
public int G[]=new int [3];
int i;
Thread t;
public void run() 
 {
    for(i=0;i<3;i++)
	this.G[i]=0;
 }
void getdata()throws IOException
{
 String S;
   DataInputStream in =new DataInputStream(System.in);  
   for(i=0;i<3;i++)
   {
     System.out.println("Enter Element no"+i);
		S=in.readLine();
		 this.G[i]=Integer.parseInt(S);
   }
 }
 public static void main(String [] args)throws IOException
 {
 Thread p=new Thread();
 int x=0;
 p.start();
  System.out.println("///////////////////Enter first Array\\\\\\\\\\\\\\\\");
  Merge1 ob1=new Merge1();
  ob1.getdata();
  System.out.println("***********Enter Second Array*************");
   Merge1 ob2=new Merge1();
    ob2.getdata();
 int D[]=new int [6];
 for(int s=0;s<6;s++)
  {	if(s<3)
		{
		 D[s]=ob1.G[s];
		}
		else
		{			D[s]=ob2.G[s-3];
		}
	}  
	
	for(int k=0;k<5;k++)
	{	 
		for(int j=k+1;j<6;j++)
			{
				if(D[k]>D[j])
				{
					int y=D[k];
					D[k]=D[j];
					D[j]=y;
				}
			}
	}
	for(int s=0;s<6;s++)
	{ System.out.println("**********"+D[s]);}

}
}
