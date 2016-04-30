#include<stdio.h>
int fact(int );
main()
{
int a,b,c;
printf("enter the value of a");
scanf("%d",&a);
c=fact(a);
printf("%d",c);
}
int fact(int a)
{
int x=a,y=1;
for(;a>0;a--)
{
y=y*a;
}

return(y);
}

