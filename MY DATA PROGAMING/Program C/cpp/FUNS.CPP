#include <stdio.h>
#include<conio.h>
#include<string.h>
int len(char a[]);
char lower(char a[]);
char upper(char a[]);
char reverse(char a[]);
void main()
{
	char a[10];
	int l;
	clrscr();
	printf("\n\nEnter Your Name : ");
	gets(a);
	l=len(a);
	printf("\n\nYour Name Length Is : %d",l);
	lower(a);
	upper(a);
	reverse(a);
	getch();
}
int len(char a[])
{
	int l;
	l=strlen(a);
	return l;
}
char lower(char a[])
{

}
char upper(char a[])
{
	printf("\n\nString Is upper Case Is :%s",strupr(a));
}
char reverse(char a[])
{
	int i,l=0;
	printf("\n\n\n");
	for(i=0;a[i]!=NULL;i++)
		l++;
	for(;l>=0;l--)
		printf("%c",a[l]);
}

