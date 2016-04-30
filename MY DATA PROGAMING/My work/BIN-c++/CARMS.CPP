#include<iostream.h>
#include<conio.h>
class raghav
{
   int a,b,c,d;
     public:
	  void armstrong(int x)
	  {
	      int p,q;
	      for(a=1;a<=x;a=a+1)
	      {  q=0;
		 p=a;
		   for(;p>0;)
			{
				 c=p%10;
			q=q+c*c*c;
			p=p/10;
			}
		   if(q==a)
			{
			 cout<<"armstrong"<<a;
			}
		   a=a+1;
	       }
	       }
 };
 void main()
 {   raghav k;
 clrscr();
     int a;
     cout<<"enter a value of a";
     cin>>a;
     k.armstrong(a);

     getch();
 }