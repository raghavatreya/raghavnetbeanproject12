#include <iostream.h>
#include <conio.h>
class A
{
	public:
		void sayA()
		{
			cout<<"\n\nHi.. I am Base Class";
		}
};
class B : public A
{
	public:
		void sayB()
		{
			cout<<"\n\nHi.. I am Derived Class";
		}
};
void main()
{
	B p;
	clrscr();
	p.sayA();
	p.sayB();
getch();
}