#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,j,min,k=0;
	clrscr();
	printf("Enter Array Elements :");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				k = a[i];
				a[i] = a[j];
				a[j] = k;
			}
		}
	}
	for(i=0;i<5;i++)
	printf("\n\nArray Elements Are :%d",a[i]);
getch();
}

