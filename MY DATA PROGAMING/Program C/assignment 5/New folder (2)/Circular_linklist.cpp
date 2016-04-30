#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
#include "linklist.h"

int main()
{
   int select=1;

    while(select!=0)
    {
             system("cls");
             select=showMenu3();

             switch(select)
             {
                     case 2:
                          displaycll();
                          printf("\n");
                          system("pause");
                          break;
                     case 3:
                          insertItem();
                          break;
                     case 4:
                          deleteItem();
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
