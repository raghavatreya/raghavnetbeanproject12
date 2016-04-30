#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int *p1,*p2;
	p1 = (int *)malloc(sizeof(int));
	p2 = (int *)malloc(sizeof(int)); 
	printf("Enter First Value \n");
	scanf("%d",p1);
	printf("Enter Second Value \n");
	scanf("%d",p2);
	printf("Address store at Pointer p1 \t %u\n \t p2 %u\n",p1,p2);
	printf("Address of pointer p1 %u\n",&p1);
	printf("Address of pointer p2 %u",&p2);
	printf(" Multiplication \t%d\n",(*p1)*(*p2));
	printf("Divison \t %d \n",(*p1)/(*p2));
	printf("Addison \t %d \n",(*p1)+(*p2));
	printf("Substraction \t %d\n",(*p1)-(*p2));
	printf("Modulo is \t %d \n",(*p1)%(*p2));
return 0;
}