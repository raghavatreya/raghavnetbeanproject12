#include<conio.h>
#include<iostream.h>
class time
{    int hour,min;
     public:
	   void gettime()
	   {  cout<<"enter hour";
	      cin>>hour;
	      cout<<"enter min";
	      cin>>min;
	   }
	   void puttime()
	   {  cout<<hour<<":"<<min;

	   }
	   void sum(time ,time);
};
void time :: sum(time t1,time t2)
{ min=t1.min+t2.min;
 float ho=min/60;
  min=min%60;
 hour=ho+t1.hour+t2.hour;
}
void main()
{ clrscr();
   time t1,t2,t3;
   t1.gettime();
   t2.gettime();

   t3.sum(t1,t2);
   t3.puttime();
}