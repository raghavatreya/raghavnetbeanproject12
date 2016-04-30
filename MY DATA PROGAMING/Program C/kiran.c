#include<stdio.h>
int da();
main()
{int n,b,w,v,d,i,p;
//printf(" \n Enter first the length of string");
//scanf("%d",&w);
char q[100];
int m[300];
printf("Enter the string \n  ");
gets(q);
for(i=0;i<=n;i++)
{da(q[i]);
    printf("\n");
}
}
da(int p)
{int b,m[100],v;
    for(p;p>0;p/10)
    { if(p==32)
    {
        for(b-1;b>0;b--)
    {
        printf("%d",m[b]);}
if(b==0)
{printf("\n");}
continue;}
    if(p%2!=0 )
    {v=1;}
    else
    {v=0;}
    m[b]=v;
    b++;
    }}


