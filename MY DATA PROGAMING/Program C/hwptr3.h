#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int *p,row,colomn;
cout<<"Enter Row And Colomn\n";
cin<<row<<colomn;
p = (int *)malloc(sizeof(int )*row*colomn);
getch();
return 0;
}