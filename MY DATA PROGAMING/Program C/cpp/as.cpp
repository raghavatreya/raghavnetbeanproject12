#include<stdio.h>
#include<conio.h>
int main()
{
int a=9,k,i;
int A[3]={1,2,3};
int B[3];
float f=0;
long int g;
printf("Enter the value of k\n");
scanf("%d",&k);
printf("the address of f is %u",&f);
printf("the k address of %u \n",k);
printf("the a address of %u \n",a);
printf("the size of int for my computer is %u \n",sizeof(int));
printf("the A[0] address of %u \n",A);
printf("the A[1] address of %u \n",A+1);
printf("the A[2] address of %u \n",A+2);
for(i=0;i<3;i++)
{
 printf("enter the value of B[%d]",i);
 scanf("%d",&B[i]);
}
printf("Enter the value of long int named as g \n");
scanf("%ld",&g);
printf("the location of g is give by  %u \n",&g);
printf("the B[0] address of %u \n",B);
printf("the B[2] address of %u \n",B+1);
printf("the B[1] address of %u \n",B+2);
printf("the size of  long int for my computer is %u \n",sizeof(long int));
printf("the size of  flaot for my computer is %u \n",sizeof(float));
printf("the size of double for my computer is %u \n",sizeof(double));
printf("the size of long for my computer is %u \n",sizeof(long));
getch();
return 0;
}
