#include<iostream.h>
#include<conio.h>
void main()
{ clrscr();
int i,j,wtom,rtom;//p=w(tomorrow),r=r(tomorrow)
int wtod=1000;//w(today);
int rtod=10000;//r(today)
for(i=1;i<=25;i++)
{
  wtom=wtod*0.995+.00001*.01*rtod*wtod;
  rtom=1.01*rtod-.00001*wtod*rtod;
  wtod=wtom;
  rtod=rtom;
if(i%25==0)
  {
   cout<<"\n number of rabbit :"<<rtom;
   cout<<"\n number of wolf  :"<<wtom;
  }
}
getch();
}