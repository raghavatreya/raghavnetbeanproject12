#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#define READ_SIZE 6
void main()
{
clrscr();
 char reader[7];
 fstream fstr("test.del",ios::binary|ios::in|ios::out);
 for(int i=0;i<10;i++)
  fstr<<i;
  fstr.seekp(2);
  fstr<<"hello";
  fstr.seekg(4);
  fstr.read(reader,6);
  reader[6]=0;
  cout<<reader<<endl;
getch();
}