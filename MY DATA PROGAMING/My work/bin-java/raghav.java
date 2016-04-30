class A
{
int x=1;
}
class B extends A 
{
 int y=2;
 int x=4;
 int getSuperX()
 {
   return super.x; 
 }
}
class C extends B
{
  int x =3;
  void show()
  {
    System.out.println(x);
	System.out.println(y);
    System.out.println(getSuperX());
	System.out.println(super.x);
  }
}
class raghav
{
   public static void main(String [] agrs)
  {
    C c =new C();
	c.show();
  }
}