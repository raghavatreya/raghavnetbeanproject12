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
 
public class multidemo
 {
  public static void main(String [] args)
  {
   new NewThread("one");
   new NewThread("two");
    new NewThread("three");
	try
	{
	  Thread.sleep(1000);
	}
	catch(InterruptedException p)
	{
	  System.out.println("main is exception");
	}
	System.out.println("main  thread exit");
  }
 }