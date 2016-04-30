#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[5]={0,1,2,3,4};
int *p[]={a,a+1,a+2,a+3,a+4};
int **ptr,i;
ptr=p;
printf("%u,%d,%u\n",*ptr,**ptr++,*ptr);
**ptr++;
printf("%d\t%d\t%d",ptr-p,*ptr-a,**ptr);

for(i=0;i<5;++i)
printf("\n%d\t",a[i]);

getch();
}