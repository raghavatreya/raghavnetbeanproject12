#include<conio.h>                                                 \
#include<iostream.h>
class item
{
	static int count;
	int num;
	public:
	void getdata(int a)
	{
		num=a;
		count++;
	}
	void getcount()
	{
	cout<<"	"<<count;
	}
};
int item::count;
void main()
{
	clrscr();
	item a,b,c;
	cout<<"\nValues are :	";
	a.getcount();
	b.getcount();
	c.getcount();
	a.getdata(100);
	b.getdata(200);
	c.getdata(300);
	cout<<"\nAfter reading values :";
	a.getcount();
	b.getcount();
	c.getcount();
	getch();
}