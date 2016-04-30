import java.io.*;
abstract class shape
{
  double pucost=100;
  abstract double area();
  double cost()
  {
   return pucost*area();
  }
}
class triange extends shape 
{
  double s1,s2,s3;
  triange(double a,double b,double c)
  {
      s1=a;s2=b;s3=c;  
  }
  double area()
  { double s;
    s=(s1+s2+s3)/2;
    s=Math.sqrt(s*(s-s1)*(s-s2)*(s-s3));
	return s;
  }
}
class rectangle extends shape
{
  double s1,s2;
  rectangle(double a,double b)
  {
   s1=a;s2=b;
  }
  double area()
  {
   return s1*s2;
  }
}
class square extends shape
{
  double s;
  square(double s)
  {
    this.s=s;
  }
  double area()
  {
   return s*s;
  }
}
public class r
{
  public static void main(String [] args)
  {
   //shape s=new shape();
   shape s1=new triange(3,4,5);
   shape s2=new rectangle(3,4);
   shape s3=new square(3);
  // System.out.println(s.area());
   System.out.println(s1.area());
   System.out.println(s2.area());
   System.out.println(s3.area());
  // System.out.println(s.cost());
   System.out.println(s1.cost());
   System.out.println(s2.cost());
   System.out.println(s3.cost());
   
  }
} 