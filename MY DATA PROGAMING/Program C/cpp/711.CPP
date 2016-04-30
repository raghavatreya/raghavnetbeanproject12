#include<string.h>
#include<iostream.h>
#include<conio.h>
class FLOAT
{
  float p;
   public:
	 FLOAT()
	 { cout<<"enter a float value";
	   cin>>p;
	 }
	 friend float  operator + (FLOAT a,FLOAT b );
	 friend float  operator - (FLOAT a,FLOAT b);
	 friend float  operator * (FLOAT a,FLOAT b);
	 friend float  operator / (FLOAT a,FLOAT b);
	 void show()
	 { cout<<"\n\n"<<p;
	 }
};
float operator +(FLOAT a,FLOAT b )
{  return (a.p+b.p);
 }
float operator -(FLOAT a,FLOAT b)
{  return(a.p-b.p);
}
float operator *(FLOAT a,FLOAT b)
{ return(a.p*b.p);
}
 float operator /(FLOAT a,FLOAT b)
 {  return(a.p/b.p);
 }
void main()
{ FLOAT a;
  FLOAT b;
  float  c,e,d,f;
  c=a+b;
  cout<<" \n\n sum:  \n"<<c;
  e=a-b;
  cout<<"\n\n  min :"<<e;
  d=a*b;
  cout<<"\n\nmultiplication :" <<d;
  f=a/b;
  cout<<"\n\n divis.    "<<f;
  cout<<"**********end of program *****************";


}