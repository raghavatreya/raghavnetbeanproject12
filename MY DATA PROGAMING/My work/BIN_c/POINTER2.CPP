#include <stdio.h>
#include <conio.h>
void main()
{
	int a,b,max=0,min=0;
	int *p,*q;
	clrscr();
	printf("\n\nEnter Two Numbers : ");
	scanf("%d%d",&a,&b);
	if(*p>*q)
	{
		max=*p;
		min=*q;
	}
	else
	{
		max=*q;
		min=*p;
	}
	printf("\n\n Max Is : %d",max);
	printf("\n\n Min Is : %d",min);
	getch();
}