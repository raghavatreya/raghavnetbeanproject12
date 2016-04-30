#include<iostream.h>
#include<conio.h>
class math
{
    int a,b,c;
    public:
	 void getnum( )
	 {  cout<<"enter two value";
	    cin>>a>>b;
	 }
	 void add()
	   { cout<<a+b;
	    }
};
void main()
{
  math s;
   s.getnum();
 s.add();
 getch();
}