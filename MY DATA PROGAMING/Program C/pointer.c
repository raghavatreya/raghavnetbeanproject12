#include<stdio.h>
#include<conio.h>

int main()
{
	int *p;
	int a=12;
	p = &a;
	printf("\n\nValue of a is : %d",a);
	printf("\n\nAddress of a is : %u",&a);
	printf("\n\nValue of *p is : %u",&p);
	printf("\n\nValue at Address of a is : %d",*p);
	printf("\n\nAddress of *p is : %u",&p);
	printf("\n\nValue of *p is : %u=====",p);
return 0;
}