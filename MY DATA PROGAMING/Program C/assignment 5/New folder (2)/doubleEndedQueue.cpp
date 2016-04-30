#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
#include "linklist.h"

int showMenu2();

int main()
{
   int select=1,no;

    while(select!=0)
    {
             system("cls");
             select=showMenu2();

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
                          frontInsertion(no);
                          break;
                     case 3:
                          frontDeletion();
                          break;
                     case 4:
                          printf("Enter data : ");
                          scanf("%d",&no);
                          rearInsertion(no);
                          break;
                     case 5:
                          rearDeletion();
                          break;
                     case 0:
                          break;
                     default:
                             printf("Enter valid Number \n");
                             break;
             }
    }
   return 0;
}
