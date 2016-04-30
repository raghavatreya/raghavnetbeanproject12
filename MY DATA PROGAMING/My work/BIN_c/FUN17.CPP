
#include <stdio.h>
#include <conio.h>
void num(int n);
void main()
{
	int n;
	clrscr();
	printf("\n\nEnter Any Number : ");
	scanf("%d",&n);
	num(n);
	getch();
}
void num(int n)
{
	if(n>0)
		printf("\n\nPositive Number");
	else if(n<0)
		printf("\n\nNegative Number");
	else
		printf("\n\nZero");
}