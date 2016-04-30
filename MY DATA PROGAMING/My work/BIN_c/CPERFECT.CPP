#include<iostream.h>
#include<conio.h>
class raghav
{    int a,b,c,d;
     public:
	    void  perfect(int x)
	    {
	       for(a=1;a<=x;)
	       {          c=0;
			  for(b=1;b<a;)
			 {
			    if(a%b==0)
				{ c=c+b;
				}
				b=b+1;
			 }
			 if(a==c)
			{
			 cout<<"\n\n perfect  number    :  \n"<<a;
			 }
	     a=a+1;
	     }
	}
};
void main()
{int t;
raghav d;
clrscr();
cout<<"enter a number";
cin>>t;
d.perfect(t);
getch();
}