#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void check(int *k,int *i,int *j);
void decimaltobinary(long int *q,int *k,int *i,int *j);
void binarytodecimal(long int *q,int *k,int *i,int *j);
int main()
{
int *i,*j,*k;
long int *q;
i = (int *)malloc(sizeof(int ));
k = (int *)malloc(sizeof(int ));
j = (int *)malloc(sizeof(int ));
q = (long int *)malloc(sizeof(long int));
*q=0;

printf("---Decimal To Binary-----\n");
printf("Enter A Number\n");
scanf("%d",j);
decimaltobinary(q,k,i,j);

printf("----Binary To Decimal------");
printf("Enter A Binary Number \n");	
scanf("%ld",q);
*j=0;
binarytodecimal(q,k,i,j);

printf("\n!!! Checking Number is Palindrom or not\n !!!!");
scanf("%d",j);
check(i,j,k);
return 0;
}
void check(int *k,int *i,int *j)
{
*k = *j;
	while(*k>0)
	{
		*i = *i * 10 + (*k%10);
		*k /= 10;
	}
if(*i == *j)
printf("Number is Palindrom\n");
else
printf("Number is not Palindrom\n");	

}
void decimaltobinary(long int *q,int *k,int *i,int *j)
{
		for(*i=0;*j>0;++*i)
		{
		  if(*i == 0)
		    *k = 1;
		  else 
            *k *= 10;		  
		  *q = (*j%2)*(*k)+*q;
		  *j /= 2;
//		  printf("\n *Q = %ld \n *j = %d",*q,*j);
		}
		printf("Answer is %ld",*q);

}
void binarytodecimal(long int *q,int *k,int *i,int *j)
{
	for(*i=0;*q>0;++*i)
	{
		  if(*i == 0)
		    *k = 1;
		  else 
            *k *= 2;		  
        *j = (*q % 2)*(*k)+*j;
	 //	  printf("\n *Q = %ld \n *j = %d",*q,*j);
		 *q /= 10; 
	}	
printf("Decimal Number is %d",*j);

}
