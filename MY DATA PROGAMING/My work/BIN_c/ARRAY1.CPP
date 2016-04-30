#include <stdio.h>
#include <conio.h>
void main()
{
	int a[5],i,s=0;
	clrscr();
	printf("\n\nEnter Array elements : ");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("\n\nArray Elements Are \n\n");
	for(i=0;i<5;i++)
		s=s+a[i];
	printf("\n\nsum is : %d",s);
getch();
}