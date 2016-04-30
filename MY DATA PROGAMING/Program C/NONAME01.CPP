#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
static char str1[]="good";
static char str2[]="";
static char str3[]="day";
int i;
i = strcmp(strcat(str3,strcpy(str2,str1)),strcat(str3,"good"));
printf("%d",i);
getch();
}