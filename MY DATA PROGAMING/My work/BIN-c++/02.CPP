#include<iostream.h>
#include<conio.h>
class M
{
	int x,y;
	public:
	void set(int a,int b)
	{
	x=a;
	y=b;
	}
	friend int sum(M m);
};
int sum(M m)
{

	int M :: * px=&M :: x;    // *px=x
	int M :: * py=&M :: y;     //  *py=y
	M *pm=&m;   //???
	int S=m.*px+pm->*py;//??
	return S;
}
int main()
{
   M n;
   void (M :: *pf)(int ,int)=&M :: set;    //pointer to set function
   (n.*pf)(10,20);
   cout<<"sum="<<sum(n)<<"\n";

   M *op=&n;
   (op->*pf)(30,40);
   cout<<"sum ="<<sum(n)<<"\n";

   return 0;
   getch();
}

