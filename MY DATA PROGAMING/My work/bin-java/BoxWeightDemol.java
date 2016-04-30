import java.io.*;
class Box
{
   private double width,height,depth;
   double volume()
   {
     double vol =width*height*depth;
	 return vol;
   }
   Box(double w,double h,double d)
   {
     width=w;
	 height=h;
	 depth=d;
   }
   Box()
   {
     width=-1;height=-1;depth=-1;
   }
   Box(double len)
   {
     width=height=depth=len;
   }
   Box(Box ob)
   {
     width=ob.width;height=ob.height;depth=ob.depth;
   }
}
class BoxWeight extends Box
{
  double weight;
  BoxWeight(double w,double h,double d, double m)
  {
    super(w,h,d);
	weight=m;
  }
}
public class BoxWeightDemol
{
  public static void main(String [] args)
  {
    BoxWeight bwl=new BoxWeight(10,20,15,34.3);
	double vol;
	vol =bwl.volume();
	System.out.println(vol);
	System.out.println(bwl.weight);
	Box b1=bwl;
	vol=b1.volume();
	System.out.println(vol);
	BoxWeight bw2=(BoxWeight)b1;
	vol=bw2.volume();
	System.out.println(vol);
	System.out.println(bw2.weight);
	Box b2=new Box(5);
	BoxWeight bw3=(BoxWeight)b2;
	System.out.println(bw3.weight);
  }
}
