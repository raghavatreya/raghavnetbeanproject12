#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int a,b,t;
    int ag=0,am=0;
    int  A [100],B[100];
    printf("Enter the two decimal value \n");
    scanf("%d %d",&a,&b);   
     int k=0;
     int i;
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
  k=0;
     for(i=b;i>0;i=i/2)          
    {    if(i%2==0)
          {  B[k]=0;
          }
          else
          {B[k]=1; 
          }
          k++;
      }

for(i;A[i]!='\0' &&B[i]!='\0';i++)
   {  
     printf("| %d |",A[i]); printf(" %d |",B[i]);
     if(A[i]==1 && B[i]==1) 
     { printf("  1  |\n");                  
                  } 
     else
     {     printf(" 0   |\n");
                      }                    
     }
   
    getch();
    return 0;  
    }
