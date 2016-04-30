import java.io.*;
pubic class jaboep1
{
  public static void main(String [] args)
  {
    boxweight bwl=new boxweight(10,20,15,34.3);
	double vol;
	vol =bwl.volume();
	System.out.println(vol);
	System.out.println(bwl.weight);
	box b1=bwl;
	vol=b1.volume();
	
  }

}
class box
{
   private double witdh,height,depth;
   double volume()
   {
     double vol =width*height*depth;
	 return vol;
   }
   box(double w,double h,double d)
   {
     width=w;
	 height=h;
	 depth=d;
   }
   box()
   {
     width=-1,height=-1,depth=-1;
   }
   box(double len)
   {
    width=height=depth=len;
   }
   box(box ob)
   {
     width=ob.width,height=ob.height,depth=ob.depth;
   }
}
class boxweight extends box
{
  double weight;
  box weight(double w,double h,double d, double m)
  {
    super(w,h,d);
	weight=m;
  }
}