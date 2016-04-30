#include<iostream.h>
#include<iomanip.h>
#include<fstream.h>
#include<conio.h>
void main()
{
 float f1=123.45,f2=34.65,f3=3.56;
 ofstream out_file("pay.txt",ios::trunc);
 out_file<<setiosflags(ios::showpoint| ios::fixed)
	  <<setiosflags(ios::right);
 out_file<<setw(6)<<f1<<endl;
 out_file<<setw(6)<<f2<<endl;
 out_file<<setw(6)<<f3<<endl;
// out_file<<setw(6)<<f2<<endl;
}
