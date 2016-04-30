#include <stdio.h>
#include <conio.h>
float area(float r);
void main()
{
	float r;
	clrscr();
	printf("\n\nEnter The Value Of Radius : ");
	scanf("%f",&r);
	area(r);
	getch();
}
float area(float r)
{
	float a;
	a=3.14*r*r;
	printf("\n\nArea Of Circle : %.2f",a);
}
