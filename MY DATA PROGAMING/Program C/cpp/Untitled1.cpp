#include<stdio.h>
#include<conio.h>
int get(int q);
int main()
{
	int d;
	d=get(4);
	printf("%d",d);
	
	getch();
	return 0;
}
int get(int q)
{
	q=q*get(q-1);
	if(q==1)
	return q;
	else
	return --q;
}
