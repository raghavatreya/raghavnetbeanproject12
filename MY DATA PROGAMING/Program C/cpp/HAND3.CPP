#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<fstream.h>
#include<process.h>
void main()
{
clrscr();
	char buff[80];
	ofstream outfile;
	outfile.open("sample.out");
	if(outfile.fail())
	{
	 cout<<" enable to open the file";
	 exit(1);
	}
	while(1)
	{
	cin.getline(buff,80);
	if(strcmp(buff,"ends")==0)
	break;
	 outfile<<buff<<endl;
		 if(outfile.fail())
		 {
			 cout<<" input operation is fail";
			 exit(1);
		 }

	 }
outfile.close();
getch();
}