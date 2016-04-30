#include <stdio.h>
#include <conio.h>
void main()
{
	char a[10];
	char n;
	int i,l=0;
	clrscr();
	printf("\n\nEnter Your Name :");
	gets (a);
	printf("\n\nEnter Searching Character :");
	scanf("%c",&n);
	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]==n)
			l++;
	}
	printf("\n\nOccurance Is : %d",l);

}
