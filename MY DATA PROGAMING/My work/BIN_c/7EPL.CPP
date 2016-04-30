#include<iostream.h>
#include<conio.h>
class test
{
   public:
     int num;
     test(int j)
     { num=j;
     }
     test *operator->(void)
     { return (this);
     }
};
void main()
{
  test T(5);
  test *ptr=&T;
  cout<<"t.num="<<T.num;
  cout<<"\n ptr->num"<<ptr->num;
  cout<<"\n t->num"<<T->num;

}