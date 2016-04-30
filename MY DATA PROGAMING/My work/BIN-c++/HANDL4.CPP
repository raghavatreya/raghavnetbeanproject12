#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
#include<stdlib.h>
void main()
{
clrscr();
/*ofstream outf("kiran.txt");
outf<<"raghav"<<endl;
outf<<100.00<<endl;
outf.close();
ifstream inf("kiran.txt");
char name[23];
cout<<"name\n";
inf>>name;
cout<<name; */
/*8			cout<<"\n----ep2----\n";

const int size=80;
char line[size];
ifstream fin1("asd.txt");
ifstream fin2("qwe.txt");
for(int i=0;i<10;i++)
{
	if(fin1.eof()!=0)
	{
		cout<<" exit form country";
	}
	else
	{
		fin1.getline(line,80);
		cout<<"name of countrty :"<<line<<endl;
	 }
       if(fin2.eof()!=0)
	{
		cout<<" exit form country";
		exit(1);
	}
	fin2.getline(line,80);
	cout<<"name of capital:"<<line<<endl;
}
fin1.close();
fin2.close();  */


		cout<<"\n----ep3----\n";

		char ring[80];
		cout<<"Enter string\n";
		cin>>ring;


		ofstream fe1("string.txt");
		int i,l=strlen(ring);
		for(i=0;i<l;i++)
		{    fe1<<ring[i];
		}
		fe1.close();
		ifstream  fe("string.txt");
		char sd;
		while(l>0)
		{
		  fe>>sd;
		  cout<<sd;
		  l--;
		}

getch();
}