#include <stdio.h>
#include <conio.h>
void main()
{
	int a,b;
	int e,s,m,d;
	int *p,*q;
	clrscr();
	p=&a;
	q=&b;
	printf("\n\nEnter Two Numbers : ");
	scanf("%d%d",p,q);
	e=*p+*q;
	s=*p-*q;
	m=*p * *q;
	d=*p / *q;
	printf("\n\n Addition Is : %d",e);
	printf("\n\n Subtration Is : %d",s);
	printf("\n\n Multiplication Is : %d",m);
	printf("\n\n Div. Is : %d",d);
	getch();
}
