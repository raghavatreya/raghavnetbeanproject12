#include<stdio.h>

int fun();
main()
{
    int n,z,c,k;
    printf("enter the value of n");
    scanf("%d",&k);
    c=fun(k);
    printf("%d",c);
    }
fun(int j)
    {
    int (j-1),(j-2);
    int fun(j),fun((j-1)),fun((j-2)),fun(0),fun(1);
    fun(0)=0;
    fun(1)=1;
    fun(j)=fun((j-1))+fun((j-2));
    return (fun(j));
    }
