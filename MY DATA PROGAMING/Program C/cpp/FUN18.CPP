#include <stdio.h>
#include <conio.h>
int num(int a[]);
void main()
{
	int a[6];
	int i;
	clrscr();
	printf("\n\nEnter Array Elements : ");
	for(i=0;i<6;i++)
		scanf("%d",&a[i]);
	num(a);
	getch();
}
int num(int a[])
{
	int i,p=0,n=0,z=0;
	for(i=0;i<6;i++)
	{
		if(a[i] > 0)
			p++;
		else if(a[i] < 0)
			n++;
		else
			z++;
	}
	printf("\n\nNumber Of Positive Number Is : %d",p);
	printf("\n\nNumber Of Negative Number Is : %d",n);
	printf("\n\nNumber Of Zero Is : %d",z);
}
