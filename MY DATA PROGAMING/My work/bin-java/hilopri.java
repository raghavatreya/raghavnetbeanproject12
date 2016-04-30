class clicker implements Runnable
{
 long click=0;
 Thread t;
 private volatile boolean running =true;
 public clicker( int p)
 {
   t=new Thread(this);
   t.setPriority(p);
 }
 public void run()
 {
  while(running)
  {
   click++;
  }
 }
 public void stop()
 {
  running=false;
 }
 public void start()
 {
  t.start();
 }
}
public class hilopri
{
 public static void main(String [] args)
 {
  Thread.currentThread().setPriority(Thread.MAX_PRIORITY);
  clicker hi= new clicker(Thread.NORM_PRIORITY+2);
  clicker lo =new clicker(Thread.NORM_PRIORITY-2);
  lo.start();
  hi.start();
  try
	{
	  Thread.sleep(1000);
	}
	catch(InterruptedException p)
	{
	  System.out.println("main is exception");
	}
	lo.stop();
	hi.stop();
	try
	{
	  hi.t.join();
	  lo.t.join();
	}
	catch(InterruptedException p)
	{
	  System.out.println("main is exception");
	}
	System.out.println("low priority  thread "+lo.click);
	System.out.println("high priority thread"+hi.click);
	System.out.println("main  thread exit");

 }
}
