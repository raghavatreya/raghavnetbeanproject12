#include<stdio.h>
#include<stdlib.h>
#define max 10
 struct reservation{
	char name[20],age[10],id[20];
	long int pnr;
}s[10];
int front=-1,rear=-1,queue[max];
void enqueue()
{
	if(rear==max-1)
	printf("\n queue overflow!!!!!!!!");
	else
	{	
	rear++;
	fflush(stdin);
	printf("\n enter name of person:");
	gets(s[rear].name);
	fflush(stdin);
	printf("\n enter the age of person:");
	gets(s[rear].age);	
	printf("\n enter id no:");
	gets(s[rear].id);
}
}
void dequeue()
{
	int x;
	if(front==rear)
	{
	printf("\n queue underflow");
	}
	else
	{
		front++;
		printf("\n deleted data:");
		printf("\n name of person:%s",s[front].name);
		printf("\n age of person:%s",s[front].age);
		printf("\n id of person:%s",s[front].id);
		printf("\n pnr nummber:%ld",&s[front].pnr);
	

	}
}
void display()
{
	if(front==rear)
	printf("\n queue underflow");
	else
	{
		
		int i;
		for(i=front+1;i<=rear;i++)
		{
			printf("\n name of passenger:%s",s[i].name);
			printf("\n age of the passenger:%s",s[i].age);
			printf("\n id of the person:%s",s[i].id);
			printf("\n pnr number is:%ld",&s[i].pnr);			
			printf("\n________________________________");
		}
		
	}
}

int main()
{
	int opt,n;
	while(1)
	{
	printf("\n***MENU***");
	printf("\n1.ENQUEUE");
	printf("\n2.DEQUEUE");
	printf("\n3.DISPLAY");
	printf("\n4.EXIT");
	printf("\nenter ur choice:");
	scanf("%d",&opt);
	switch(opt)
	{
		case 1:
		
			enqueue();
			break;
		case 2:
				dequeue();
				break;
		case 3:
				display();
				break;
		case 4:
				exit(0);
				break;
		}
		
	}
	return 0;
}

