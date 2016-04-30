#include <stdio.h>
#include <conio.h>
void main()
{
	char a[30]=" ",b[10]=" ";
	int i,j,k=0;
	clrscr();
	printf("\n\nEnter First Name :");
	gets (a);
	printf("\n\nEnter Last Name :");
	gets (b);
	for(i=0;a[i]!=NULL;i++)
	{
	     k++;
	}
	for(i=0;b[i]!=NULL;i++)
	 {   a[k+i]=b[i];

	 }
	for(i=0;a[i]!=NULL;i++)
	{    printf("%c",a[i]);
	}
}