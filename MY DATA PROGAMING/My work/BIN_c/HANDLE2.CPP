#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<ctype.h>
#include<process.h>
#define maxname 40
void main()
{
clrscr();
  fstream infile;
  fstream outfile;
  int i,percentage,count;
  char name[40];
  infile.open("student.txt",ios::in);
  if(infile.fail())
  {
    cout<<" error to open student file ";
    exit(1);
  }
  outfile.open("student.txt",ios::out);
  if(outfile.fail())
  {
    cout<<" enable to open the 3333";
    exit(1);
  }
  infile>>count;
  outfile<<"stuudent information is sending"<<endl<<endl;
  outfile<<"-----------------------"<<endl;
  for(i=0;i<count;i++)
  {
    infile>>name;
    infile>>percentage;
    outfile<<" name =\n"<<name;
    outfile<<"percentage =\n"<<percentage;
    outfile<<"passed in :";
	       if(percentage>=70)
	       {
		 outfile<<"devision with 1st distinction ";
	       }
	       else
	       {
		outfile<<"failed"<<endl;
	       }
  }
  infile.close();
  outfile.close();
getch();
}