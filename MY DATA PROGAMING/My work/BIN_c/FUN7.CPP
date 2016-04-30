#include <stdio.h>
#include <conio.h>
void number(int n);
void main()
{
	int n;
	clrscr();
	printf("Enter Any Number :");
	scanf("%d",&n);
	number(n);
	getch();
}
void number(int n)
{
	int i,a=0,b=1,c=0;
	for(i=1;i<=n;i++)
	{
		c=a+b;
		a=b;b=c;
		printf("%d\t",c);
	}
}
