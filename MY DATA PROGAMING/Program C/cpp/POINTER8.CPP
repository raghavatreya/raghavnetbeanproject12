#include <stdio.h>
#include <conio.h>
void main()
{
	int a[5],i;
	int n,*p,l=0;

	clrscr();

	printf("\n\nEnter Array Elements : ");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("\n\nEnter Searching Elements : ");
	scanf("%d",&n);
	p=a;
	for(i=0;i<5;i++)
	{
		if(*(p+i)==n)
			l++;
	}
	if(l>0)
		printf("\n\nElement Found ");
	else
		printf("\n\nElement Not Found ");
getch();
}