#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<iomanip.h>
const char* filename="binary.txt";
 class emp
{
		      char name[40];
		      int ecode;
		      public:
			 emp()
			 {}
			 emp(char *n,int c)
			 {
			   strcpy(name,n)
			   ecode=c;
			 }
};
void main()
{
clrscr();
float height[4]={175.5,153.0,167.25,160.79};
ofstream outfile;
outfile.open(filename);
outfile.write((char*)&height,sizeof(height));
outfile.close();
int i;
for(i=0;i<4;i++)
{
 height[i]=0;
}
ifstream infile;
infile.open(filename);

infile.read((char*)&height,sizeof(height));
for(i=0;i<4;i++)
{
cout.setf(ios::showpoint);
cout<<setw(10)<<setprecision(2)<<height[i];
}
infile.close();
		   cout<<"\n------ep2---------\n";
		    emp e[4];
		    e[0]=emp("amity",1);
		    e[1]=emp("sourabh",2);
		    e[2]=emp("madhavi",3);
		    fstream file;
		    file.open("employ.dat",ios::in|ios::out);


getch();
}