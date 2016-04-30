#include <stdio.h>
#include <conio.h>
float sum(float a, float b, float c);
void avg(float a);
void main()
{
	float a,b,c,s=0,d=0;
	clrscr();
	printf("\n\nEnter Three Numbers :");
	scanf("%f%f%f",&a,&b,&c);
	s=sum(a,b,c);
	printf("\n\nSUM IS : %.2f",s);
	getch();
}
float sum(float a, float b ,float c)
{
	float p;
	p= a+b+c;
	avg(p);
	return p;
}
void avg(float a)
{
	float av;
	av = a/3.0;
	printf("\n\nAverage is : %.2f",av);
}