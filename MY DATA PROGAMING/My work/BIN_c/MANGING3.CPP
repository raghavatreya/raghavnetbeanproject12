#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<iomanip.h>
void main()
{
clrscr();
  cout.setf(ios::showpoint);

  cout<<setw(5)<<"\n";
  cout<<setw(15)<<"INVERSE OF N";
  cout<<setw(15)<<"SUM OF TERMS \n";

  double term,sum=0;
  int i;
  for(i=0;i<11;i++)
  {
   term=1.0/float(i);
   sum+=term;

   cout<<setw(5)<<i;
   cout<<setw(14)<<setprecision(5);
   cout<<setiosflags(ios::scientific)<<term;
   cout<<setw(13)<<resetiosflags(ios::scientific);
   cout<<sum<<endl;
  }
getch();
}