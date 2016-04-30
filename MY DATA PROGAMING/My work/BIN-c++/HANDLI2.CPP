#include<fstream.h>
#include<conio.h>
#include<iostream.h>
void main()
{
clrscr();
	ofstream myfile("ghanshyam.txt");
	myfile<<"you are  the best "<<endl;
	char a[123];
	cout<<"ENTER NAME \N";
	cin>>a;
	myfile<<a<<endl;
	myfile.close();

	ifstream fin("ghanshyam.txt");
	fin>>a;
	cout<<a<<"pooiuiruiofj";
getch();
}