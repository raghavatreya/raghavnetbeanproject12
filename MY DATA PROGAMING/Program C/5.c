#include<stdio.h>
int rag();
main()
{
    int i,j,k,a;
    printf("enter n");
    scanf("%d",a);
k=rag(a);
printf("%d",k);
}
int rag(int d)
{
    int v,k=0;
    while(d>0)
    {v=d%10;
    k=k*10+v;
      d=d/10;
      return(v);
    }
}
