#include <stdio.h>
#include <conio.h>
int square(int n);
void main()
{
	int n;
	clrscr();
	printf("\n\nEnter Any Number : ");
	scanf("%d",&n);
	square(n);
	getch();
}
int square(int n)
{
	int k;
	k=n*n;
	printf("\n\nSquare Of This Number Is : %d",k);
}