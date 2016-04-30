#include<iostream.h>
#include<fstream.h>
#include<iomanip.h>
#include<conio.h>
void student_write(int count)
{
    char name[30];
    int i,marks;
    ofstream fout;
    fout.open("student.out");
    if(!fout)
    {
     cout<<"ERROR";
    }
    for(i=0;i<count;i++)
    {
      cout<<"Enter name";
      cin>>name;
      cout<<"\nmarks\n";
      cin>>marks;
	fout<<name<<endl;
	fout<<marks<<endl;
      }
      fout.close();
};
void student_read(int count)
{
    char name[30];
    int i,marks;
    ifstream fin;
    fin.open("student.out");
    if(!fin)
    {
     cout<<"\nERROR\n";
    }
    for(i=0;i<count;i++)
    {
	fin>>name;
	fin>>marks;

      cout<< name;

      cout<<"\n"<<marks;
      }
      fin.close();
};

void main()
{
clrscr();
  int count;
  cout<<"how many student \n";
  cin>>count;
  student_write(count);
  student_read(count);
getch();
}