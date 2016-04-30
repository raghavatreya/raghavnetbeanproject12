#include<stdio.h>
#include<conio.h>
#include<malloc.h>

void merge(int a[],int left,int mid,int right)
{
     int temp[50],i=left,j;
     int l=left;
     int m=mid+1;
    
     
     while((l<=mid)&&(m<=right))
     {
         if(a[l]<=a[m])
         {
            temp[i++]=a[l++];             
         }   
         
         else
         {
             temp[i++]=a[m++];    
         }
         
     }
     
     if(l<=mid)
     {
        while(l<=mid)
           temp[i++]=a[l++];          
     }
     
     else
     {
       while(m<=right)
          temp[i++]=a[m++];    
     }
     
     for(j=left;j<=right;j++)
     {
          a[j]=temp[j];
     }
}

void mergeSort(int a[],int left,int right)
{
     int mid;
     
     if(left<right)
     {
            mid=(left+right)/2;
            mergeSort(a,left,mid);
            mergeSort(a,mid+1,right);
            merge(a,left,mid,right);          
     }          
}

int main()
{
   int i,l; 
   
   printf("Enter total no : ");
   scanf("%d",&l);
   
   int *a;
   a=(int *)malloc(l*sizeof(int));
   
   for(i=0;i<l;i++)
   {
       scanf("%d",&a[i]);                
   }
   
   mergeSort(a,0,l);
   
   for(i=0;i<l;i++)
   {
       printf("%d ",a[i]);                
   }
   
   getch(); 
   return 0;    
}

