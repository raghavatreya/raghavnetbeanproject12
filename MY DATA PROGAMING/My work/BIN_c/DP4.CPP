#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
	int *p[3],i,n,j,sum=0;
	clrscr();
	printf("\n\nEnter The Size Of Coloums : ");
	scanf("%d",&n);
	for(i=0;i<3;i++)
	{
		p[i]=(int *)malloc(n*sizeof(int));
		for(j=0;j<n;j++)
			scanf("%d",p[i]+j);

	}
	for(j=0;j<n;j++)
	{
		for(i=0;i<3;i++)
		{
			sum=sum+*(p[i]+j);
		}
		printf("\n\nSUM IS : %d",sum);
		sum=0;
	}
getch();
}
