#include <stdio.h>
#include <conio.h>
void main()
{
	int a[5],i;
	int *p,max=0;
	clrscr();
	p=a;
	printf("\n\nEnter Array Elements : ");
	for(i=0;i<5;i++)
		scanf("%d",p+i);
	p=a;
	for(i=0;i<5;i++)
	{
		if(*(p+i)>max)
			max=*(p+i);
	}
	printf("\n\nMax Is : %d",max);
getch();
}

