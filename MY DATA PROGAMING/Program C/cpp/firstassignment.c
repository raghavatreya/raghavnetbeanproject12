#include<stdio.h>
#include<conio.h>
#include<string.h>
    int getfact(int k)
{
   
   if(k==1)
   return 1;
   k=k*getfact(k-1); 
    return k;
    }

void getbinary(int a,int A[])
 {int k=0,i;
                   for(i=a;i>0;i=i/2)          
        {
          if(i%2==0)
          {  A[k]=0;
          }
          else
          {A[k]=1; //  j=j*10+1;
          }
          k++;
      }
}
int main()
{
    int i,j,k=0,x,d=0;
   int A[16]={0};
 printf("Enter a number \n ");   
 scanf("%d",&i);
 getbinary(i,A);
               for(i=15;i>=0;i--)                
                     {  
                        printf("%d",A[i]); 
                     }
    printf(" \nfactorial using recursing \n");
    
    printf("\n enter the number \n\n");
    scanf("%d",&i);
    k=getfact(i); 
    printf("%d",k);

    getch();
    return 0;
    }
