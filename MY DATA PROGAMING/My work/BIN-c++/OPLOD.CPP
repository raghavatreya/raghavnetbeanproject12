
#include<iostream.h>
#include<conio.h>
class raghav
{ float x,y;
  public:
	void getnum()
	{ cout<<"enter a complex  number:\n";
	  cin>>x>>y;
	}
	raghav operator + (raghav a)
	{   raghav temp;
	    temp.x=x+a.x;
	    temp.y=y+a.y;
	    cout<<"***************************sum***********\n";
	    cout<<temp.x<<"+j"<<temp.y;
	    return (temp);

	}
	void display()
	{ cout<<"\n"<<x<<"+j"<<y;
	}
};
void main()
{
  clrscr();
  raghav a,b,c;
  a.getnum();
  b.getnum();
  c=a+b;
  a.display();
  b.display();
  c.display();
  getch();
}
