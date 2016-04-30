#include<iostream.h>
#include<conio.h>
class B
{ int a;
  public:
    int b;
    void get_ab();
    int get_a();
    void show_a();
};
class D:: private B
{ int c;
   public:
     void mul();
     void display();
};
void B  :: get_ab()
{ cout<<"enter value of a and b";
   cin>>a>>b;

}
int B :: get_a()
{ return a;
}
void B  :: show_a()
{  cout<<"a= "<<a<<"\n";
}
int  D  ::mul()
{  get_ab();
  return a*b;
}
void D :: display()
{ show_a();
cout<<"b="<<b<<"\n";
cout<<"c="<<c<<"\n";
}
void main()
{D d;
clrscr();
 d.mul();
 d.display();
 d.mul();
 d.display();
}