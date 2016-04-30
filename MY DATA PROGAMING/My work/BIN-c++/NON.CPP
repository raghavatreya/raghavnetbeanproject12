#include<iostream.h>
#include<conio.h>
#include<string.h>
class string
{
  char* name;
  char s[23];
  int length;
    public:
	    void getname()
	    {
	       cout<<"enter name ";
	       cin>>s;
	       length=strlen(s);
	       name=new char[length+1];
	       strcpy(name,s);
	    }
	    string join(string &q,string &w)
	    {
	      string temp;
	      length=q.length + w.length;
	       strcpy(name,q.name);
	       strcat(name,w.name);
	       return(temp);
	    }
	    void out()
	    { cout<<"name is :\n"<<name;
	    }
};
void main()
{
 clrscr();
  string a,b,c;
  a.getname();
  b.getname();
  getch();
  c.join(a,b);
  c.out();
}
