#include<conio.h>
#include<iostream.h>
#include<string.h>
#include<math.h>
void main()
{ clrscr();
  void power(double d, int a);
  void power(int a,double d);
  void power(int a,int d);
  void power(double a,double d);
  int r,s;
  //double r,s;
   cout<<"enter base and power";
   cin>>r>>s;
   power(r,s);
   power(r,s);
   power(r,s);
   power(r,s);

}
void power(double d, int a)
{   double s=1;
  for(;a>0;a--)
  { s=s*d;
  }
  cout<<"\n\n"<<s;

}
void power(int d, double a)
{
  double s=1;
  for(;a>0;a--)
  { s=s*d;
  }
  cout<<"\n\n"<<s;
}
void power(int d, int a)
{   double s=1;
  for(;a>0;a--)
  { s=s*d;
  }
  cout<<"\n\n"<<s;
}
void power(double d, double a)
{   double s=1;
  for(;a>0;a--)
  { s=s*d;
  }
  cout<<"\n\n"<<s;
}


