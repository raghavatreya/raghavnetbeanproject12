#include <iostream.h>
#include <conio.h>
void main()
{
	int a,b,c;
	int *p,*q;
	clrscr();
	p=&a;
	q=&b;
	cout<<"\n\nEnter Two Numbers : ";
	cin>>a>>b;
	cout<<"\n\nA = "<<*p;
	cout<<"\n\nB = "<<*q;
	c=*p+*q;
	cout<<"\n\nSum is : "<<c;
	getch();
}