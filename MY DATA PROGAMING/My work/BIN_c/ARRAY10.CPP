#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,n,k;
	clrscr();
	printf("\n\nEnter Array Elements :");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("\n\nEnter Search Element :");
	scanf("%d",&n);
	printf("\n\nEnter Replace Element :");
	scanf("%d",&k);
	for(i=0;i<5;i++)
		{if(a[i]==n)
			a[i]=k;
		}
	for(i=0;i<5;i++)
	printf("\n\nArray Elements Are :%d",a[i]);
getch();
}