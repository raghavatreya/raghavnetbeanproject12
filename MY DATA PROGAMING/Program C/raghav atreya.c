#include<stdio.h>
int main()
{
  int i,j,k;
  for(i=1;i<=4;i++)
  {
    for(j=1;j<=9;j++)
    {
      if(j==i || j==5 || 10-j==i)
        printf("*");
      else
        printf("0");
    }
    printf("\n");
  }


  printf(" %d %d  %d",'a','a'/2 ,'a'%10);

  return 0;
}


