#include <stdio.h>
#include <conio.h>
void main()
{
	int a[5],i,sum=0;
	int *p;
	clrscr();
	printf("\n\nEnter Array Elements : ");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	p=a;
	for(i=0;i<5;i++)
		sum=sum+*(p+i);
	printf("\n\nSUM IS :  %d",sum);
	getch();
}
