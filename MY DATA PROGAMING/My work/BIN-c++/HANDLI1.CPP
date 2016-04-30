#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<iomanip.h>
void main()                     //what is use this code
{
clrscr();
	char ch;
	char filename[24];
	cout<<"Enter file name:\n ";
	cin>>filename;
	ifstream ifile(filename);
     //	if(!ifile)
    //	{   cerr<<"Error "<<filename<<endl;
    //	}
    //	ifile>>resetiosflags(ios::skipws);
	while(ifile)
	{
	    ifile>>ch;
	    cout<<ch;
	}

}