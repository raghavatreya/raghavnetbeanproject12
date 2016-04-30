#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
class math
{  public:
	  int a,b;
	  void gettwo();
	  int big();
	  int out();
};
void math ::gettwo()
{ cout<<"****enter two number *****";
  cin>>a>>b;
}
int math :: big()
{
 if(b>a)
  { a==b;
    return(b);
  }
  return(a);
}
int math :: out()
{
 cout<<a;
 return 0;
}
void main()
{ clrscr();
 math m;
 m.gettwo();
 cout<<"***********big number "<<m.big()<<"****************";
 m.out();
 getch();

}