#include<iostream.h>
#include<conio.h>
class fixed_deposit
{    long int p;
     int year;
     float r_value,rate;
     public:
	   fixed_deposit()
	   {

	   }
	   fixed_deposit(long int p,float y,int r);
	   fixed_deposit(long int p,float y ,float r);
};
fixed_deposit :: fixed_deposit(long int p,float y,float r)
{   float p_amount=p;
    float year=y;
    float rate=r;
    float r_value=p;
    int i;
    for(i=1;i<=y;i++)
	{
		r_value=r_value*(1+r*0.01);
	}
    cout<<"\n  principal amount:"<<p_amount;
    cout<<"\n  return value:"<<r_value;
}
fixed_deposit :: fixed_deposit(long int p,float y ,int r)
{
   float p_amount=p;
   float year=y;
   int  rate=r;
   float  r_value=p;
   int i=1;
   for(i;i<=year;i++)
    {
       r_value=r_value*(1.0+r*.01);
    }
    cout<<"\n  principal amount:"<<p_amount;
    cout<<"\n  return value:"<<r_value;
}
void fixed_deposit()


void main()
{
  clrscr();
  float am,y,R;
  int r;
  fixed_deposit FD1,FD2,FD3;
  cout<<"enter amount ,float rate, year";
  cin>>am>>R>>y;
  FD1=fixed_deposit(am,y,R);
  cout<<"\n enter amount ,int rate, year";
  cin>>am>>r>>y;
  FD2=fixed_deposit(am,y,r);
  getch();
}