#include<stdio.h>
#include<conio.h>
#include<string.h>


void main()
{
char str[10]={0,0,0,0,0,0,0,0,0,0};
char str1[7]="Strings";
char *s;
int i;
s = str;
printf("\n Answer One \n");
printf("Fascimile"+5);
printf("\n Answer Two \n");
for(i=0;i<=9;++i)
{
if(*s)
{
  printf("%c",*s);
}
++s;
}
printf("\n Answer 3\n");
printf("%s",str);
getch();
}