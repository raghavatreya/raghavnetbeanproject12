#include<iostream.h>
#include<conio.h>
class raghav
{  int a,b,j;
   public:
	  raghav()
	  {  cout<<"default constructor";
	  j=0;
	  cout<<"\n\n\a"<<j;
	  }
	  raghav(int q)
	  {  a=q;
	   cout<<"\n\n\asingle contructor";
	   cout<<a;
	  }
	  raghav(int a,int b)
	  { cout<<"\n\n\amulti constructor"<<a<<"\n"<<b;
	  }
};
void main()
{  clrscr();
  raghav a,b(2,3),d(2);
   getch();
}