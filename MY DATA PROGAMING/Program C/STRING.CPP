#include<string.h>
#include<conio.h>
#include<iostream.h>
#include<stdio.h>
void main()
{
clrscr();
char s[]="C a of";
char t[]="is philosophy life";
char u[40];
char *ss=s;
char *tt=t;
char *uu = u;
while(*ss || *tt)
{
 while(*ss)
 {
   if((*uu++=*ss++)==' ')
   break;
 }
 while(*tt)
 {
   if((*uu++=*tt++)==' ')
   break;
 }
}
*uu='\0';
puts(u);
getch();
}
