#include<iostream.h>
#include<conio.h>
class db;
class dm
{
	int a,b;
	float c,m;
	public:
	void setdata()
	 {
		 cout<<"enter value of distance in meter :";
		 cin>>a;
		 cout<<"enter value of distance in cm :";
		 cin>>b;
		 m=(a/.3048);
		 c=(b/2.54);
	 }
	void getdata()
	{
		 cout<<"value of distance foot :"<<m<<" inches "<<m;
	}
	 friend void sum(dm,db);
	 friend void sum1(dm,db);

};
class db
{
	 int d,f;
	 float k,l;
	 public:
	    void setdata()
	    {  cout<<"enter value of distance in foot";
	       cin>>d;
	       cout<<"enter distance in inches";
	       cin>>f;
	       k=(d*0.3048);
	       l=(f*2.54);
	    }
	    void getdata()
	    {
	     cout<<"value of distance in meter and centimeter :";
	     cout<<k<<"meter and"<<l<<"centimeter";

	    }
	    friend void sum(dm,db);
	    friend void sum1(dm,db);
};
void sum(dm w,db q)
{
	float suM=0,suC=0;
	suM=w.a+q.k;
	suC=w.b+q.l;
	cout<<"Result is :	"<<suM<<"Meter and "<<suC<<"Centimeter";

}
 void sum1(dm w,db q)
{
	float suM=0,suC=0;
	suM=w.m+q.d;
	suC=w.c+q.f;
	cout<<"Result is :	"<<suM<<"foot and "<<suC<<"inches";

}


void main()
{
	clrscr();
	dm r;
	db e;
	r.setdata();
	e.setdata();
	sum(r,e);
	sum1(r,e);
	getch();
}