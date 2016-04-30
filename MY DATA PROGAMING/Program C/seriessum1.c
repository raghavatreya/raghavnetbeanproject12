#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int *i,*j,*k,itma=1,a;
long int *q;
i = (int *)malloc(sizeof(int ));
k = (int *)malloc(sizeof(int ));
j = (int *)malloc(sizeof(int ));
q = (long int *)malloc(sizeof(long int));

printf("Evaluting the sum of Y = 1^n +2^n +3^n +4^n + .....+n^n \n");
printf("Enter n\n");
scanf("%d",i);
//scanf("%d",j);
*q = 0;
for(*j = 1 ; *j <= *i;++ *j)
{  itma = 1; 
 for(*k = *i; *k > 0; -- *k)
 {
   itma = itma * *j; 
 }
 *q += itma;
}
printf("Sum is %ld",*q);


printf("\n Evaluting the sum of Y = X^1 +X^2 +X^3 +X^4 + .....+X^n \n");
printf("Enter X and n\n");
scanf("%d",i);
scanf("%d",j);
*q = 0;
for(a = 1 ; a <= *j;++ a)
{  itma = 1;
 for(*k = a; *k > 0; -- *k)
 {
   itma = itma * *i; 
 }
 *q += itma;
}
printf("Sum is %ld",*q);


printf("\n Evaluting the sum of Y = 1 +X +X^2 +X^3 +X^4 + .....+X^n \n");
printf("Enter X and n\n");
scanf("%d",i);
scanf("%d",j);
*q = 1;
for(a = 1 ; a <= *j;++ a)
{  itma = 1;
 for(*k = a; *k > 0; -- *k)
 {
   itma = itma * *i; 
 }
 *q += itma;
}
printf("Sum is %ld",*q);


printf("\nFactorial Using iterate method \n");
printf("Enter N \n");
scanf("%d",i);
*q=1;
for(a = *i;a>0;--a)
{
  *q *= a;
}
printf("Factorial is %ld",*q);

return 0;
}