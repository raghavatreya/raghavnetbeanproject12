#include <stdio.h>
#include <conio.h>
void main()
{
	char a[10],b[10];
	int i,j,l=0,m=0;
	clrscr();
	printf("\n\nEnter First Name :");
	gets (a);
	printf("\n\nEnter Second Name :");
	gets (b);
	for(i=0;a[i]!=NULL;i++)
		l++;
	for(j=0;b[j]!=NULL;j++)
		m++;
	if(m>l)
		printf("Second Name Length Is High");
	else
		printf("First Name Length Is High");
}
