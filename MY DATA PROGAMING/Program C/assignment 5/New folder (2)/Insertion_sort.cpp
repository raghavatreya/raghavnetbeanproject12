/* Linked list*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include "linklist.h"

int showMenu1();

int main()
{
    int select=1,no;

    while(select!=0)
    {
        system("cls");
        select=showMenu1();
        switch(select)
        {
            case 1:
                display();
                printf("\n");
                system("pause");
                break;
            case 2:
                printf("Enter data : ");
                scanf("%d",&no); 
                insertionSort(no);
                break;
            case 3:
                wholeDelete();
                break;
            case 0:
                return 0;
            default:
                printf("\n Enter valid Number \n");
                break;
        }
    }
    return 0;
}


int showMenu1()
{
    int select;
    printf("\n 1.   Display1");
    printf("\n 2.   Sorted  Insertion (Insertion Sort)");
    printf("\n 3.  total  Deletion(vanish)");
    printf("\n 0.   EXIT\n");
    printf("\n Enter your choice:");
    scanf("%d",&select);

    return select;
}
