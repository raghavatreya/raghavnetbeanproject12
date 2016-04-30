#include <stdio.h>
#include <conio.h>
int pallendrum(int n);
void main()
{
	int n,a,x;
	clrscr();
	printf("\n\nEnter Any Number : ");
	scanf("%d",&n);
	x=n;
	a=pallendrum(n);
	if(x==a)
		printf("\n\nPallendrum Number");
	else
		printf("\n\nNot A Pallendrum Number");
	getch();
}
int pallendrum(int n)
{
	int p=0,q=0;

	for(;n!=0;n=n/10)
	{
		q=n%10;
		p=p*10+q;
	}
	return p;

}