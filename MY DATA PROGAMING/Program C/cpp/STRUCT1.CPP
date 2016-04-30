#include<stdio.h>
#include<conio.h>
typedef struct student
{
	int roll;
	char n[15];
	int m[5];
};
void main()
{
	student s;
	int i;
	int sum=0;
	float per=0;
	clrscr();
	printf("\n\nEnter Your Roll No : ");
		scanf("%d",&s.roll);
	printf("\n\nEnter your Name : ");
		scanf("%s",&s.n);

	printf("\n\nEnter Your Marks :");
	for(i=0;i<5;i++)
		scanf("%d",&s.m[i]);
	printf("\n\nRoll No = %d",s.roll);
	printf("\n\nName : %s",s.n);
	for(i=0;i<5;i++)
		sum=sum+s.m[i];
	printf("\n\nTotal Marks : %d",sum);
	per=sum/5.00;
	printf("\n\nPer Is : %.2f",per);
	if(per>=60)
		printf("\n\nFirst Div. Good ");
	else if(per>=45 && per <60)
		printf("\n\nSecond Div. Avg");
	else if(per>=36 && per<45)
		printf("\n\nThird Div. Fine");
	else
		printf("\n\nFail congratulation");
getch();
}