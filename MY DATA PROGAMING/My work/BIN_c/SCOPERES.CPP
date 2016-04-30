//Use of scope resoulation Operator ::
#include <iostream.h>
#include <conio.h>
class sum
{
	int a,b;
	public:
		void read()
		{
			cin>>a>>b;
		}
		inline int getsum()
		{
			return a+b;
		}
};
void main()
{
	sum s;
	clrscr();
	s.read();
	cout<<"\n\nSum is : "<<s.getsum();
getch();
}
