#include<iostream.h>
#include<conio.h>
void main()
{
	long int a,b,c;
	clrscr();

    cout<<"\n\n         enter three  number";
    cin>>a>>b>>c;
    if(a>c)
    {
       if(a>b)
       {
	cout<<a;
       }
       else
       {
	cout<<b;
       }
    }
    else
    {
       if(b>c)
       {
	cout<<b;
       }
       else
       {
	cout<<c;
       }
    }
    c=a+b*c;
    cout<<"\n\n\n\n"<<c;
 getch();
}