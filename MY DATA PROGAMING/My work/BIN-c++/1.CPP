#include <iostream.h>
#include <conio.h>
class sum
{
	int a,b;
	public:
		void setdata(int p, int q)
		{
			a=p;
			b=q;
		}
		int getsum()
		{
			return a+b;
		}
};
void main()
{
	sum s;//s is an object of class sum
	clrscr();
	int a,b;
	cin>>a>>b;
	s.setdata(a,b);
	cout<<"\n\nAddition is : "<<s.getsum();
getch();
}