class NewThread implements Runnable
{
 String name;
 Thread t;
 NewThread()
 {
   name =threadname;
   t=new Thread(this,name);
   System.out.println("new thread"+t);
   t.start();
 }
 public void run()
 {
  try
  {
   for(int i=15;i>0;i--)
   {
     System.out.println(name+":"+i);
	 Thread.sleep(1000);
   }
  }
  catch(InterruptedException p)
  {
   System.out.println(p);
  }
  System.out.println(name+"exiting");
 }
}
public class  SuspendResume
{
 NewThread ob1=new NewThread("one");
 NewThread ob2=new NewThread("second");
 try
 {
  Thread.sleep(1000);
  ob1.t.suspend();
  System.out.println("suspending thread one");
  Thread.sleep(1000);
  ob1.t.resume();
  System.out.println("remuseing thread one");
  Thread.sleep(1000);
  ob1.t.suspend();
  System.out.println("suspending thread one");
  Thread.sleep(1000);
  ob1.t.resume();
  System.out.println("remuseing thread one");
 }
 catch(InterruptedException p)
 {
  System.out.println(p);
 }
 try
 {
  Syste.out.println("ewaiting for threads to finish");
  ob1.t.join();
  ob2.t.join();
 }
 catch(InterruptedException p)
 {
  System.out.println(p);
 }
}