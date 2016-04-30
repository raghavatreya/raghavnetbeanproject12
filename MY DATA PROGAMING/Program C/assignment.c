#include<stdio.h>
main()
{int i,l=0,j,h,k[100];
char z[4];
//printf("enter a string of two digit  ");
//gets(z);
//for(h=0;h<5;h++)
//{printf("i=%d \n",z[h]);
i='A';
for(i;i>0;)
{if(i%2!=0)
{j=1;}
else
{j=0;}
    k[l]=j;
l++;
i=i/2; }
int p=l-1;
for(p;p>=0;p--)
{
    printf("%d",k[p]);
}
}




