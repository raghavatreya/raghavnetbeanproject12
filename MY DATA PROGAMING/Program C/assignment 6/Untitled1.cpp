#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>

int main()
{
    int A[12],i,j,temp,index;
    int B[6];
    printf("");
    for(i=0;i<12;i++)
    {
                     printf("Enter data \n");
                     scanf("%d",&A[i]);
   }
 //  selection sort 
   for(i=0;i<12;i++)
   {
                    temp = A[i];
                    for(j=i;j<12;j++)
                    {
                        if(temp<A[j])
                        {
                              index = j; // finding smallest number in the array i to last number
                        }               
                                     
                    }
                    A[i] = A[j];
                    A[j] = temp;
                    }    
            for(i=0;i<12;i++)
            {
                            printf("\n %d \n",A[i]);
                            }  
                            system("pause");
//scanf("%d",&A[6]);                    
// bubble sort 

for(i=11;i>0;i--)
{
                      if(A[i]>A[i-1])
                      {
                                   temp = A[i];
                                   A[i] = A[j];
                                   A[j] = temp; 
                                   }               
                 }
            for(i=0;i<12;i++)
            {
                            printf("\n %d \n",A[i]);
                            }                      
//  insertion sort 

system("pause");
printf("Enter the data for insertion sort \n");
    for(i=0;i<12;i++)
    {
                     printf("Enter data \n");
                     scanf("%d",&A[i]);
   }


for(i=0;i<12;i++)
{
                 for(j=0;j<12 && j<i;j++)
                 {
                      if(A[i]>A[j])
                      {
                                   temp = A[i];
                                   A[i] = A[j];
                                   A[j] = temp; 
                                   }               
                                  
                                  }
                 }
            for(i=0;i<12;i++)
            {
                            printf("\n %d \n",A[i]);
            }                      

system("pause");

    return 1;
}
