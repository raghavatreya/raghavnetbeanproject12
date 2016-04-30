#include<iostream.h>
#include<conio.h>
#include<string.h>
class string
{
  char *p;
  int len;
  public:
       string()
       {
	 len=0;
	 p=0;
       }
       string(const char *s)
       { len=strlen(s);
	 p=new char [len+1];
	 strcpy(p,s);
       }
       string(const string &s)
       {
	  len=s.len;
	  p=new char [len +1];
	  strcpy(p,s.p);
       }
       ~string()
       {   delete p;
       }
       friend string operator +(const string &s,const string &t) ;
       friend int operator <= (const string &s ,const string &t);
	void show()
	{
	 cout<<"string is:"<<p;
	}
};
string operator +(const string &s,const string &t)
       {  string temp;
	   temp.len=s.len+t.len;
	   temp.p=new char [temp.len+2];
	   strcpy(temp.p,s.p);
	   strcat(temp.p," ");
	   strcat(temp.p,t.p);
	   return temp;
       }
int operator <= (const string &s ,const string &t)
       {
	 int a=s.len;
	 int b=t.len;
	 if(a>b)
	 return 1;
	 else
	 return 0;
       }

void main()
{ string s1="new";
  string s2="york";
  string s3="delhi";
  string t1,t2,t3;
  t1=s1;
  t2=s2;
  t3=s1+s2;
  cout<<"\n\nt1:";t1.show();
  cout<<"\nt2:";t2.show();
  cout<<"\n\nt3:";t3.show();
  cout<<"\n\n";
  if(t1<=t2)
  { cout<<"smaller";
    t1.show();
  }
  else
  { cout<<"smaller ";
    t2.show();
  }
  getch();
}