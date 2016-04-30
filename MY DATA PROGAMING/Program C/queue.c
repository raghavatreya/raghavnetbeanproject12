#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<sys/time.h>

#define MAX=10

int Reservation[10];
void add();
void delete();
int rear=-1,front=-1;
int main()
{
	/* ADT*/
// circular fashion
	int A;
	while(1)
	{
		printf("1. Enter For Enqueue \n ");
		printf("2. Enter For Deueued \n");
		printf("3. Enter For Exit \n");
		scanf("%d",&A);
		switch( A )
		{
			case 1: add();
			 		break;
			case 2: delete();
					break; 		
			case 3: exit(1); 
		}
	}
	getch();
	return 0;
}
void delete()
{
	int i;/*the Enter the index is very bad*/
	printf("Enter The Index \n");
	scanf("%d",&i);
	//if(rea)
	for(i=i;i<rear;i++)
	{
		Reservation[i]=Reservation[i+1];
	}
}
void add()
{
	printf("Enter ");
}
