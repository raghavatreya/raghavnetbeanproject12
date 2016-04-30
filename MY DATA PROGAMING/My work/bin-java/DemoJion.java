class NewThread implements Runnable
{
 String name;
 Thread t;
 NewThread(String name)
 {
  this.name=name;
  t=new Thread(this,this.name);
  //t.setPriority(+9);
  System.out.println("new  thread "+t);
  t.start();
 }
 
 public void run()
 {
	try
	{
   for(int i=0;i<=5;i++)
  {
   System.out.println(this.name +":"+i);
   Thread.sleep(1000);
  }
  }
  catch(InterruptedException e)
  {
	System.out.print("Exception Cough");
  }
 
 System.out.println("new  thread "+name+"	exit");
 }
 }
public class DemoJion
{
 public static void main(String [] args)
 {
   NewThread ob1= new NewThread("one");
   NewThread ob2= new NewThread("two");
    NewThread ob3= new NewThread("three");
	System.out.println("new  thread one is alive "+ob1.t.isAlive());
	System.out.println("new  thread two is alive "+ob1.t.isAlive());
	System.out.println("new  thread three is alive "+ob1.t.isAlive());
	try
	{System.out.println("waiting for finish this thread ");
	ob1.t.join();
	ob2.t.join();
	ob3.t.join();
	}
	catch(InterruptedException p)
	{System.out.println("new  msin thread is cautch  ");
	}
	System.out.println("new  thread one is alive "+ob1.t.isAlive());
	System.out.println("new  thread two is alive "+ob1.t.isAlive());
	System.out.println("new  thread three is alive "+ob1.t.isAlive());
	 System.out.println("new  thread main	exit");
 }
}