#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<sys/time.h>
int Reservation[10];
void getname();
void retrive();
int main()
{
	int A;
	while(1)
	{
		printf("1. Enter For Push Element \n ");
		printf("2. Enter For POP An Element \n");
		printf("3. Enter For Exit");
		scanf("%d",&A);
		switch(A)
		{
			case 1: getname();
			 		break;
			case 2: retrive();
					break; 		
			case 3: exit(1); 
		}
	}
	getch();
	return 0;
}
