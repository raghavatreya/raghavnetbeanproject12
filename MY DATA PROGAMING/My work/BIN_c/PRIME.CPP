#include<iostream.h>
#include<conio.h>
class prime{
   int a,b,c;
	  public:
	void getanumber()
	   {   cout<<"enter a number";
		cin>>a;
	   }
	   void primenumber()
	   {    if(a>3)
		 {
		    for(b=2;b<a;b++)
		    {   if( a%b==0 )
			    { c=1;
				}
		    }
		 }
		  else()
		  {
		    c=0;
		  }
		   if(c==0)
		   {cout<<"numbeer is prime";
		   }
		   else()
		   {
		   cout<<"number is not prime";
		   }
     };
    void main()

    { prime q;
	   clrscr();
       q.getanumber();
      q.primenumber();
     getch();


    }
