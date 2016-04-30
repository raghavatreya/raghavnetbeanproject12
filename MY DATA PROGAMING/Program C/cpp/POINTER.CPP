#include<iostream.h>
#include<conio.h>
void main()
{ clrscr();
  int a=5;
  int *p;
  int **q;
  q=&(p);
  p=&a;

 cout<<"\n"<<a<<" \n"<<*p<<"\n"<<*q;
  getch();
}