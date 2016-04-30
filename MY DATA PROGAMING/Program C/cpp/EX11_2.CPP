#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
clrscr();
	ofstream fout;
	fout.open("country");

	fout<<"RAGHAV";
	fout<<"UNITED KINGDOM ";
	fout<<"SOUTH COREA";

	fout.close();
	fout.open("CAPITAL");

	fout<<"WASHINGTON DC";
	fout<<"LONDON";
	fout<<"SEOUL";

	fout.close();

   const  int n=80;
   char line[n];

       ifstream fin;
       fin.open("country");

       cout<<"CONTENT OF COUNTRY";

       while(fin)
       {
	   fin.getline(line,n);
	   cout<<line<<"\n";
       }
     fin.close();

     fin.open(" CAPITAL");
       cout<<"CONTENT OF COUNTRY";

       while(fin)
       {
	   fin.getline(line,n);
	   cout<<line<<"\n";
       }
       fin.close();
 getch();
}