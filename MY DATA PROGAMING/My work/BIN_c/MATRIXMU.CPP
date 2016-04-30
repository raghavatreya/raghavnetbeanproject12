#include <stdio.h>
#include <conio.h>
void main()
{
	int a[3][3],b[3][3],c[3][3];
	int i,j,k;
	clrscr();
	printf("\n\nEnter First Matrix Elements :");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	printf("\n\nEnter Second Matrix Elements :");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&b[i][j]);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{ int sum=0;
			for(k=0;k<3;k++)
			{
			    sum=sum+a[i][k]*b[k][j];
			}
			c[i][j]=sum;
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",c[i][j]);
		}
		printf("\n\n");
	}
getch();
}