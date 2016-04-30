#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,n,k=0;
	clrscr();
	printf("\n\nEnter Array Elements :");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("\n\nEnter Search Element:");
	scanf("%d",&n);
	for(i=0;i<5;i++)
	{
		if(a[i]==n)
		       k++;
	}
	if(k>0)
		printf("Element Present In Array");
	else
		printf("Element Not Found");

getch();
}