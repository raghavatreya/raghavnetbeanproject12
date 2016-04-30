#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i;
	int min;
	clrscr();
	printf("\n\nEnter Array Elements :");
	for(i=0;i<5;i++)
	     scanf("%d",&a[i]);
	for(i=0;i<5;i++)
	{
		if(a[i]<min)
			min=a[i];
	}
	printf("\n\nMin=%d",min);
getch();
}