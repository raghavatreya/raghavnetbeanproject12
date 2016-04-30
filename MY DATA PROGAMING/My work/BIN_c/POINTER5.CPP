#include <stdio.h>
#include <conio.h>
void main()
{
	int n,i,q=0;
	int *p;
	clrscr();
	p=&n;
	printf("\n\nEnter Any Number : ");
	scanf("%d",p);

	for(i=2;i<*p;i++)
	{
		if(*p%i==0)
			q=1;
	}
	if(q>0)
		printf("\n\nNot A Prime Number ");
	else
		printf("\n\nPrime Number ");
	getch();
}