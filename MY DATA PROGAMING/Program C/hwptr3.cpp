#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
void main()
{
 int *p,row,colomn;
 printf("Enter Row And Colomn\n");
 scanf("%d,%d",&row,&colomn);
 p = (int *)malloc(sizeof(int )*row*colomn);
 getch();
 return 0;
}