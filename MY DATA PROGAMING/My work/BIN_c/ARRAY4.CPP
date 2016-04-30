#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i;
	int max=0;
	clrscr();
	printf("\n\nEnter Array Elements :");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("\n\nArray Elements Are \n\n");
	for(i=0;i<5;i++)
		if(a[i]>max)
			max=a[i];
	printf("\n\nMax=%d",max);
getch();
}