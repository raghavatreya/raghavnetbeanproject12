class Callme
{
	synchronized static void call(String msg)
	{
		System.out.print("["+msg);
		try
		{
			Thread.sleep(1000);
		}
		catch(InterruptedException e)
		{
			System.out.println(e);
		}
  System.out.println("]");
 }
}
class Caller implements Runnable
{
 String msg;
 Callme target;
 Thread t;
		public Caller(Callme targ, String s)
		{
			target=targ;
			msg=s;
			t=new Thread(this);
			t.start();
		}
		public void run()
		{
			target.call(msg);
		}
}
public class synch6
{
 public static void main(String [] args)
 {
  Callme target1=new Callme();
  Callme target2=new Callme();
  Callme target3=new Callme();
  Caller ob1=new Caller(target1,"hello");
  Caller ob2=new Caller(target2,"synchronized");
  Caller ob3=new Caller(target3,"raghav");
  try
  {
   ob1.t.join();ob2.t.join();
   ob3.t.join();
  }
  catch(InterruptedException e)
  {
   System.out.println(e);
  }
 }
}