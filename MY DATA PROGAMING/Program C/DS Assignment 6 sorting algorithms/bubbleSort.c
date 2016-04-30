#include<stdio.h>
#include<conio.h>
#include<malloc.h>

void bubbleSort(int a[],int l)
{
   int i,j,temp;
   
   for(i=0;i<l;i++)
   {
        for(j=0;j<l-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;           
            }       
        }
   }    
}

int main()
{
   int i,l; 
   printf("\t\t----------BUBBLE SORT-------------\n");
   printf("Enter Total No Of Entry:\t ");
   scanf("%d",&l);
   
   int *a;
   a=(int *)malloc(l*sizeof(int));
   
   for(i=0;i<l;i++)
   {
		printf("Enter Data At Index %d \t\t",i);
       scanf("%d",&a[i]);                
   }
   
   bubbleSort(a,l);
   
   for(i=0;i<l;i++)
   {
       printf(" %d ",a[i]);                
   }
   
   getch(); 
   return 0;    
}
