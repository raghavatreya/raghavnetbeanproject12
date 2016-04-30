#include <stdio.h>
#include <conio.h>
float max(float a, float b);
void main()
{
	float a,b,c;
	clrscr();
	printf("\n\nEnter Two Numbers :");
	scanf("%f%f",&a,&b);
	c= max(a,b);
	printf("\n\n MAX IS :%.2f",c);
	getch();
}
float max(float a, float b)
{
	if(a>b)
		return a;
	else
		return b;
}
