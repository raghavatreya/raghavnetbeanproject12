#include<stdio.h>
#include<conio.h>
#include<string.h>
void getbinary(int i,int G[])
{int k=0;
     for(i=i;i>0;i=i/2)          
    {
          if(i%2==0)
          {
            G[k]=0;
                    }
          else
          {
              G[k]=1; 
          }
          k++;
      }
   
  }
int main()
{
    int m,x,y,n,i,j=0,k=0;
    int A[16]={0},B[16]={0},D[16]={0},J[16]={0};
    char G[100]=" ";
    J[15]=1;
      printf("enter a value :");
      scanf("%d",&x);
      getbinary(x,A);
      printf("enter a value: ");
       scanf("%d",&y);
        getbinary(y,B);
          if(x<=0)
                 {
                                for(i=0;i<15;i++)
                                {
                                                 if(A[i]==0)
                                                            A[i]=1;
                                                 else
                                                            A[i]=0;
                                printf("%d",A[i]);
                                }
                          printf("\n-------------------------------\n");
                                for(i=0;i<15;i++)
                                {
                                    A[i]=A[i]+J[i];
        printf("%d",A[i]);
                                 }
                                 printf("----------------------------------------");
                                  for(i=0;i<16;i++)
                                  {
                                    if(D[i]>1)
                                      { 
                                                int a=A[i];
                                                  A[i]=A[i]%2;
                                                  A[i+1]= A[i+1]+a/2;       
                                        }             
      printf("%d",A[i]);
                                    }  
                             A[15]=1;               
          } 

        if(y<=0)
        {
                               for(i=0;i<15;i++)
                               {
                                                if(B[i]==0)
                                                 B[i]=1;
                                                 else
                                                 B[i]=0;
                               }
                               for(i=0;i<15;i++)
                               {
                                 B[i]=A[i]+J[i];
        
                                               }
                               for(i=0;i<16;i++)
                               {
                                   if(B[i]>1)
                                    {
                                              int a=B[i];
                                                   B[i]=B[i]%2;
                                                   B[i+1]= B[i+1]+a/2;       
                                     }             
      
                                }
                                  B[15]=1;
              }
   
   for(i=0;i<16;i++)
    {
       D[i]=A[i]+B[i];
        
       }
    for(i=0;i<16;i++)
    {
        if(D[i]>1)
        { int a=D[i];
           D[i]=D[i]%2;
           D[i+1]= D[i+1]+a/2;       
                  }             
      
    }                 
      for(i=15;i>=0;i--)           
  {  
     printf("%d",A[i]); 
     }
 printf("\n");
     for(i=15;i>=0;i--)                
  {  
     printf("%d",B[i]); 
     }
 printf("\n");
 
     for(i=15;i>=0;i--)                
  {  
     printf("%d",D[i]); 
     }
 printf("\n");
   //A[15]
    printf("Enter 1 if number is negative else Enter zero \n");
      scanf("%d",&x);
      printf("ENter number \n");
      scanf("%d",&m);
      getbinary(m,A);
   
      printf("Enter 1 if number is negative else Enter  zero \n");
      scanf("%d",&y);
      printf("ENter number \n");
      scanf("%d",&n);
      getbinary(n,B);
     
     if(x==1)
     {
          A[15]=1;
                  for(i=0;i<15;i++)   
                                 {
                                                 if(A[i]==0)
                                                            A[i]=1;
                                                 else
                                                            A[i]=0;
                                }
                  for(i=0;i<15;i++)
                                {
                                    A[i]=A[i]+J[i];
                                 }
                                  for(i=0;i<15;i++)
                                  {
                                         if(D[i]>1)
                                         { 
                                                int a=A[i];
                                                  A[i]=A[i]%2;
                                                  A[i+1]= A[i+1]+a/2;       
                                        }             
      
                                    }
          }
      if(y==1)
     {
          B[15]=1;
                  for(i=0;i<15;i++)   
                                 {
                                                 if(B[i]==0)
                                                            B[i]=1;
                                                 else
                                                            B[i]=0;
                                }
                  for(i=0;i<15;i++)
                                {
                                    B[i]=B[i]+J[i];
                                 }
                                  for(i=0;i<15;i++)
                                  {
                                         if(B[i]>1)
                                         { 
                                                int a=B[i];
                                                  B[i]=B[i]%2;
                                                  B[i+1]= B[i+1]+a/2;       
                                        }             
      
                                    }
          }

 for(i=0;i<15;i++)
    {
       D[i]=A[i]+B[i];
        
       }
    for(i=0;i<15;i++)
    {
        if(D[i]>1)
        { int a=D[i];
           D[i]=D[i]%2;
           D[i+1]= D[i+1]+a/2;       
                  }             
      
    }                 
      for(i=15;i>=0;i--)           
  {  
     printf("%d",A[i]); 
     }
 printf("\n");
     for(i=15;i>=0;i--)                
  {  
     printf("%d",B[i]); 
     }
 printf("\n");
 
     for(i=15;i>=0;i--)                
  {  
     printf("%d",D[i]); 
     }
 printf("\n");
    getch();
    return 0;
    }     
