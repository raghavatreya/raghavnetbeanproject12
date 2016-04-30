#include<conio.h>
#include<string.h>
#include<iostream.h>
class invent2;
class invent1
{ int code;
  int iteams;
  float price;
    public:
	    invent1(int a,int b,float c)
	    {  iteams=b;
		code=a;
		price=c;
	    }
	    void putdata()
	    {  cout<<"\n\ncode:\n"<<code;
	       cout<<"\n\niteams:\n\n"<<iteams;
	       cout<<"\n\n price:\n\n"<<price;
	    }
	    inline int getcode()
	    {  return code;
	    }
	    inline int getiteams()
	    { return iteams;
	    }
	    float getprice()
	    { return price;
	    }
	    operator float ()
	    { return (iteams * price);
	    }

};
class invent2
{  int code;
   float value;
	 public:
	    invent2()
	    {   code=0;
		value=0;
	    }
	    invent2(int x,float y)
	    { code=x;
	      value=y;
	    }
	    void putdata()
	    {  cout<<"\n\n code:\n\n"<<code<<"\n\n";
	       cout<<"\n\n value:\n\n"<<value<<"\n\n";
	    }
	    invent2(invent1 p)
	    { code=p.getcode();
	      value=p.getiteams()*p.getprice();
	    }
};
void main()
{  clrscr();
   invent1 s1(100,5,140.0);
  invent2 d1;
  float total_value;
  total_value=s1;
  d1=s1;
  cout<<"\n\n product details of invent 1:\n\n";
  s1.putdata();
  cout<<"\n\n stock value "<<"\n";
  cout<<" value: "<<total_value;
  cout<<"product details of invent 2";
  d1.putdata();
  getch();
}