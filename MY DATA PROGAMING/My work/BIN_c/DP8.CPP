#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
	int *p[3],*q[3],*r[3],i,n,j,k=0,sum=0;
	clrscr();
	printf("\n\nEnter The Size Of Coloums in first matrix : ");
	scanf("%d",&n);
	if(n==3)
	{
	for(i=0;i<3;i++)
	{
		p[i]=(int *)malloc(n*sizeof(int));
		for(j=0;j<n;j++)
			scanf("%d",p[i]+j);

	}
	printf("\n\nEnter The Size OF coloums in second matrix : ");
	scanf("%d",&n);
	for(i=0;i<3;i++)
	{
		q[i]=(int *)malloc(n*sizeof(int));
		for(j=0;j<n;j++)
			scanf("%d",q[i]+j);
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<n;j++)
		{
			sum=0;
			for(k=0;k<n;k++)
			{
				sum=sum+*(p[i]+k)* *(q[k]+j);
			}
			*(r[i]+j)=sum;
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",*(r[i]+j));
		}
		printf("\n\n");
	}
	}
	else
	printf("Wrong");
getch();
}

