#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
	cout.fill('*');
	cout.setf(ios::left,ios::adjustfield);
	cout.width(4);
	cout<<"value";

	cout.setf(ios::right,ios::adjustfield);
	cout.width(15);
	cout<<"SQRT OF VALUE"<<"\n";

	cout.fill('.');
	cout.precision(4);
	cout.setf(ios::showpoint);
	cout.setf(ios::showpos);
	cout.setf(ios::fixed , ios::floatfield);
	int i;
	for(i=0;i<10;i++)
	{
	  cout.setf(ios::internal , ios::adjustfield);
	  cout.width(5);
	  cout<<i;

	  cout.setf(ios::right,ios::adjustfield);
	  cout.width(20);
	  cout<<sqrt(i)<<"\n\n";
	}
getch();
}