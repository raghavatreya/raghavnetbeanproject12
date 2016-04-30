#include <stdio.h>
#include <conio.h>
int prime(int n);
void main()
{
	int n;
	clrscr();
	printf("\n\nEnter Any Number : ");
	scanf("%d",&n);
	prime(n);
	getch();
}
int prime(int n)
{
	int i=2,q=0;
	for(;i<n;i++)
	{
		if(n%i==0)
			q=1;
	}
	if(q>0)
		printf("Not a Prime Number ");
	else
		printf("Prime Number");
}