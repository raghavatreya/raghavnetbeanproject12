#include <stdio.h>
#include <conio.h>
char convert(char a);
void main()
{
	char a;
	clrscr();
	printf("\n\n Enter Any Character :");
	scanf("%c",&a);
	convert(a);
	getch();
}
char convert(char a)
{
	if(a>=97 && a<=122)
		a=a-32;
	else if(a>=65 && a<=90)
		a=a+32;
	printf("\n\n CONVERT CHARACTER :%c",a);
}
