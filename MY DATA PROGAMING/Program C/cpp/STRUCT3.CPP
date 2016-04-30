#include <stdio.h>
#include <conio.h>
struct student
{
	int roll,year;
	char n[15],d[15],c[15];
};
void main()
{
	struct student s[3];
	int i,y,r;
	clrscr();
	printf("\n\nEnter Student's Roll No : ");
	for(i=0;i<3;i++)
		scanf("%d",&s[i].roll);

	printf("\n\nEnter Student's Name : ");
	for(i=0;i<3;i++)
		scanf("%s",&s[i].n);

	printf("\n\nEnter Department : ");
	for(i=0;i<3;i++)
		scanf("%s",&s[i].d);

	printf("\n\nEnter Course : ");
	for(i=0;i<3;i++)
		scanf("%s",&s[i].c);

	printf("\n\nEnter Year Of Joining : ");
	for(i=0;i<3;i++)
		scanf("%d",&s[i].year);

	printf("\n\nEnter year you want to see students joining this year : ");
	scanf("%d",&y);
	for(i=0;i<3;i++)
	{
		printf("\n\nStudents Join This Year :");
		if(s[i].year==y)
		{
			printf("\n %s",s[i].n);
		}
	}

	printf("\n\nEnter Student Roll No :");
	scanf("%d",&r);
	for(i=0;i<3;i++)
	{
		if(s[i].roll==r)
		{
			printf("\n\nStudent Deatail Is :");
			printf("\nName : %s",s[i].n);
			printf("\nDepartment : %s",s[i].d);
			printf("\nCourse : %s",s[i].c);
			printf("\nYear Of Joining : %d",s[i].year);
		}
	}
	getch();
}
