#include <stdio.h>
#include <conio.h>
void main()
{
	int a[2][3],b[3][4];
	int c[2][4];
	int i,j,k;
	clrscr();
	printf("\n\nEnter First Matrix Elements :");
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	printf("\n\nEnter Second Matrix Elements :");
	for(j=0;j<3;j++)
		for(k=0;k<4;k++)
			scanf("%d",&b[j][k]);
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n\n");
	}
	for(j=0;j<3;j++)
	{
		for(k=0;k<4;k++)
		{
			printf("\t%d",b[j][k]);
		}
		printf("\n\n");
	}
getch();
}
