#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

long int * first(int *j,int *i,long int *q);
int main()
{
int *i,*j,*k;
long int *q;
i = (int *)malloc(sizeof(int ));
k = (int *)malloc(sizeof(int ));
j = (int *)malloc(sizeof(int ));
q = (long int *)malloc(sizeof(long int));

printf("Evaluting the sum of Y = x^n \n");
printf("Enter X and n\n");
scanf("%d",i);
scanf("%d",j);
*q = 1;
*q = first(j,i,q);
printf("Answer Is %ld",*q);
for(*j;*j>0;--*j)
{
  *q *= *i; 
}
// returning a pinter value of 
printf("Answer Is %ld",*q);
return 0;
}
long int * first(int *j,int *i,long int *q)
{
for(*j;*j>0;--*j)
{
  *q *= *i; 
}
return *q;
} 
