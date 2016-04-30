import java.io.*;
class Box
{
  private double width,height,depth;
 public double volume()
  {
    double vol=width*height*depth;
	return vol;
  }  
  public Box(double width,double height,double depth)
  {
    this.width=width;
	this.height=height;
	this.depth=depth;
  }
  public Box()
  {
    width=height=depth=-1;
  }
  public Box(double len)
  {
    width=depth=height=len;
  }
  public Box(Box ob)
  {
    width=ob.width;
    height=ob.height;
	depth=ob.depth;
  }
}
class BoxWeight extends Box
{
  double weight;
  BoxWeight(BoxWeight ob)
  {
    super(ob);
	weight=ob.weight;
  }
  BoxWeight(double w,double h,double d,double m)
  {
    super(w,h,d);
	weight=m;
  }
  BoxWeight()
  {
   super();
   weight=-1;
  }
  BoxWeight(double len,double m)
  {
    super(len);
	weight=m;
  }
}
class shipment extends BoxWeight
{
  double cost;
  shipment(shipment ob)
  {
   super(ob);cost=ob.cost;
  }
  shipment(double d,double w,double h,double m,double c)
  {
    super(w,h,d,m);
	cost=c;
  }
  shipment(double len,double m,double c)
  {
    super(len,m); cost=c;
  }
}
public class BoxWeightdemo2
{
  public static void main(String [] args)
  {
   shipment s=new shipment(10,20,15,34.3,1000);
  // BoxWeight bw[2]=new BoxWeight(2,3,4,14.2);
  // BoxWeight bw[3]=new BoxWeight();
  // BoxWeight bw[4]=new BoxWeight(3,5);
  // BoxWeight bw[5]=new BoxWeight(bw1);
   //BoxWeight bwi=new BoxWeight 
  double vol=s.volume();
 // for(int i=1;i<6;i++)
  //{   
    //vol=bw[i].volume();
  //  System.out.println(vol);
   // System.out.println(bw[i].weight);	
  //}//
  System.out.println(vol);
  System.out.println(s.weight);
  System.out.println(s.cost);
   // System.out.println(bw[i].weight);	
   
 
   }
}