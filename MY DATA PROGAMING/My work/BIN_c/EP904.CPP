#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
class father
{ char fpname[30];
  public:
    father(char *fname)
    { strcpy(fpname,fname);}
    void show()
    {
      cout<<"\n\nFATHER NAME\n\n"<<fpname;
    }
};
class son : public father
{ char name[30];
 public:
      son(char *sname,char *fname ):father(fname)
      { strcpy(name,sname);

      }
      void show()
      {
       cout<<"SON NAEME:\n\n"<<name;
      }
};
void main()
{ father *fp;
  father f1("raghav");
 fp=&f1;
 fp->show();
 son s1("dog","bitch");
 son *s;
 fp=&s1;
 fp->show();
  fp->show();
}