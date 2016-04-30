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
 int commondata(Array A1,Array A2,int j)
 {
	  if(A1.coeff == A2.coeff || A1.pow==A2.pow)
		 { coeff = A1.coeff;
		  pow = A2.pow;
		  ++j;
	  }
	return j;
 }
};
void main()
{
clrscr();
int i,j=0;
Array A1[5],A2[7],*A3;
A3 = new Array();
cout<<"\n First Series";
for(i=0;i<5;++i)
A1[i].getdata();
cout<<"\nEnter Second series";
for(i=0;i<7;++i)
A2[i].getdata();
for(i=0;i<5;++i)
{
j=A3[j].commondata(A1[i],A2[i],j);
}
clrscr();
cout<<"\nFirst Series";
for(i=0;i<5;++i)
{
A1[i].printdata();cout<<"+";
}
cout<<"\n Second SEries";
for(i=0;i<7;++i) {
A2[i].printdata();
cout<<"+";
}
cout<<"\n Common Series";
for(i=0;i<j;++i)
{
A3[i].printdata();cout<<"+";
}
getch();
}