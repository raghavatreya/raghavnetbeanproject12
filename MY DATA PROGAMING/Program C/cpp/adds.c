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
void getbinaryifne(int a, int G[])
{int i;int J[16]={0};
 getbinary(a,G);
 J[15]=1;
                              for(i=0;i<15;i++)
                                {
                                                 if(G[i]==0)
                                                            G[i]=1;
                                                 else
                                                            G[i]=0;
                               // printf("%d",A[i]);
                                }
                                //for(i=0;i<16;i++)  
                                  //{
                                                   
                                 for(i=0;i<15;i++)
                                {
                                    G[i]=G[i]+J[i];
                              printf("%d",G[i]);
                                 }
                                 printf("----------------------------------------");
                                  for(i=0;i<16;i++)
                                  {
                                    if(G[i]>1)
                                      { 
                                                int a=G[i];
                                                  G[i]=G[i]%2;
                                                  G[i+1]= G[i+1]+a/2;       
                                        }             
      printf("%d",G[i]);
                                    }  
                             G[15]=1;               
              }
     
int main()
{
      int m,x,y,n,i,j=0,k=0;
      int A[16]={0},B[16]={0},D[16]={0},J[16]={0};
      printf("Enter 1 if number is negative else Enter zero \n");
      scanf("%d",&x);
      printf("ENter number \n");
      scanf("%d",&m);
      if(x==0)
      getbinary(m,A);
      else
      getbinaryifne(m,A); 
      
      printf("Enter 1 if number is negative else Enter  zero \n");
      scanf("%d",&y);
      printf("ENter number \n");
      scanf("%d",&n);
      //getbinary(n,B);
      if(x==0)
      getbinary(m,A);
      else
      getbinaryifne(m,A); 
      scanf("%d",A[0]);
    return 0;
}
