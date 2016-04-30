#include <stdio.h>
#include <conio.h>
void main()
{
	int a[3][3];
	int i,j,sum=0;
	clrscr();
	printf("Enter Matrix Elements :");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
				sum=sum+a[i][j];
		}
	}
	printf("SUM=%d",sum);
getch();
}
