#include<stdio.h>
#include<conio.h>
#include<malloc.h>

void selectionSort(int a[],int l)
{
   int i,j,temp;
   
   for(i=0;i<l;i++)
   {
       for(j=i+1;j<l;j++)
       {
             if(a[i]>a[j])
             {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
             }          
       }                
   }
}

int main()
{
   int i,l; 
   
   printf("Enter Total No : ");
   scanf("%d",&l);
   
   int *a;
   a=(int *)malloc(l*sizeof(int));
   
   for(i=0;i<l;i++)
   {   
		printf("Enter The Data No. %d \t\t",(i+1));
       scanf("%d",&a[i]);                
   }
   
   selectionSort(a,l);
   
   for(i=0;i<l;i++)
   {
       printf("Data At Index %d is %d ",i,a[i]);                
   }
   
   getch(); 
   return 0;    
}
