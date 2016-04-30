#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n;
	clrscr();
	printf("Enter The Limit :");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}