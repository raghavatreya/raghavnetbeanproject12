#include<stdio.h>
//#include <stdlib.h>


void insert();
void modify();
void display();


    struct stu
{
    char *name[100];
    char add[100];
    int day;
    int month;
    int year;

};
typedef struct stu record;

int main()
{
    record *st_ptr;
    int class_size=10;
    st_ptr=(record *)calloc(class_size, sizeof(record));
    int a,b;
    do
    {
    printf("\n1.Insert");
    printf("\n2.Modify");
    printf("\n3.Display");
    printf("\nEnter choice:");
	scanf("%d",&a);
    printf("\nEnter student roll:");
    scanf("%d",&b);
    
	switch(a)
    {
        case 1:
        insert(st_ptr+b);
        break;

        case 2:
        modify(st_ptr+b);
        break;

        case 3:
        display(st_ptr+b);
        break;
        
        /*case 4;
        st_ptr=(record *)realloc(st_ptr,11);
        insert(st_ptr+b);
        break;*/

        default:
        printf("\nInvalid choice!!");
    }
}
    while(a!='\n');
    getch();
}

void insert(record *i)
{
i=i-1;

    printf("\nEnter name:");
    fflush(stdin);
    scanf("%s",i->name);

    printf("\nEnter address:");
    fflush(stdin);
    scanf("%s",i->add);

    printf("\nEnter day of birth:");
    scanf("%d",&i->day);


    printf("\nEnter month of birth:");
    scanf("%d",&i->month);


    printf("\nEnter year of birth:");
    scanf("%d",&i->year);
}

void modify(record *i)
{
	display(i);
	i=i-1;

    printf("\nEnter new name:");
    fflush(stdin);
    gets(i->name);

    printf("\nEnter new address:");
    fflush(stdin);
     gets(i->add);

    printf("\nEnter new day of birth:");
    scanf("%d",&i->day);


    printf("\nEnter new month of birth:");
    scanf("%d",&i->month);


    printf("\nEnter new year of birth:");
    scanf("%d",&i->year);
}
void display(record *i)
{
i=i-1;

    printf("\nname:");
    fflush(stdin);
    puts(i->name);

    printf("\naddress:");
    fflush(stdin);
    puts(i->add);

    printf("\ndate of birth:");
    printf("%d/%d/%d",i->day,i->month,i->year);


   /* printf("\nmonth of birth:");
    printf("%d",i->month);


    printf("\nyear of birth:");
    printf("%d",i->year);*/ 
}


