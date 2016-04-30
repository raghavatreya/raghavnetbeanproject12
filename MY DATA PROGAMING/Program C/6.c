//Write a c program to find the time to do the task in Program 2 and 4 for similar data.
#include<stdio.h>
#include<conio.h>
#include<time.h>
int main()
{
	
	int c,a,b;
	clock_t begin, end;
double time_spent;
begin = clock();
scanf("%d",&a);
scanf("%d",&b);
for(a=a;a>0;a--)
b=c*a;
printf("%d",c);

end = clock();
time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Write a c program to find the time to do the task in Program 2 and 4 for similar data.\n");
	printf("%f",time_spent);
	getch();
	return 0;
}
