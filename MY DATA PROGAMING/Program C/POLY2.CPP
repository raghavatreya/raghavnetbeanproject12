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
 void swap(Array A,int j)
 {     int k,temp,i;
    // Array *A;
       for(k=0;k<j;++k)
	   {
		  for(i=0;i<j;++i)
		    {
			  if( (A+i)->pow > (A+k)->pow)
				   {
					  temp =  (A+i)->pow;
					  (A+i)->pow= (A+k)->pow;
					  (A+k)->pow =temp;
					  temp = (A+i)->coeff;
					  (A+i)->coeff=(A+k)->coeff;
				       (A+k)->coeff=temp;
				}
			}
		}
 }
};
void main()
{
clrscr();
int i,j,k;
cout<<"\nHow Many term\n";
cin>>i;
Array *A;
A = new Array();
for(j=0;j<i;++j)
{
  (A+j)->getdata();
}
//int temp;

A->swap(A,i);
for(j=0;j<i;++j)
{
//  Array A[i];
  (A+j)->printdata();
  cout<<"+";
}

getch();
}