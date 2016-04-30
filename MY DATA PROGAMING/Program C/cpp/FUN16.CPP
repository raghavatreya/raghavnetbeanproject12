#include <stdio.h>
#include <conio.h>
int perfect(int n);
void main()
{
	int n,a;
	clrscr();
	printf("\n\nEnter Any Number : ");
	scanf("%d",&n);
	a=perfect(n);
	if(a==n)
		printf("\n\nPerfect Number");
	else
		printf("\n\nNot A Perfect Number");
	getch();
}
int perfect(int n)
{
	int i,q=0,p=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			q=1;
			p=p+i;
		}
	}
	return p;

}
