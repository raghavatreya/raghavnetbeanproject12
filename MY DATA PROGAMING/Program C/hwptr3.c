#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
void main()
{
 int *p,*q,*r,row,colomn,smallest,largest,i,j,k=0;
 printf("Enter Row And Colomn\n");
 scanf("%d",&row);
 scanf("%d",&colomn);
 system("pause");
 p = (int *)malloc(sizeof(int )*row*colomn);
 
 for(i=0;i<row;++i)
 {
     for(j=0;j<colomn;++j)
	 {
	         printf("Enter A Number At [%d][%d]",i,j);
			 scanf("%d",p+i*colomn+j);
	}
 }
 
 for(i=0;i<row;++i)
 {
   for(j=0;j<colomn;++j)
   {
        printf("Square of Element of Matrix is  i = %d ,j= %d Element is %d \n",i,j,*(p+i*colomn+j) * *(p+i*colomn+j));
   }
 }
 
  smallest = largest = *p;
  r = (int *)malloc(sizeof(int )*row*colomn);
  q = (int *)malloc(sizeof(int )*row*colomn);

 for(i=0;i<row;++i)
 {
     for(j=0;j<colomn;++j)
	 {
	         printf("Enter Element Of \"Matrix B\" Number At [%d][%d]",i,j);
			 scanf("%d",q+i*colomn+j);
	}
 }

  for(i=0;i<row;++i)
 {
   for(j=0;j<colomn;++j)
   {
	*(r+i*colomn+j) = *(p+i*colomn+j) + *(q+i*colomn+j);
   }

  }

  printf("\nElement of Matrix C (resultant matrix ) is\n");
  for(i=0;i<row;++i)
 {
   for(j=0;j<colomn;++j)
   {
        k = k+ *(p+i*colomn+j); // sum of all element of first matrix  
      if(smallest > *(p+i*colomn+j))
       {
	      smallest = *(p+i*colomn+j);
	    }
	if(largest < *(p+i*colomn+j))
    {
	    largest = *(p+i*colomn+j);
	}	
   
    // printing Element of Third matrix
    	printf("\n Element At inedx i = %d ,j =%d  of Third Matrix is  %d \n",i,j,*(r+i*colomn+j));
	
   }
 }
 printf("\nThe Sum of First Array Is %d\n",k);
 printf("\nsmallest value is %d\n",smallest);
 printf("\n Largest is %d\n",largest);
 

 getch();
 //return 0;
}