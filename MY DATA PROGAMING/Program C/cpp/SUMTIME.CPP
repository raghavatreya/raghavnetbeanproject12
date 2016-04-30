#include<iostream.h>
#include<conio.h>
class time
{
	 static int count;
	 float hour,min;
	 public:
	 void setdat()
	 {
		cout<<"enter value   hour and minute ";
		cin>>hour>>min;
		min=hour*60+min;
		hour=0;
	 }
	 float getdata()
	 {
	      return(min);
	 }

	 friend void sum();



};
void sum(t1,t2)
{ float a=0.0,b=0.0;
  b=b+(t1.getdata()+t2.getdata())%60.0;
  a=a+(t1.getdata()+t2.getdata())/60.0;
  cout<<"\nTotal time is :\n"<<a<<":"<<b;
}
void main()
{ time t1,t2;
   clrscr();
   t1.setdata();
   t2.setdata();
   void sum();
   getch();

}

