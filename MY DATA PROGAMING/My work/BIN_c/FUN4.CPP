#include <stdio.h>
#include <conio.h>
float max(float a, float b, float c);
void main()
{
	float a,b,c,m;
	clrscr();
	printf("\n\n Enter Three Numbers :");
	scanf("%f%f%f",&a,&b,&c);
	m=max(a,b,c);
	printf("\n\nMAX IS :%.2f",m);
	getch();
}
float max(float a, float b, float c)
{
	if(a>b && a>c)
		return a;
	else if(b>c)
		return b;
	else
		return c;
}
