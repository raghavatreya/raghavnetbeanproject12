#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
	int n,*p,i;
	clrscr();
	printf("\n\nEnter The Size of an Array : ");
	scanf("%d",&n);
	p = (int *)malloc(n*sizeof(int));
	printf("\n\nEnter Array Elements : ");
	for(i=0;i<n;i++)
		scanf("%d",p+i);
	printf("\n\nArray of Elements Are \n\n");
	for(i=0;i<n;i++)
		printf("\n\n%d",*(p+i));
getch();
}