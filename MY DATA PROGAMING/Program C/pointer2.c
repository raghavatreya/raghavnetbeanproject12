#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int *p1,*p2,*i;
p1 = (int *)malloc(sizeof(int)); 
p2 = (int *)malloc(sizeof(int)); 
i = (int *)malloc(sizeof(int)); 

printf("Enter The First Number");
scanf("%d",p1);
*i = 0;
printf("Printing Table of A Number");
for(*i = 0;(*i)<10;++(*i))
{
  printf("\t%d \n",(*p1)*(*i));
}

printf("Enter A four digit number \n");
scanf("%d",p2);
printf("first and last digit sum of A \'4\' Number\n");
printf("\n %d",(*p2)%10+((*p2)/1000)%10);

printf("Enter The Five Digit Number");
scanf("%d",p1);
system("pause");
printf(" \n Sum  Of All Digit Is \n %d",(*p1)%10+((*p1)/10)%10+((*p1)/1000)%10+((*p1)/100)%10+((*p1)/10000)%10);
return 0;
}