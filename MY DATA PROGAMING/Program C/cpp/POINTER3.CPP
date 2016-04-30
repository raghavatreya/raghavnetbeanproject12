#include <stdio.h>
#include <conio.h>
void main()
{
	int a;
	int *p;
	clrscr();
	printf("\n\nEnter Any Number  : ");
	scanf("%d",&a);
	p=&a;
	printf("\n\nValue of a : %d",a);
	printf("\n\nValue Of *p : %d",*p);
	printf("\n\nValue Of &a : %x",&a);
	printf("\n\nValue Of &p : %x",&p);
	printf("\n\nValue Of *(&a) : %d",*(&a));
	getch();
}