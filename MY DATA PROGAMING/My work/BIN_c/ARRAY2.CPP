#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i;
	clrscr();
	printf("\n\nEnter Array Elements :");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("\n\nArray Elements Are :");
	for(i=0;i<5;i++)
		printf("\n\n%d Elements is At %d position and at %x address",a[i],i,&a[i]);
getch();
}