#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
	int a[5],i,n;
	int *p;
	p=a;
	clrscr();
	printf("\n\nEnter The Array Elements : ");
	for(i=0;i<5;i++)
		scanf("%d",p+i);
	for(i=4;i>=0;i--)
	{
		printf("%d\t",*(p+i));
	}
getch();
}