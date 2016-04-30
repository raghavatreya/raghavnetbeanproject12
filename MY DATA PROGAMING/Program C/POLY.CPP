#include<iostream.h>
#include<conio.h>

class Array
{
int coeff,pow;
 public:
 void getdata()
 {
    cout<<"\n Enter Coeff And Pow\n";
	cin>>coeff>>pow;
 }
 void printdata()
 {
   cout<<coeff<<"X^"<<pow;
 }
};
void main()
{
clrscr();
int i,j;
cout<<"\nHow Many term\n";
cin>>i;
Array *A;
A = new Array();
for(j=0;j<i;++j)
{
  (A+j)->getdata();
}
for(j=0;j<i;++j)
{
//  Array A[i];
  (A+j)->printdata();
  cout<<"+";
}

getch();
}