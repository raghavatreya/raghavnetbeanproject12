#include<iostream.h>
#include<conio.h>
class interest
{
  float principal,rate,year,r_value;
  public:
	 interest()
	 {
	    cout<<"enter value of principal";
	    cin>>principal;
	    cout<<"enter value of rate";
	    cin>>rate;
	    cout<<"enter value of year";
	    cin>>year;
	    void amount(principal,rate,year);
	 }
	friend void amount(interest principal,interest rate,interest year);


};
void amount(interest principal,interest rate,interest year)
{ int i;
  float r_value=principal;
  for(i=1;i<=year;i++)
  {  r_value= r_value *(1.0+rate);
  }
  cout<<"\n\n your compound interest is:"<<r_value;
}
void amount(interest principal,interest rate=0.12,interest year)
{ int i;
  float r_value=principal;
  for(i=1;i<=year;i++)
  {  r_value= r_value *(1.0+r);
  }
  cout<<"\n\n your compound interest is:"<<r_value;
}
void main()
{ clrscr();
  intersest a;
  getch();
}