#include <stdio.h>
#include <conio.h>
void main()
{
	char a[10];
	char n,r;
	int i;
	clrscr();
	printf("\n\nEnter Your Name : ");
	gets(a);
	printf("\n\nSearching Character :");
	n = getche();
	printf("\n\nReplacing Character :");
	r = getche();
	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]==n)
		   a[i]=r;

	}
	printf("\n\nYour Name Is :");
	for(i=0;a[i]!=NULL;i++)
		printf("%c",a[i]);

}