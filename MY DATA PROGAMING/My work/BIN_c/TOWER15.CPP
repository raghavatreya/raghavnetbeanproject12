#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n,k=1;
	clrscr();
	printf("Enter The Limit :");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		for(j=i-1;j>0;j--)
		{
			printf(" ");
		}
		for(j=i;j<=n;j++)
		{
			printf("%d",k++);
		}
		printf("\n");
		k=1;
	}
}