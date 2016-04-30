#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n;
	clrscr();
	printf("Enter The Limit :");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=n-i;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}