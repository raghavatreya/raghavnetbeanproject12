#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n;
	clrscr();
	printf("Enter The Limit :");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+2)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
