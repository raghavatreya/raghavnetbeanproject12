#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k=0,x,g=1,d=0;
    printf("\n enter the number which you want to convert in decimal\ \n\n");
     scanf("%d",&i);
    
    for(;i>0;i=i/10)
    {
                   g=0;
                  j=i%10;
                if(j==1)
                {
                         x=k;g=1;
                       for(x;x>0;x--)
                        {
                         g=g*2;          
                               }
                               
                 } 
                
                 d=d+g;
                   k++;      
                  }
  printf("number is %d",d);
    getch();
    return 0;
    }
