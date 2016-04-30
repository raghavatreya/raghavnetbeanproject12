#include<iostream.h>
#include<conio.h>
#include<string.h>
class raghav
{      clrscr();
       int roll,year;
       char name[23],department[13],course[12];
       public:
	      void getname(char na[23])
	      {  strcpy(name,na);
	      }
	      void getdepartment(char de[13])
	      { strcpy(department,de);
	      }
	      void getyear(int y)
	      { year=y;
	      }
	      void getroll(int b)
	      {  roll=b;
	      }
	      void getcourse(char co[12])
	      {
		 strcpy(course ,co);
	      }
	      int outroll()
	      { return(roll);
	      }
	      int outjoining()
	      {  return year;
	      }
	      char* outname()
	      { return(name);
	      }
	      char* outcourse()
	      { return(course);
	      }

};
void main()
{     clrscr();
   raghav s[2];
   int r,y,i;
   char na[23],co[12],de[13];
   for(i=0;i<2;i++)
   { cout<<"enter name\n";
     cin>>na;
    s[i]. getname(na);
     cout<<"enter year of joining\n";
     cin>>y;
    s[i]. getyear(y);
     cout<<"enter department name\n";
     cin>>de;
    s[i].getdepartment(de);
     cout<<"enter course\n ";
     cin>>co;
     s[i].getcourse(co);
     cout<<"get rollnumber\n";
     cin>>r;
    s[i].getroll(r);
   }
   int q;
   cout<<"\n\nenter a roll number to search student detail";
   cin>>q;
   for(i=0;i<2;i++)
   { if(s[i].outroll()==q)
	{             cout<<"\n\n name :"<<s[i].outname();
		      cout<<"\n\ncourse  :"<<s[i].outcourse();

	}
   }
   cout<<"\n\n enetr joining year";
   cin>>q;
   for(i=0;i<2;i++)
   { if(s[i].outjoining()==q)
	{             cout<<"\n\n name :"<<s[i].outname();
		      cout<<"\n\ncourse  :"<<s[i].outcourse();

	}
   }


   getch();
}