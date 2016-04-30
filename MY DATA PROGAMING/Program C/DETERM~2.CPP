#include <stdio.h>
#include <conio.h>
#include <iostream>
#define Row 4
#define Colomn 4

using namespace std;

int main()
{
    int B=0;
	int i,j,Coeff=1,Looplimit=0,immediateresult=0,result=0,a,b,c,d;
	int A[Row][Colomn];
//	clrscr();
	for(i=0;i<Row;++i)
	{
		for(j=0;j<Colomn;++j)
		{
			cout<<" Enter Value\n";
			cin>>A[i][j];
		}

	}
	for(i=0;i<Row;++i)
	{
		    Looplimit=Row-2;
		   // cout<<"the looplimit is "<<Looplimit;
		   Coeff=1;
		   immediateresult=0;
		   B=0;
		   for(j=i;Looplimit>0;--Looplimit)
		   {
			   if(j>3)
			   	j=0;
			   	cout<<"Calculation At \n"<<i<<"\t"<<A[B][j];
			   Coeff = Coeff * A[B][j];
			   ++j;
			   ++B;
			 //  cout<<"the outer for loop"<<Coeff;
		   }
		   cout<<"\n"<<Coeff;
		   	 cout<<"\n ";
		   	  Looplimit=Row-2;
		     a=Looplimit;
			 b=Looplimit+1;
			 c=i+Looplimit;
			 d=i+Looplimit+1;
                cout<<"\n | A "<<a<<" | B   |"<<b<<"  |  C    "<<c<<"   |d      "<<d<<"  |";//<<""<<
		   if(a>=Row)
			   a=a-Row;
		   if(b>=Row)
			   b=b-Row;
		   if(c>=Colomn)
			   c=c-Colomn;
		   if(d>=Colomn)
			   d=d-Colomn;

			               cout<<"\n | A "<<a<<" | B   |"<<b<<"  |  C    "<<c<<"   |d      "<<d<<"  |";//<<""<<
		   immediateresult = A[a][c] * A[b][d] - A[a][d] * A[b][c];
		   cout<<i<<"\n "<<A[a][c]<<"*"<< A[b][d]<<" -"<< A[a][d] <<"*"<< A[b][c];//"<<A[a][b] * A[c][d] - A[a][d] * A[b][c];;
		   if(i%2!=0)
               immediateresult = -immediateresult;
		result = result + immediateresult*Coeff;
		cout<<"\n"<<i<<"the inntermedialte results is \t"<<immediateresult*Coeff;
	}
	cout<<"\n  REsult \t"<<result;
	//getch();
return 1;
}
