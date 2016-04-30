#include <stdio.h>
#include <conio.h>
void giriraj(int a);
void main()
{
	int a;
	clrscr();
	printf("\n\nEnter Any Number :");
	scanf("%d",&a);
	giriraj(a);
	getch();
}
void giriraj(int a)
{
	if(a%2==0)
		printf("\n\nNUMBER IS EVEN");
	else
		printf("\n\nNUMBER IS ODD");
}
