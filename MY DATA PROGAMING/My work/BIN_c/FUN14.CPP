#include <stdio.h>
#include <conio.h>
int reverse(int n);
void main()
{
	int n,a;
	clrscr();
	printf("\n\nEnter Any Number : ");
	scanf("%d",&n);
	a=reverse(n);
	printf("\n\nReverse Of The Given Number : %d",a);
	getch();
}
int reverse(int n)
{
	int p=0,q=0;
	for(;n!=0;n=n/10)
	{
		q=n%10;
		p=p*10+q;
	}
	return p;

}