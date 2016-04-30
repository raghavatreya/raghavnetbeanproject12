class A
{
int x=1;
}
class B extends A 
{
 int y=2;
}
class C extends B
{
  int =3;
  void show()
  {
    System.out.println(x);
	System.out.println(y);
	System.out.println(super.x);
  }
}
class Super
{
   public static void main(String [] agrs)
  {
    C c =new c();
	c.show();
  }
}