#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
	int *p[3],i,n,j,k=0;
	clrscr();
	printf("\n\nEnter The Size Of Coloums : ");
	scanf("%d",&n);
	for(i=0;i<3;i++)
	{
		p[i]=(int *)malloc(n*sizeof(int));
		for(j=0;j<n;j++)
			scanf("%d",p[i]+j);

	}
	for(i=0;i<3;i++)
	{
		for(j=i;j<n;j++)
		{
			k=*(p[i]+j);
			*(p[i]+j)=*(p[j]+i);
			*(p[j]+i)=k;
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",*(p[i]+j));
		}
		printf("\n\n");
	}
getch();
}


