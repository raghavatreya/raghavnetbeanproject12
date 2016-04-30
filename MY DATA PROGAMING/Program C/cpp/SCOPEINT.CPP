#include<conio.h>
#include<iostream.h>
//program to dafault
void main()
{      clrscr();
	void inte(float a=1000,float b=10,float c=2);
	float a,r,y;
  cout<<"enter rate,amount,year";
  cin>>r>>a>>y;
  inte(a,r,y);
  getch();
}
void inte(float a,float b,float c)
{   float d=0;
	while(c>0)
   {a=a*(1+.01*b);
     d=a*.01*b+d;
     c=c-1;
   }
   cout<<"\n\n\n payable amount:" <<a;
   cout<<"\n\n  interest:"<<d;
}