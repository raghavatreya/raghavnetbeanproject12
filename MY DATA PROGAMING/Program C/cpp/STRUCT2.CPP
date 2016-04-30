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
	student s[3];
	int i,j;
	int sum=0;
	float per=0.0;
	clrscr();
	printf("\n\nEnter Student's Roll No : ");
	for(i=0;i<3;i++)
		scanf("%d",&s[i].roll);

	printf("\n\nEnter Student Name : ");
	for(i=0;i<3;i++)
		scanf("%s",&s[i].n);

	printf("\n\nEnter Students Marks :");
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
			scanf("%d",&s[i].m[j]);
	}
	for(i=0;i<3;i++)
	{
		printf("\n\nStudent's Roll No : %d",s[i].roll);
		printf("\nStudent's Name : %s",s[i].n);
		for(j=0;j<5;j++)
		{
			sum=sum+s[i].m[j];
		}
		per = sum/500.0*100.0;
		printf("\nSum is : %d",sum);
		printf("\nPer is : %.2f",per);
		if(per>=60)
			printf("\nFirst Div.");
		else if(per>=45 && per<60)
			printf("\nSecund Div.");
		else if(per>=36 && per<45)
			printf("\nThird Div.");
		else
			printf("\nFail");
		sum=0;
		per=0.0;
	}
getch();
}