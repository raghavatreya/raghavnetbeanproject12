#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i;
	int p=0,n=0,z=0;
	clrscr();
	printf("\n\nEnter Array Elements :");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	for(i=0;i<5;i++)
	{
		if(a[i]>0)
		p++;
		else if(a[i]<0)
		n++;
		else
		z++;
	}
	printf("\nPositive no.=%d",p);
	printf("\n-ive no.=%d",n);
	printf("\nZero no.=%d",z);
getch();
}