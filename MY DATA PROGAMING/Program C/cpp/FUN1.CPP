#include <stdio.h>
#include <conio.h>
float sum(float a,float b);
void main()
{
	float a,b,c;
	clrscr();
	printf("\n\nEnter Two Numbers :");
	scanf("%f%f",&a,&b);
	c= sum(a,b);
	printf("\n\n Addition Is :%.2f",c);
	getch();
}
float sum(float a, float b)
{
	return a+b;
}
