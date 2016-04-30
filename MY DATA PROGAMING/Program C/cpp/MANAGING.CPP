#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class raghav
{  public:
     char name[21];
     int code;
     double cost;
};
void main()
{
clrscr();
  int i;
  raghav a[2];
  for(i=0;i<2;i++)
  {  cout<<"Enter Name   : ";
     cin>>a[i].name;
     cout<<"Enter Code   : ";
     cin>>a[i].code;
     cout<<"Enter Cost   : ";
     cin>>a[i].cost;
     clrscr();
	if(i==1)
	{  cout<<"\n\n";
	   cout.width(10);
	   cout.setf(ios::left , ios::adjustfield);
	   cout.fill('-');
	   cout<<"NAME";

	   cout.width(10);
	   cout.setf(ios::left , ios::adjustfield);
	   cout.fill('-');
	   cout<<"CODE";
	   //cout.fill('-');

	   cout.width(10);
	   cout.setf(ios::right , ios::adjustfield);
	   cout.fill('-');
	   cout<<"COST"<<"\n";
		 for(i=0;i<2;i++)
		{
			cout.width(10);
			cout.setf(ios::left , ios::adjustfield);
			cout.fill('-');
			cout<<a[i].name;

			cout.width(10);
			cout.setf(ios::left , ios::adjustfield);
			cout.fill('-');
			cout<<a[i].code;

			cout.width(10);
			cout.precision(2);
			cout.setf(ios::right , ios::adjustfield);
			cout.setf(ios::scientific , ios::adjustfield);
			cout<<a[i].cost;
			cout<<"\n";
		}
	}
   cout<<"\n";
  }
getch();
}