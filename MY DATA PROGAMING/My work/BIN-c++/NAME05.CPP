#include<ioStream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
#include<iomanip.h>
class employ
{  public:
   char name[40];
   char qualification[30];
   char designation[30];
   float salary;
   int id;
	      public:
		   employ()
		   {
		     cout<<"Enter name \t :\n";
		     cin>>name;
		     cout<<"Enter designation \t :\n";
		     cin>>designation;
		     cout<<"Enter id\t\t: \n";
		     cin>>id;
		     cout<<"Enter qualification";
		     cin>>qualification;
		     cout<<"\nEnter salary\t\t :\n";
		     cin>>salary;
		   }
};
void main()
{
  employ em[1];
  int i;
  cout<<"\nEnter 1 for working with oldder information\n\n";
  cin>>i;
  if(i==1)
  {
    goto lable1;
  }

{
lable1:
cout<<"\n--------------------------------------------------------\n";

int i,p,w,z=0;
cout<<"---------------------------------------------------------------";
cout<<"Enter 1 for search via employ id \n Enter 2 for search via employ name\n";
cin>>i;
if(i==1)
{
cout<<"Enter employ id";
cin>>p;
for(i=0;i<2;i++)
{
w=em[i].id;
if(w==p)
{
cout<<"congratulation \n\t\t your name is in database";
}	}	}
else
{
char s[40];
cout<<"Enter name \t:";

cin>>s;
for(i=0;i<2;i++)
{
if(strcpy(em[i].name,s)==0)
{
cout<<"congratulation \n\t\t your name is in database\n\n";
}	 }     }
}
}