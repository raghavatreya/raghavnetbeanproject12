#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
	int *p[3],i,n,j,max=0,min;
	clrscr();
	printf("\n\nEnter The SIze OF Coloum : ");
	scanf("%d",&n);
	for(i=0;i<3;i++)
	{
		p[i]=(int*)malloc(n*sizeof(int));
		for(j=0;j<n;j++)
			scanf("%d",p[i]+j);
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<n;j++)
		{
			if(*(p[i]+j)>max)
			{
				max=*(p[i]+j);
			}
			if(*(p[i]+j)<min)
			{
				min=*(p[i]+j);
			}
		}
	}
	printf("\n\nMAX IS : %d",max);
	printf("\n\nMIN IS : %d",min);
getch();
}