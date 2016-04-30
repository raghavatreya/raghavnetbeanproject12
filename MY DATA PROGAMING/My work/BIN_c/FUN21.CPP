#include <stdio.h>
#include <conio.h>
void search(int a[],int n,int s);
void main()
{
	int a[5];
	int i,n,r;
	clrscr();
	printf("\n\nEnter Array Elements : ");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("\n\nEnter Searching Elements : ");
	scanf("%d",&n);
	printf("\n\nEnter Replacing Elements :");
	scanf("%d",&r);
	search(a,n,r);
	getch();
}
void search(int a[],int n,int r)
{
	int i;
	for(i=0;i<5;i++)
	{
		if(a[i]==n)
		      a[i]=r;
	}
	for(i=0;i<5;i++)
		printf("%d\t",a[i]);
}