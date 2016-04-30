#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int a,b;
    int  A [16]={0},B[16]={0};
    printf("Enter the two decimal value \n");
    scanf("%d %d",&a,&b);   
    int k=15;
    int i;
     for(i=a;i>0;i=i/2)          
        {
          if(i%2==0)
          {  A[k]=0;
          }
          else
          {A[k]=1; //  j=j*10+1;
          }
          k--;
      }
  k=15;
     for(i=b;i>0;i=i/2)          
    {    if(i%2==0)
          {  B[k]=0;
          }
          else
          {B[k]=1; 
          }
          k--;
      }
printf("| A |"); printf("  B  |");printf("   C |\n");
for(i=0;i<16;i++)
   {  
     printf("| %d |",A[i]); printf(" %d |",B[i]);
     if(A[i]==1 && B[i]==1) 
     { printf("  1  |\n");                  
                  } 
     else
     {     printf(" 0   |\n");
                      }                    
     }
     
    printf("The of or gate ",A);
    printf("\n| A |"); printf("  B  |");printf("   C |\n");
    for(i=0;i<16;i++)
   { 
     printf("| %d |",A[i]); printf(" %d |",B[i]);
     if(A[i]==0 && B[i]==0) 
     { printf("  0  |\n");                  
                  } 
     else
     {     printf(" 1   |\n");
                      }                    
     }

    getch();
    return 0;  
    }
