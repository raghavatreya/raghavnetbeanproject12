#include <stdio.h>
#include <conio.h>
void main()
{
	int n,i,q=0,p=0;
	int *a;
	clrscr();
	a=&n;
	printf("\n\nEnter Any Number : ");
	scanf("%d",a);
	for(i=0;i<*a;i++)
	{
	       if(*a/i==0)
	       {
			q=1;
			p=p+i;
	       }
	}
	if(p==*a)
		printf("Perfect Number ");
	else
		printf("No Perfect Number ");
		getch();
}