#include<stdio.h>
#include<conio.h>
#include<string.h>
char copy(char a[]);
char concate(char a[],char b[]);
char compare(char a[],char b[]);
void main()
{

char copy(char a[])
{
	char b[10]=" ";
	int i,l=0;
	clrscr();
	for(i=0;a[i]!=NULL;i++)
	{
		b[i]=a[i];
	}
	puts(b);
}
char concate(char a[],char b[])
{
	int i,j,k=0;
	for(i=0;a[i]!=NULL;i++)
		k++;
	for(i=0;b[i]!=NULL;i++)
		a[k+i]=b[i];
	for(i=0;a[i]!=NULL;i++)
		printf("%c",a[i]);
}
void compare(char a[],char b[])
{
	int i,j,m=0,l=0;
	for(i=0;a[i]!=NULL;i++)
		l++;
	for(j=0;b[j]!=NULL;j++)
		m++;
	if(m>l)
		printf("\n\nSecond Name Length IS High ");
	else if(l>m)
		printf("\n\nFirst Name Lenght Is High ");
	else
		printf("\n\nEqual Lenght");
}

