#include<stdio.h>
#include<conio.h>
#include<malloc.h>


void insertionSort(int a[],int l)
{
    int i,j,temp;

    for(i=1;i<l;i++){
      temp=a[i];
      j=i-1;
      while((temp<a[j])&&(j>=0)){
      a[j+1]=a[j];
          j=j-1;
      }
      a[j+1]=temp;
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
    	printf("Enter The Data At No %d \t\t",(i+1));	
       scanf("%d",&a[i]);
   }

   insertionSort(a,l);

   for(i=0;i<l;i++)
   {
       printf("Data At Index %d is \t %d ",i,a[i]);
   }

   getch();
   return 0;
}
