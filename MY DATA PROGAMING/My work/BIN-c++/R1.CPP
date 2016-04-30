#include<iostream.h>
#include<conio.h>
void main()
{ int n,b=1,d;
    cout<<"enter the value of n";
    cin>>n;
    for(;n>0;)
    {      b=b*n;
      n=n-1;
    }
    cout<<b;

  getch();
}
