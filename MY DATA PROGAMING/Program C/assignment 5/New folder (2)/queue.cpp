#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
#include "linklist.h"

int main()
{
   int select=1,no;

    while(select!=0)
    {
             system("cls");
             select=showMenu();

             switch(select)
             {
                     case 2:
                          display();
                          printf("\n");
                          system("pause");
                          break;
                     case 3:
                          printf("Enter no:");
                          scanf("%d",&no);
                          push(no);
                          break;
                     case 4:
                          pop();
                          system("pause");
                          break;
                     case 5:
                          peep();
                          system("pause");
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
