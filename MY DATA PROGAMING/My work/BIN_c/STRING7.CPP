#include <stdio.h>
#include <conio.h>
void main()
{
	char a[10],b[10]=" ";
	int i,l=0;
	clrscr();
	printf("\n\nEnter Your Name :");
	gets (a);
	for(i=0;a[i]!=NULL;i++)
	{
		b[i] = a[i];

	}
	puts(b);
}