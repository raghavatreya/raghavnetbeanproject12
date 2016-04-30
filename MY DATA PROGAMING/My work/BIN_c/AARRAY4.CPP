#include <stdio.h>
#include <conio.h>
void main()
{
	int a[2][3];
	int i,j,max=0,min;
	clrscr();
	printf("\n\nEnter Matrix Elements :");
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
			}
			if(a[i][j]<min)
                        	min = a[i][j];
		}
	}

	printf("\n\nMAX=%d",max);
	printf("\n\nMIN=%d",min);
	printf("\n\n");
getch();
}