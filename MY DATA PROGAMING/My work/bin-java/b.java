import java.io.*;
class A
{
  protected int x=10;
  public void m1()
  {
    System.out.println("m1 of A");
  }
}
class B extends A
{
  int x=5;
  public void m1()
  {
    System.out.println("m2() of B");
  }
  public void m2()
  {
   System.out.println(super.x);
   System.out.println(x);
   m1();
   super.m1();
  }
  public static void main(String [] args)
  {
    B b=new B();
	b.m2();
  }
}