import java.io.*;
interface  shape
{
 // double pucost=100;
  double area();
   double calcost();
}
abstract class Abstractshape implements shape
{
   double pucost;
   Abstractshape(double pucost){this.pucost=pucost;}
   public double calcost(){return pucost*area();}
}
class triangle implements Abstractshape
{
  double s1,s2,s3;
  triangle(double a,double b,double c,double pucost)
  { super(pucost);
    s1=a;s2=b;s3=c;
  }  
  public double area()
  {
    double s=(s1+s2+s3)/2;
	return Math.sqrt(s*(s-s1)*(s-s2)*(s-s3));
  }
}
public class  shapetest
{
 public static void main(String [] args)
 { //triangle t1=new triangle(6,8,10);
    shape w =new triangle(3,4,5,100);
//	System.out.println(t1.area());
//  System.out.println(t1.pucost);
//   System.out.println(t1.calcost());
//   System.out.println(t1.calcost());
   System.out.println(w.area());
   System.out.println(w.pucost);
   System.out.println(w.calcost());
   System.out.println(w.calcost());
	
	}
}