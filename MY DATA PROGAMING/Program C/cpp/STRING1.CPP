#include <stdio.h>
#include <conio.h>
void main()
{
	char a[10];
	int i,l=0;
	clrscr();
	printf("\n\nEnter Your Name :");
	gets (a);
	for(i=0;a[i]!=NULL;i++)
		l++;
	for(;l>=0;l--)
		printf("%c",a[l]);
}