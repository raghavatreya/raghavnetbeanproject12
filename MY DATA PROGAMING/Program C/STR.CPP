#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void main()
{
char string[] ="Sant";
char *ptr1=string,*ptr2=string + sizeof(string)-1;
int i;
for(i=0;ptr1!=ptr2;++i)
{
  ++ptr1;
  --ptr2;
}
printf("%d",i);
getch();
}