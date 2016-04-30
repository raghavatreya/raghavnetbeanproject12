#include<iostream.h>
#include<fstream.h>
#include<conio.h>
void main()
{ clrscr();
   ofstream myfile;
   myfile.open("raghav.txt");
   myfile<<"raghav atreya is still working with ";
   myfile.close();
 getch();
}