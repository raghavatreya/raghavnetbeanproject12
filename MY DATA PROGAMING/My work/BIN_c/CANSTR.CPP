#include<iostream.h>
#include<conio.h>
#include<string.h>
class string
{  char *name;
   int l;
     public:
		 void getlength(int p)
		{
		   l=p;
		  name=new char[l+1];
		}

		 void getname(char *s)
		 {
		     strcpy(name,s);
		 }
		void display()
		 {
		   cout<<" name  :"<<name<<"\n";
		 }
		void join(string &a,string &b)
		{        l=a.l+b.l;
			 name=new char[l+1];
			strcpy(name,a.name);
			strcat(name,b.name);
		 }
};

void main()
{  char p[21];
   string a,b,c;
   cout<<"enter name";
   cin>>p;
   int l=strlen(p);
   a.getlength(l);
   a.getname(p);
   cout<<"enter second name";
   cin>>p;
   l=strlen(p);
   b.getlength(l);
   b.getname(p);
   a.display();
   b.display();
   c.join(a,b);
   c.display();
}
