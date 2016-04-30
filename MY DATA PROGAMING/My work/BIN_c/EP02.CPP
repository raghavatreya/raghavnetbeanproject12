#include<iostream.h>
#include<conio.h>
void main()
{ clrscr();
int a,*ptr1,**ptr2;
ptr1=&a;
ptr2=&ptr1;
cout<<"\n\n &a :"<<ptr1;
cout<<"\n\n &ptr1  :"<<ptr2;
ptr1+=2;
ptr2+=2;
cout<<"\n\n &a :"<<ptr1;
cout<<"\n\n &ptr1   :"<<ptr2;
getch();
}