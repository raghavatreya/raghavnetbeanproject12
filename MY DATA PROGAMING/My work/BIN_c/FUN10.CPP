#include <stdio.h>
#include <conio.h>
int factorial(int n);
void main()
{
	int n;
	clrscr();
	printf("\n\nEnter Any Number : ");
	scanf("%d",&n);
	factorial(n);
	getch();
}
int factorial(int n)
{
	int f=1;
	for(;n>0;n--)
		f=f*n;
	printf("\n\nFactorial Of This Number Is : %d",f);
}
