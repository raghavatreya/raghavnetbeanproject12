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
    int m,n,i,j=0,k=0;
    int A[16]={0},B[16]={0},C[16]={0};
    char G[100]=" ";
      printf("enter a value :");
      scanf("%d",&i);
      getbinary(i,A);
      printf("enter a value: ");
       scanf("%d",&i);
        getbinary(i,B);
//       for(k=k+1;k>0;k--)
//    printf("%d",G[k-1]);
//     if(0?1:printf("10"))
     printf(" \n or gate out put\n");
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
       if(A[i]==0 && B[i]==0)
         printf("0");
         else
         printf("1");
     }
    
     printf("\n and gate out put\n");
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
       if(A[i]==1 && B[i]==1)
         printf("1");
         else
         printf("0");
    }

     printf(" \n XOR gate out put\n");
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
       if(A[i]!=B[i])
         printf("1");
         else
         printf("0");
    }

    
     printf("the sum of binary number is : \n");
printf(" \n |  A | B  | C    | \n");
    for(i=0;i<16;i++)
    {
       C[i]=A[i]+B[i];
        
                     }
    for(i=0;i<16;i++)
    {
        if(C[i]>1)
        { int a=C[i];
           C[i]=C[i]%2;
           C[i+1]= C[i+1]+a/2;       
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
     printf("%d",C[i]); 
     }
 printf("\n");


printf("The Addition Of singed Binary Number \n");
// A[16]={0};B[16]={0};  
  for(i=0;i<16;i++)
  {A[i]=0;B[i]=0;}
  int x,y;
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
     
     if(x==y)
      {                 if(x==1)
                        {
                            A[15]=1;B[15]=1;C[15]=1;                
                          } 
                         printf("%d",A[15]);
                           for(i=14;i>=0;i--)           
                              {  
                                                   printf("%d",A[i]); 
                                 }
                         printf("\n");printf("%d",B[15]);
                         for(i=14;i>=0;i--)                
                         {  
                         printf("%d",B[i]); 
                         }
                        printf("\n");
    
                        for(i=0;i<14;i++)
                        {
                           C[i]=A[i]+B[i];
                       }
                       for(i=0;i<14;i++)
                      {
                            if(C[i]>1)
                          { int a=C[i];
                            C[i]=C[i]%2;
                            C[i-1]= C[i-1]+a/2;       
                            }             
                    }
                        printf("%d",C[15]);
                      for(i=14;i>=0;i--)                
                     {  
                        printf("%d",C[i]); 
                     }
                      printf("\n");
    }  
    else
    {
        if(m>n)
         { C[15]=x;A[15]=x;B[15]=y;
         }
         else
         {C[15]=y;A[15]=x;B[15]=y;
         }
                      printf("%d",A[15]);
                           for(i=14;i>=0;i--)           
                              {  
                                                   printf("%d",A[i]); 
                                 }
                         printf("\n");printf("%d",B[15]);
                         for(i=14;i>=0;i--)                
                         {  
                         printf("%d",B[i]); 
                         }
                        printf("\n");
    
                        if(x==1)
                        { 
                                 for(i=0;i<14;i++)
                                {
                                  if(A[i]=0)
                                   {  A[i]=1;       }
                                   else
                                { A[i]=0;}
                              }
                        }
                       else
                       { for(i=0;i<14;i++)
                          {
                             if(B[i]=0)
                             {
                                B[i]=1;       }
                            else
                            { B[i]=0;
                            }

                          }
                          }
                           
                       for(i=0;i<14;i++)
                      {
                            if(C[i]>1)
                          { int a=C[i];
                            C[i]=C[i]%2;
                            C[i+1]= C[i+1]+a/2;       
                            }             
                    }
                        printf("%d",C[15]);
                      for(i=14;i>=0;i--)                
                     {  
                        printf("%d",C[i]); 
                     }
                      printf("\n");
    }
    getch();
    return 0;
    }
