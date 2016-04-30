#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i;
	int max=0,min;
	clrscr();
	printf("\n\nEnter Array Elements :");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	for(i=0;i<5;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	for(i=0;i<5;i++)
	{
		if(a[i]<min)
			min=a[i];
	}
	printf("\n\nMin=%d",min);
	printf("\n\nMax=%d",max);
getch();
}
