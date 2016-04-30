#include <stdio.h>
#include <conio.h>
int dia(int a[3][3]);
void main()
{
	int a[3][3];
	int i,j,sum;
	clrscr();
	printf("\n\nEnter Matrix Elements :");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	sum=dia(a);
	printf("\n\nREV SUM = %d",sum);
	getch();
}
int dia(int a[3][3])
{
	int sum=0,i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i+j==2)
				sum=sum+a[i][j];
		}
	}
	return sum;

}