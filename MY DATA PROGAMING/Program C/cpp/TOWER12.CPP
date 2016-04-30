#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n;
	int k=65;
	clrscr();
	printf("Enter The Limit :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",k++);
		}
		printf("\n");
	}
}