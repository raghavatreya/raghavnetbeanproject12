#include<iostream.h>
#include<conio.h>
#include<string.h>
template<class t1>
class vector
{
 t1 x,y,z;
 t1 p,q,r;
 public:
       vector()
       {
	 cout<<"Enter vector value\n";
	 cin>>x>>y>>z;
	 cout<<"enter another array \n";
	 cin>>p>>q>>r;
       }
       mul()
       {
	  cout<<"************answer********** :\n\t"<<(x*p+q*y+z*r);
       }
};
void main()
{
 vector<float>raghav;
 raghav.mul();
}