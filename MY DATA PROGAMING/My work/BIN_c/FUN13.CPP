#include <stdio.h>
#include <conio.h>
int armstrong(int n);
void main()
{
	int n,x,c;

	clrscr();
	printf("\n\nEnter Any Number : ");
	scanf("%d",&n);
        x=n;
	c=armstrong(n);
	if(x==c)
		printf("\n\nArmstrong Number ");
	else
		printf("\n\nNot a Armstrong Number ");
	getch();
}
int armstrong(int n)
{
	int m=0,p=0,s=0;

	for(;n!=0;n=n/10)
	{
		m=n%10;
		p=m*m*m;
		s=s+p;
	}
	return s;

}
