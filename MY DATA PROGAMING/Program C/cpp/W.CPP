#include<iostream.h>
#include<conio.h>
class result
 {
    int a,b,c,d,j;
    float f;
     public:
	    float avg(int p)
	    {
		float s ;
		int q=5;
		s=p/q;
		return(s);
	     }
	    float per(int x)
	    {


		 f=x/5;
		 return(f);
	    }
	    int  divi()
	      {  if(f>=60)
		   {  j=1; }
		   if(f>45  && f<60)
		   { j=2;
		   }
		   if(f>=36  && f<45)
		   {
		      j=3;
		   }
		   else
			j=4;
		   return(j);
	       }

	};
	void main()
	{ result a;
	 clrscr();
	int p,q,r,s,t;
	cout<<"enter marks of five subject";
	cin>>p>>q>>r>>s>>t;

	int x=p+q+r+s+t;
	float d,e,m,n,l;
	 d=a.avg(x);
	 e=a.per(x);
	 m=a.divi();
	 cout<<"\n\nyour average is "<<d<<"your percentage is"<<e;
	 if(m==1)
	   cout<<"grade first";
	 else if(m==2)
	   cout<<"grade second";
	 else if(m==3)
	 cout<<"grade third";
	 else
	 cout<<"Fail";
	 getch();
      }

