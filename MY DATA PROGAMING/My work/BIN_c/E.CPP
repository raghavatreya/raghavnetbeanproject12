#include<conio.h>
#include<iostream.h>
class r
{    public:
     int a;
     public:
	    r()
	    {
	       a=10;
	       cout<<"\n\nConstructed Call";
	    }
	    ~r()
	    {
		cout<<"\n\nDestructor Call";
		a=0;
		cout<<"\n\nA : "<<a;
	    }
};
void main()
{
	clrscr();
	r p;
}