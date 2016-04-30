#include<iostream.h>
#include<conio.h>
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
	  p=char new [len +1];
	  strcpy(p,s);
       }
       string()
       {   delete p;
       }
       string operator +(const string &s,const string &t)
       {   len=s.len+t.len;
	   p=new char [len+2];
	   strcpy(p,s);
	   strcat(p," ");
	   strcat(p,t);
       }
	int operator <= (const string &s ,const string &t)
       {
	 int a=s.len;
	 int b=t.len;
	 if(a>b)
	 return 1;

	 return 0;
       }
	void show(const string s)
	{
	 cout<<"string is:"<<s;
	}
};
void main()
{ string s1="new";
  string s2="york";
  string s3="delhi";
  string t1,t2,t3;
  t1=s1;
  t2=s2;
  t3=s1+s2;
  cout<<"\n\nt1:"<<t1;
  cout<<"\nt2:"<<t2;
  cout<<"\n\nt3:"<<t3;
  cout<<"\n\n";
  if(t1<=t2)
  { cout<<"smaller";
    show(t1);
  }
  else
  { cout<<"smaller ";
    show(t2);
  }
}