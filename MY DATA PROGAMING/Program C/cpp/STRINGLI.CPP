xxxclude <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
	char a[10],b[10];
	int i,l;
	clrscr();
	printf("\n\nEnter Any String : ");
	gets(a);
	l = strlen(a);
	printf("\n\nLength of Given String is : %d",l);
	printf("\n\nString in Lower Case is : %s",strlwr(a));
	printf("\n\nString in Upper Case is : %s",strupr(a));
	printf("\n\nReverse String is : %s",strrev(a));
	strcpy(b,a);
	printf("\n\nNew String is : %s",b);
	strcat(b,a);
	printf("\n\nNew Concatenated String is : %s",b);
	if(strcmp(a,b)>0)
		printf("\n\nFirst is Big");
	else if(strcmp(a,b)<0)
		printf("\n\nSecond is Big");
	else
		printf("\n\nBoth Strings are SAme");
getch();
}