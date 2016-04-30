#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<iomanip.h>
#include<string.h>
class employ
{  public:
   char name[40];
   char qualification[30];
   char designation[30];
   float salary;
   int id,index;
	      public:
		   void getname()
		    { 	cout<<"Enter name \t :\n";
			cin>>name;

		    }
		    void getdesignation()
		    {
		     cout<<"Enter designation \t :\n";
		     cin>>designation;

		     }
		    void getid()
		    {
		     cout<<"Enter id\t\t: \n";
		     cin>>id;

		    }
		    void getqualification()
		    {
		     cout<<"Enter qualification\n";
		     cin>>qualification;
		    }
		   void getsalary()
		   {  cout<<"\nEnter salary\t\t :\n";
		       cin>>salary;

		   }
};
void main()
{
clrscr();
employ em[100];
int i,j,k,l,p,w,in;
char s[40],t[40];
fstream emplid("id.txt",ios::in | ios::app | ios::ate | ios::binary);
fstream emplname("name.txt",ios::in | ios::app | ios::ate | ios::binary);
fstream empldesignation("designation.txt",ios::in | ios::app | ios::ate | ios::binary);
fstream emplsalary("salary.txt",ios::in | ios::app | ios::ate | ios::binary);
fstream emplqualification("qualification.txt",ios::in | ios::app | ios::ate | ios::binary);
fstream emplindex("index.txt",ios::in | ios::app | ios::ate | ios::binary);
emplindex.seekg(0,ios::end);
int ens=emplindex.tellg();
cout<<"ens =:"<<ens;
emplindex.seekg(0);
emplindex>>w;
for(in=0;in<ens/4;in++)
{ cout<<"*******\n";
 emplname>>em[in].name;
 empldesignation>>em[in].name;
 emplid>>em[in].id;
 emplsalary>>em[in].salary;
 emplqualification>>em[in].qualification;
 emplindex>>w;
 cout<<"in"<<in<<"\n";
		cout<<"name	"<<em[i].name<<"\n";
			cout<<"designation	"<<em[i].designation<<"\n";
			cout<<"salary	"<<em[i].salary<<"\n";
			cout<<"qualification	 "<<em[i].qualification<<"\n";
			cout<<"id	"<<em[i].id<<"\n";
}
in=ens/4;
		for(i=0;i<2;i++)
		{
			em[i+in].getname();
			em[i+in].getdesignation();
			em[i+in].getsalary();
			em[i+in].getqualification();
			em[i+in].getid();
			em[i+in].index=(i+in);
			emplindex<<setw(3)<<em[i+in].index<<endl;
			emplname<<setw(50)<<em[i+in].name<<ends;
			empldesignation<<setw(30)<<em[i+in].designation<<ends;
			emplid<<setw(30)<<em[i+in].id<<ends;
			emplqualification<<setw(30)<<em[i+in].qualification<<ends;
			emplsalary<<setw(30)<<em[i+in].salary<<ends;
		   clrscr();
		}
		p=in;
cout<<"---------------------------------------------------------------";
cout<<"Enter 1 for search via employ id \n Enter 2 for search via employ name\n";
cin>>i;
	if(i==1)
	{
	  cout<<"Enter employ id";
	  cin>>p;
	  in+=2;
	  i=in;
	  for(;i>0;i--)
	  {
	    w=em[i].id;
	    if(w==p)
	    {
	      cout<<"congratulation \n\t\t your name is in database";
	    }	}	}
	    else
	    {
	     cout<<"Enter name \t:";
	     cin>>s;
	      emplname.seekg(0);
	      for(;i>0;i--)
	      {   emplname>>t;
		if(strcmp(t,s)==0)
		{
			cout<<"name	"<<em[i].name<<"\n";
			cout<<"designation	"<<em[i].designation<<"\n";
			cout<<"salary	"<<em[i].salary<<"\n";
			cout<<"qualification	 "<<em[i].qualification<<"\n";
			cout<<"id	"<<em[i].id<<"\n";

		  cout<<"congratulation \n\t\t your name is in database\n\n";
		  }	 }     }

emplid.close();
emplsalary.close();
emplqualification.close();
emplname.close();
empldesignation.close();
emplindex.close();
getch();
}