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
  BoxWeight(BoxWeight ob)
  {
    super(ob);weight=ob.weight;
  }
  BoxWeight(double w,double h,double d, double m)
  {
    super(w,h,d);
	weight=m;
  }
  BoxWeight()
  {
    super();
	weight =-1;
  }
  BoxWeight (double len,double m)
  {
    super(len);
	weight = m;
  }
}
class Shipment extends BoxWeight
{
  double cost;
  Shipment(Shipment ob)
  {
    super(ob);
	cost=ob.cost;
  }
  Shipment(double w, double h,double d,double m, double c)
  {
    super(w,h,d,m);
	cost= c;
  }
  Shipment(double len,double m,double c)
  {
    super(len,m);
	cost =c;
  }
  Shipment()
  {
    super();
	cost =-1;
  }
}
public class ShipmentDemo
{
  public static void main(String [] args)
  {
    Shipment s=new Shipment(10,20,15,34.5,1000);
     double vol=s.volume();
	 System.out.println(vol);
	 System.out.println(s.weight);
	 System.out.println(s.cost);
	}
}
