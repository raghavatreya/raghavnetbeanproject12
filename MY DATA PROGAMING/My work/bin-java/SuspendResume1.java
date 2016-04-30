class NewThread implements Runnable
{
 String name;
 Thread t;
 boolean suspendflag;
 NewThread(String threadname )
 {
   name =threadname;
   t=new Thread(this,name);
   System.out.println("new thread"+t);
   suspendflag=false;
   t.start();
 }
 void mysuspend()
 {
  suspendflag=true;
 }
 synchronized void myresume()
 {
  suspendflag=false;
 }
 public void run()
 {
  try
  {
   for(int i=15;i>0;i--)
   {
     System.out.println(name+":"+i);
	 Thread.sleep(1000);
	 synchronized(this)
	 {
	  while(suspendflag)
	  {
	    wait();
	  }
	 }
   }
  }
  catch(InterruptedException p)
  {
   System.out.println(p);
  }
  System.out.println(name+"exiting");
 }
}
public class  SuspendResume1
{
 public static void main(String [] args)
 {NewThread ob1=new NewThread("one");
 NewThread ob2=new NewThread("second");
 try
 {
  Thread.sleep(1000);
 ob1.mysuspend();
  System.out.println("suspending thread one");
  Thread.sleep(1000);
  ob1.myresume();
  System.out.println("remuseing thread one");
  Thread.sleep(1000);
  ob1.mysuspend();
  System.out.println("suspending thread one");
  Thread.sleep(1000);
  ob1.myresume();
  System.out.println("remuseing thread one");
 }
 catch(InterruptedException p)
 {
  System.out.println(p);
 }
 try
 {
  System.out.println("ewaiting for threads to finish");
  ob1.t.join();
  ob2.t.join();
 }
 catch(InterruptedException p)
 {
  System.out.println(p);
 }
 System.out.println("main thread exiting");
}
}