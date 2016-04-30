#include <stdio.h>
#include <conio.h>
void main()
{
	int a[2][3];
	int i,j,max=0;
	clrscr();
	printf("\n\nEnter Matrix Elements :");
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n\n");
	}

	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]>max)
				max=a[i][j];
		}
		printf("\n\nMAX=%d",max);
		max=0;
	}
getch();
}