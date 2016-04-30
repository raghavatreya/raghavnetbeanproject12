#include <stdio.h>
#include <conio.h>
void main()
{
	char a[10];
	int i,l=0,j;
	clrscr();
	printf("\n\nEnter Your Name :");
	gets (a);
	for(i=0;a[i]!=NULL;i++)
		l++;
	for(i=0;i<=l-1;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c",a[j]);
		}
		printf("\n");
	}

}