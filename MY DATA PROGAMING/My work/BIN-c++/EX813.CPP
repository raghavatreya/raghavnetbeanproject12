#include<iostream.h>
#include<conio.h>
class staff
{ int code;
  char name[23];
   public:
    void getstaff()
    { cout<<"\n\n Enter code\n";
      cin>>code;
      cout<<"\n\n Enter name code\n";
      cin>>name;
    }
};
class officer : public staff
{ int a;
  public :
     void getofficer()
     { cout<<"\nEnter grade\n";
       cin>>a;
     }
};
class teacher : public staff
{ char publication [23];
  char subject[23];
  public:
  void getteacher()
  {
   cout<<"\nEnter name of publication\n";
   cin>>publication;
   cout<<"\n Enter Name of subject\n";
   cin>>subject;
  }
};
class typist : public staff
{ int speed;
    public :
    void gettypist()
    {  cout<<"\nEnter typist speed\n";
       cin>>speed;
    }
};
class regular  : public typist
{ int a;
  public :
  //  cout<<"Enter 1 for regular typist and \n\n ";
  //  cin>>a;
};
class casual : public typist
{ int daily;
  int wages;
  public:
      void getcasual()
      { cout<<"Enter daily";
	cin>>daily;
	cout<<"Enter wages";
	cin>>wages;
      }
};
void main()
{ clrscr();
staff a;
teacher b;
typist c;
//regular d;
officer e;
casual s;
a.getstaff();
b.getteacher();
e.getofficer();
c.gettypist();
//d.getregular();
s.getcasual();
getch();
}