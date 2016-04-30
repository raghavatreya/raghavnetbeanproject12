#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,n,l=0;
	clrscr();
	printf("\n\nEnter Array Elements :");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("\n\nEnter Search Element :");
	scanf("%d",&n);
	for(i=0;i<5;i++)
	{
		if(n==a[i])
		l++;
	}
	printf("\n\nOccurance :%d",l);
getch();
}