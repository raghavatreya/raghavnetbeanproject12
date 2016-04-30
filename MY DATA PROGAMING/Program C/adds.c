#include<stdio.h>
#include<conio.h>
#include<string.h>
void getbinary(int i,int G[])
{    int k=0;
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
{int flag,j,i;int J[16]={0};
 getbinary(a,G);
                              for(i=15;i>=0;i--)
                                {
                                          if(G[i-1]==0 && G[i]==1 )
										  {
									        j=i;   
										  }			
				                }      	   									                               
							  for(i=j+1;i<16;i++)
							  {
										  		        if(G[i]==0)
														   G[i]=1;
                                                	   	   else
														   G[i]=0;
                               
							  }
}
void add(int A[],int B[], int G[])
{int i;
                                 for(i=0;i<16;i++)
                                {
                                    G[i]=A[i]+B[i];
                                 }
                                  for(i=0;i<16;i++)
                                  {
                                    if(G[i]>1)
                                      {            int a=G[i];
                                                   G[i]=G[i]%2;
                                                   if(i==0)
                                                   continue;
										           G[i+1]= G[i+1]+a/2;       
                                        }             
                                    }       

}
	  
int main()
{
      int m,x,y,n,i,j=0,k=0;
      int A[16]={0},B[16]={0},D[16]={0},J[16]={0};

      printf("\n Enter 1 if number is negative else Enter zero \n");
      scanf("%d",&x);
      printf("\n Enter number \n");
      scanf("%d",&m);


      if(x!=1)
      getbinary(m,A);
      else
      getbinaryifne(m,A); 

      
      printf("\n\nEnter 1 if number is negative else Enter  zero \n");
      scanf("%d",&y);
      printf("\n\nEnter number \n");
      scanf("%d",&n);

      if(y!=1)
      getbinary(n,B);
      else
      getbinaryifne(n,B); 

  for(i=15;i>=0;i--)
  {
  	printf("%d",A[i]);
  }


      for(i=15;i>=0;i--)
  {
  	printf("%d",B[i]);
  }

  printf("\n-------------------------\n");
  add(A,B,J);
  for(i=15;i>=0;i--)
  {
  	printf("%d",J[i]);
  }
      scanf("%d",&i);
    return 0;
}
