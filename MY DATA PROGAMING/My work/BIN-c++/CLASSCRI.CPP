#include<iostream.h>
#include<conio.h>
#include<string.h>
class raghav
{
    int age,numberoftest,run;
    float avg;
    char name[23];
      public:
	     void getname(char na[23])
	     {strcpy(name,na);
	     }
	     void getage(int ag)
	     {age=ag;
	     }
	     void getnumoftest(int not)
	     {   numberoftest=not;
	     }
	     void getrun(int r)
	     { run=r;
	     }
	     void getavg(float ag)
	     { avg=ag;
	     }
	      char* outname()
	      { return(name);
	      }
	     float outavg()
	     {return(avg);
	     }
	     int outrun()
	     {   return(run);
	     }
	     int outnumoftest()
	     { return(numberoftest);
	     }
	     int outage()
	     { return(age);
	     }
};
void main()
{ int ag,r,not,i,j;
  char na[23];
  raghav s[3];
  clrscr();
  for(i=0;i<3;i++)
     { cout<<"enter name ";
       cin>>na;
       s[i].getname(na);
       cout<<"enter age";
       cin>>ag;
       s[i].getage(ag);
       cout<<"enter run";
       cin>>r;
       s[i].getrun(r);
       cout<<"enter number of test played";
       cin>>not;
       s[i].getnumoftest(not);
       float av=r/not;
       s[i].getavg(av);
    }
      for(i=0;i<2;i++)
      {  float ad;
	 ad=s[i].outavg();
	 for(j=1;j<3;j++)
	 { float ps;
	   ps=s[j].outavg();
	       if(ad>ps)
	       { char o[23];
		  float q,p;
		  strcpy(o,s[j].outname());
		  s[j].getname(s[i].outname());
		  s[i].getname(o);
		  int a;
		  a=s[j].outrun();
		  s[j].getrun(s[i].outrun());
		  s[i].getrun(a);
		  int b;
		  b=s[j].outage();
		  s[j].getage(s[i].outage());
		  s[i].getage(b);
		  int c;
		  c=s[j].outnumoftest();
		  s[j].getnumoftest(s[i].outnumoftest());
		  s[i].getnumoftest(c);
		  float z;
		  z=s[j].outavg();
		  s[j].getavg(s[i].outavg());
		  s[i].getavg(z);
	       }
	 }
      }
    for(i=0;i<3;i++)
    {
	cout<<"\n name"<<s[i].outname();
	cout<<"\n age"<<s[i].outage();
	cout<<"\n avg "<<s[i].outavg();
	cout<<"\n run"<<s[i].outrun();
	cout<<"\n numof test"<<s[i].outnumoftest();
    }
    getch();
}