#include <stdio.h>
#include <conio.h>
void main()
{
	int a[2][3];
	int i,j,min;
	clrscr();
	printf("\n\nEnter Matrix Elements :");
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	for(j=0;j<3;j++)
	{
		for(i=0;i<2;i++)
		{
			min=a[0][j];
			if(a[i][j]<min)
				min=a[i][j];
		}
		printf("\n\nMIN=%d",min);
	}
getch();
}