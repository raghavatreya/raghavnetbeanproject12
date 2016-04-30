#include<iostream.h>
#include<conio.h>
void main()
{   /*sumof all digit*/
  int n,m=0,j;
  cout<<"nter the value of ";
  cin>>n;
  for(;n>0;n=n/10)
    {   m=m+(n%10);
    }
cout<<m;

    getch();
     }
