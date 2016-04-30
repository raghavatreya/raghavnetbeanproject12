#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i;
	int e=0,o=0;
	clrscr();
	printf("\n\nEnter Array Elements :");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
		e++;
		else
		o++;
	}
	printf("\n\nEven No.=%d",e);
	printf("\n\nOdd No.=%d",o);
getch();
}