#include<stdio.h>
main()
{
int a,n,b,c=0,d;
printf("enter the value of n");
scanf("%d",&n);
for(a=1;a<=n;a++)
{
if(a>3)
{
    for(b=2;b<a;b++)
     {
          if(a%b==0)
           {
                c=1;
              }
       }
}
if(c==0)
{
printf("enter number is prime%d\n",a);
}
}
}


