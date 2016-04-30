#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
char a[2][2][25]={
			{    "JAck and jill ",
			     "went up the hill"
			},{
			       " jack fall down",
			       "and broke his crown"
			}

};
printf("%s\n%s\n%s\n%s",a[0][0][9],a[0][1][12],a[1][0][10],a[1][1][14]);
getch();
}