#include<iostream.h>
#include<conio.h>
void main()
{ clrscr();
int m,n;
int *M;
   cout<<"enter raw and column";
   cin>>m,n;
   M=new int [m];
   for(i=0;i<m;i++)
   {   int *M[i];
       M[i]=new int [n];
       for(j=0;j<m;j++)
       {  cout<<"enter value";
	 cin>>m[i][j];
       }
   }
}