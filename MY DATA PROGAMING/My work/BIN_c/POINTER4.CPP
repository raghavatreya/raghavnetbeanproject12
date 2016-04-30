#include <stdio.h>
#include <conio.h>
void main()
{
	int n,a=0,b=0,x;
	int *p;
	clrscr();
	printf("\n\nEnter Any Number : ");
	scanf("%d",&n);
	p=&n;
	x=n;
	while(*p!=0)
	{
		b=*p%10;
		a=a*10+b;
		*p=*p/10;
	}
	if(x==a)
		printf("\n\nPallendrum");
	else
		printf("\n\nNot Pallendrum");
	getch();

}
