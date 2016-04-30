#include<iostream.h>
#include<conio.h>
#include<string.h>
template<class t1 , class t2 >
class mul
{
 t1 p;
 t2 q;
 public:
	mul(t1 x,t2 y)
	{
	 p=x;
	 q=y;
	 cout<<" maultiplication results : \n"<<p*q;
	}
};
void main()
{
 clrscr();
 mul<float , float>(12.2,12.2);
 getch();
}