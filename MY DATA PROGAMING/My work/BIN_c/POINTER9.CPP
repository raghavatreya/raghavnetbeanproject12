#include <stdio.h>
#include <conio.h>
void main()
{
	int a[5],i;
	int n,r,*p,l=0;
	clrscr();
	p=a;
	printf("\n\nEnter Array Elements : ");
	for(i=0;i<5;i++)
		scanf("%d",p+i);
	printf("\n\nEnter Searching Element : ");
	scanf("%d",&n);
	printf("\n\nEnter Replacing Element : ");
	scanf("%d",&r);

	for(i=0;i<5;i++)
	{
		if(*(p+i)==n)
			*(p+i)=r ;
	}
	for(i=0;i<5;i++)
		printf("%d\t",*(p+i));
getch();
}