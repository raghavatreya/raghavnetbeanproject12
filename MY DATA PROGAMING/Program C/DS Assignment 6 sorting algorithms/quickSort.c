#include<stdio.h>
#include<conio.h>
#include<malloc.h>

void quickSort(int x[],int first,int last){
    int pivot,j,temp,i;

     if(first<last){
         pivot=first;
         i=first;
         j=last;

         while(i<j){
             while(x[i]<=x[pivot]&&i<last)
                 i++;
             while(x[j]>x[pivot])
                 j--;
             if(i<j){
                 temp=x[i];
                  x[i]=x[j];
                  x[j]=temp;
             }
         }

         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
         quickSort(x,first,j-1);
         quickSort(x,j+1,last);

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

   quickSort(a,0,l-1);

   for(i=0;i<l;i++)
   {
       printf(" %d ",a[i]);
   }

   getch();
   return 0;
}
