#include <stdio.h>
#include <conio.h>
void main()
{
	char a[10];
	int i;
	clrscr();
	printf("\n\nEnter Your Name :");
	gets(a);
	for(i=0;a[i]!=NULL;i++)
	{
		printf("\t%d",a[i]);  }
}