#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
	int *p[3],*q[3],i,n,m,j,*r[3];
	clrscr();
	printf("\n\nEnter The size of coloums : ");
	scanf("%d",&n);
	for(i=0;i<3;i++)
	{
		p[i]=(int *)malloc(n*sizeof(int));
		for(j=0;j<n;j++)
			scanf("%d",p[i]+j);
	}
	printf("\n\nEnter The size of coloums : ");
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
			*(r[i]+j)=*(p[i]+j)+*(q[i]+j);
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
getch();
}
