#include <stdio.h>
#include <conio.h>
void main()
{
	int a[2][3];
	int i,j;
	int sum=0;
	clrscr();
	printf("\n\nEnter Matrix Elements :");
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=sum+a[i][j];
		}
		printf("\n\nSUM=%d",sum);
		sum=0;
	}
getch();
}