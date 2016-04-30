#include <stdio.h>
#include <conio.h>
void search(int a[],int n);
void main()
{
	int a[5];
	int i,n;
	clrscr();
	printf("\n\nEnter Array Elements : ");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("\n\nEnter Searching Elements : ");
	scanf("%d",&n);
	search(a,n);
	getch();
}
void search(int a[],int n)
{
	int i,k=0;
	for(i=0;i<5;i++)
	{
		if(a[i]==n)
			k++;
	}
	if(k>0)
		printf("\n\nElement Found");
	else
		printf("\n\nElements Not found");
}