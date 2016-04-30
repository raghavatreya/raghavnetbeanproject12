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
		     cout<<"Enter qualification";
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
ofstream fout;
fout.open("employ.txt",ios::in);
ifstream fin;
fin.open("employ.txt",ios::app);
//fstream del("atreya.dat",ios::in|ios::out);

employ em[2];
      int i,p,w,z=0;

      for(i=0;i<2;i++)
      {
	 em[i].getname();
	 em[i].getdesignation();
	 em[i].getsalary();
	 em[i].getqualification();
	 em[i].getid();
      }
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
cout<<"\n\n-------------------------------------------------------------------\n";
		cout<<"Enter 3 for delete \n Enter 1 for editing \n enter 2 for  create";
		cin>>i;
		if(i==1)
		{  clrscr();
		   cout<<"Enter your choice by which you want to edit database \n 1\t:\t\tid\n2\t:\t\tname ";
		   cin>>i;
				 if(i==1)
				 {
					cout<<"Enter employ id";
					cin>>p;
					clrscr();
					for(i=0;i<2;i++)
						{
						  w=em[i].id;
						  if(w==p)

							{       	  cout<<"Enter name \t :\n ";
									  cin>>em[i].name;
									  cout<<"Enter designation \t :\n";
									  cin>>em[i].designation;
									  cout<<"Enter id\t\t: \n";
									  cin>>em[i].id;
									  cout<<"Enter qualification\t\t \n";
									  cin>>em[i].qualification;
									  cout<<"Enter salary\t\t :\n";
									  cin>>em[i].salary;
				}		}		 }
				else
				{
				     char *s;
					cout<<"Enter name\t";
					cin>>s;
					clrscr();
					 for(i=0;i<2;i++)
					  {
						if(strcpy(em[i].name,s)==0)
						 {   	 cout<<"Enter name \t :\n ";
							 cin>>em[i].name;
							 cout<<"Enter designation \t :\n";
							 cin>>em[i].designation;
							 cout<<"Enter id\t\t: \n";
							 cin>>em[i].id;
							 cout<<"Enter qualification\t\t \n";
							 cin>>em[i].qualification;
							 cout<<"Enter salary\t\t :\n";
							 cin>>em[i].salary;
		      }         }           }
	       }
	     else if(i==2)
	       {  i=3;
		  clrscr();
		     cout<<"Enter name \t :\n ";
		     cin>>em[i].name;
		     cout<<"Enter designation \t :\n";
		     cin>>em[i].designation;
		     cout<<"Enter id\t\t: \n";
		     cin>>em[i].id;
		     cout<<"Enter qualification\t\t \n";
		     cin>>em[i].qualification;
		     cout<<"Enter salary\t\t :\n";
		     cin>>em[i].salary;
		       z=1;
	       }
	     else
	     {
	       cout<<"\n Enter your choice by which you want to edit database by \n 1\t:\t\tid\n2\t:\t\tname ";
	       cin>>i;
				 if(i==1)
				 {
					cout<<"Enter employ id";
					cin>>p;
					clrscr();
					for(i=0;i<2;i++)
						{
						  w=em[i].id;
						  if(w==p)
							{
								 strcpy(em[i].name,'\0');
								 strcpy(em[i].designation,'\0');
								 em[i].id=0;
								 strcpy(em[i].qualification,'\0');
								 em[i].salary=0;
							   }
						}
				}
				else
				{
				     char *s;
					cout<<"Enter name";
					cin>>s;
					 for(i=0;i<2;i++)
					  {
						if(strcpy(em[i].name,s)==0)
						 {               strcpy(em[i].name,'\0');
								 strcpy(em[i].designation,'\0');
								 em[i].id=0;
								 strcpy(em[i].qualification,'\0');
								 em[i].salary=0;

						 }
					}
			       }
	       }
  if(z==1)
  {i=3;
   p=3; }
  else
  {i=2;
   p=2;}
  for(i;i>0;i--)
 {
	 fout<<" name"<<i<<"\t:"<<em[i].name<<endl;
	 fout<<" designaion"<<i<<"\t:"<<em[i].designation<<endl;
	 fout<<"id"<<i<<"\t:"<<em[i].id<<endl;
	 fout<<"qualification"<<i<<"\t:"<<em[i].qualification<<endl;
	 fout<<"salary"<<i<<"\t :"<<em[i].salary<<endl;
 }
   for(p;p>0;p--)
 {
	 fout<<" name"<<p<<"\t:\n"<<em[p].name<<endl;
	 fout<<" designaion"<<p<<"\t:\n"<<em[p].designation<<endl;
	 fout<<"id"<<p<<"\t:\n"<<em[p].id<<endl;
	 fout<<"qualification"<<p<<"\t:\n"<<em[p].qualification<<endl;
	 fout<<"salary"<<p<<"\t :\n"<<em[p].salary<<endl;
 }

 getch();
}
