#include<iostream.h>
#include<conio.h>
class name
{  protected:
   int roll;
   public:
   void getroll(int q)
   { roll=q;
   }
};
class test : public name
{ float M1,M2;
  public:
      void getmarks()
   { cout<<"enter marks of two subject:\n\n";
    cin>>M1>>M2;
    }
};
class sports : public name
{ int exta;
   public:
   void extara()
   { cout<<"enter extra num";
   cin>>exta;
   }
};
class result :public sports,public test ,public name
{  public:
   void show()
   { cout<<(exta+M1+M2);
   }
};
void main()
{  result a;
   a.getroll(5);
   a.getmarks();
   a.extara();
   a.show();
}