#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,s=0;
	float avg;
	clrscr();
	printf("\n\nEnter Array Elements :");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("\n\nArray Elements Are \n\n");
	for(i=0;i<5;i++)
	{
	      s=s+a[i];
	}
	avg=(s/5);
	printf("\n\nAverage is :%.2f",avg);
getch();
}