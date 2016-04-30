#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
	int i;
	cout<<"precision set to 3 digit \n\n";
	cout.precision(2);
	cout.width(10);
	cout<<"value";
	cout<<"sqrt of value";
		for(i=0;i<11;i++)
		{
			 cout.width(8);
			 cout<<"\n\n";
			 cout.width(13);
			 cout<<sqrt(i)<<"\n\n";
		}
getch();
}