#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<iomanip.h>
#include<ctype.h>
#define MAXNAME 40
#include<string.h>
class person
{
  private:
   char name[MAXNAME];
   int age;
      public:
      void write(ofstream &os)
      {
	os.write(name,strlen(name));
	os<<ends;
	os.write((char*)&age,sizeof(age));
      }
      int read(ifstream &is)
      {
       is.get(name,MAXNAME,0);
       name(is.gcount()=0);
       is.ignore(1);
       is.read((char *)&age,sizeof(age));
       return is.good();
      }
      friend ofstream & operater <<(ofstream &fos,person &b)
      {
	 b.write(fos);
	 return fos;
      }
      friend ifstream & operater >>(ifstream &fos,person &b)
      {
       b.read(fos);
       return fos;
      }
};
istream & operator >> (istream &is,person &b)
{
 cout<<"\n\n name:\n";
 is>>ws;
 is.get(b.name,MAXNAME);
 cout<<"\nage\n";
 is>>ws>>b.age;
 return is;
}
ostream & operator << (istream &is,person &b)
{
 os<<b.name<<endl;
 os<<b.age<<endl;
 return os;
}
void main()
{
clrscr();

person p_obj;
ofstream ofile("person.txt",ios::trunc|ios::binary);
char ch;
do
{cin>>p_obj;
ofile<<p_obj;
cout<<"\nanother\n\n";
}while(toupper(ch)=='Y');
ofile.close();
cout<<"\n-------------------------------------\n";
while(1)
{
 ifile>>p_obj;
 if(ifile.fail())
 break;
 cout<<p_obj;
}
getch();
}