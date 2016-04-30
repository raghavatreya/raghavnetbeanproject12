class callme
{
 void call (String [] args)
 {
  System.out.println("["+msg);
  try
  {
   Thread.sleep(1000);
  }
  catch(InterruptedException p)
  {
   System.out.println("Exception caught");
  }
  System.out.println("]");
 }
}
public class Caller implements Runnable
{
 String msg;
 Callme target;
 Thread t;
 public caller(Callme targ,String s)
 {
  target =targ;
  msg=s;
  t=new Thread(this);
  t.start();
  }
  public void run()
  {
   target.call(msg);
  }
  class Synch
  {
   public static void main(String[] args)
   {
    Callme target=new Callme();
	Callme ob1=new Callme(target,"hello");
	try
	{
	 ob1.t.join();
	}
	catch(InterruptedException p)
	{
	 System.out.println("interrupted");
	}
   }
  }
 }
 
 
