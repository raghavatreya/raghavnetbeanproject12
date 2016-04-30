class X implements Runnable
{
 public void run()
 {
  for(int i=1;i<5;i++)
  {
   System.out.println("Child Thread "+i);
  }
  System.out.println("exiting child thread");
 }
} 
class RunnableTest
{
 public static void main(String [] args)
 {
  X Rubnable =new Rubnable();
  Thread ct=new Thread(runnable);ct.start();
  System.out.println("exiting main thread");
 }
}
