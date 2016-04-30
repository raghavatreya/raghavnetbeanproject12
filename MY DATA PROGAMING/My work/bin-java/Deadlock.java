class A
{
 synchronized void foo(B b)
 {
  String name =Thread.currentThread().getName();
  System.out.println(name+"entered A.foo");
  try
  {
   Thread.sleep(1000);
  }
  catch(InterruptedException p)
  {
   System.out.println("A is interrupted");
  }
  System.out.println(name+"try to call B.last()");
  b.last();
 }
 synchronized void last()
 {
   System.out.println("Inside A.last()");
 }
}
class B
{
 synchronized void bar(A a)
 {
  String name =Thread.currentThread().getName();
  System.out.println(name+"entered A.foo");
  try
  {
   Thread.sleep(1000);
  }
  catch(InterruptedException p)
  {
   System.out.println("B is interrupted");
  }
  System.out.println(name+"try to call A.last()");
  a.last();
 }
 synchronized void last()
 {
   System.out.println("Inside B.last()");
 }
}
class Deadlock implements Runnable
{
 A a=new A();
 B b=new B();
 Deadlock()
 {
  Thread.currentThread().setName("main thread");
  Thread t=new Thread(this,"racing thread");
  t.start();
  a.foo(b);
  System.out.println("back in main thread");
 }
 public void run()
 {
  b.bar(a);
  System.out.println("back in other thread");
 }
 public static void main(String [] args)
 {
	new Deadlock();
 }
}