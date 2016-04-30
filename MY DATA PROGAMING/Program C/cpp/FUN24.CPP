#include <stdio.h>
#include <conio.h>
void tran(int a[3][3]);
void main()
{
	int a[3][3];
	int i,j;
	clrscr();
	printf("Enter Matrix Elements : ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n\n");
	}
	tran(a);
	getch();
}
void tran(int  a[3][3])
{
	int k=0,i,j;
	for(i=0;i<3;i++)
	{
		for(j=i;j<3;j++)
		{
			k=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=k;
		}
	}
	printf("\n\n\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n\n");
	}
}