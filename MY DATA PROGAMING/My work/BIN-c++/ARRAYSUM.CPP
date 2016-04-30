#include<iostream.h>
#include<conio.h>
class array
{
  float x[3];
  public:
	void getnum()
	{  int i;
	   for(i=0;i<3;i++)
	     {
		 cout<<"enter vlaue of ith  element";
		 cin>>x[i];

	     }

	}
	array operator + (array a)
	{  int i;
	   array temp;
	  for(i=0;i<3;i++)
	    {
	     temp.x[i]=x[i]+a.x[i];
	    }
	    return (temp);
	}
	void display()
	{   int i;
	     cout<<"array";
	     for(i=0;i<3;i++)
	     {
		 cout<<"\n"<<x[i];

	     }

	}
};
void main()
{ clrscr();
  array a,b,c;
  a.getnum();
  b.getnum();
  c=a+b;
  a.display();
  b.display();
  c.display();
  getch();

}
int a[5],b[5],c[5];
cout<<"\n\nEnter First Array Elements : ";
for(i=0;i<5;i++)
	cin>>a[i];
cout<<"\n\nEnter Second Array Elements : ";
for(i=0;i<5;i++)
	cin>>b[i];
c=a+b;
