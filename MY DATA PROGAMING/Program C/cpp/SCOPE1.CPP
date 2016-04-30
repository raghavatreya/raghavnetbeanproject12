#include<conio.h>
#include<iostream.h>
class raghav
{ int a,b,c;
    public:
	  void get();
	  void mul();
	  void div();

};
void raghav :: get()
{  cout<<"enter two :\n\n";
   cin>>a>>b;
}
void raghav :: mul()
{ cout<<"\n\n"<<a*b;
}
void raghav::div()
{ cout<<"\n\n"<<a/b;
}
void main()
{  clrscr();
  raghav s;
  s.get();
  s.mul();
  s.div();
  getch();
}