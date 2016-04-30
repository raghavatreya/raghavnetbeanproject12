#include<iostream.h>
#include<conio.h>
class student
{ protected:
 int roll_number;
 public:
   void get_number(int a)
   { roll_number=a;
   }
   void put_number(void )
   { cout<<"Roll Number="<<roll_number<<"\n";
   }
};
class test : public student
{ protected:
  float sub1;
  float sub2;
  public:
  void get_marks(float a,float b)
  {  sub1=a;
     sub2=b;
  }
  void put_marks()
  { cout<<"\n\nmarks of subject one is  ;"<<sub1;
    cout<<"\n\n marks of subject two is   :"<<sub2;
  }

};
class result : public test
{ float total ;
 public:
  void display()
  { total =sub1+sub2;
     put_number();
     put_marks();
     cout<<"\n\ntotal of marks is:" <<total;
  }
};
void main()
{
result student1;
student1.get_number(111);
student1.get_marks(75.0,59.5);
student1.display();
}
