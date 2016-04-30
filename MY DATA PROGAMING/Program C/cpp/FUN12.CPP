#include <stdio.h>
#include <conio.h>
int num(int n);
void main()
{
	long int n;
	clrscr();
	printf("\n\nEnter Any Number : ");
	scanf("%ld",&n);
	num(n);
	getch();
}
int num(int n)
{
	long int m=0;
	for(;n!=0;n=n/10)
	{
		m++;
	}
	printf("\n\nNo. Of Disits In the Given Number : %ld",m);
}
