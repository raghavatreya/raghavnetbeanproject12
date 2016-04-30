#include<iostream.h>
#include<conio.h>
class raghav
{ float a,b;
  public:
      friend void sum(raghav ,raghav);

       raghav()
       {  a=h;
	  b=s;
       }

};
void sum(raghav t,raghav y)
 {  float i=t.a+y.a;
    float j=t.b+y.b;

    cout<<"\n\nsum of enter complex number is :"<<i<<" + j "<<j;
 }
void main()
{  clrscr();
   raghav i(1.2,3.4);
   raghav j(5.6,7.3);
   sum(i,j);
   cout<<"\n\n**********************************";

  raghav p=raghav (5,5);
  raghav q=raghav (6,6);
   sum(p,q);
}