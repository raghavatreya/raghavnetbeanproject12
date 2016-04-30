#include <iostream.h>
#include <conio.h>
class A
{
	int a,b;
	public:
		A()//default contructor
		{
			cout<<"\n\nDefault Contructor";
		}
		A(int p)
		{
			a=p;
			cout<<"\n\nSingle Argument Contructor";
		}
		A(int p, int q)
		{
			a = p;
			b = q;
			cout<<"\n\nMultiparameterized Contructor";
		}
};
void main()
{
	clrscr();
	A a;
	A b(2);
	A c(2,3);
}
