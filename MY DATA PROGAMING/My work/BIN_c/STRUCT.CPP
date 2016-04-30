#include <stdio.h>
#include <conio.h>
typedef struct student
{
	int id;
	char n[10];
};
void main()
{
	student s;
	clrscr();
	printf("\n\nSize Of Student Data Type is : %d",sizeof(s));
	printf("\n\nEnter ID :");
	scanf("%d",&s.id);
	printf("\n\nEnter Name : ");
	scanf("%s",&s.n);
	printf("\n\nid = %d",s.id);
	printf("\n\nName = %s",s.n);
getch();
}