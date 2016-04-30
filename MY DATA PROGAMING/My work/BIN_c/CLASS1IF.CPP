#include<iostream.h>
#include<conio.h>
class raghav
{    int a,b,c,d,age;
	 public:

		void status ()
		{  cout<<"press 1 for married\npress 2 for unmarried";
		   cin>>a;
		   if(a==1)
		    {
		    cout<<"\n\ninsured \n";
		    }
		    else
		    {  cout<<"press 1 for male \n press2 for female";
		       cin>>b;
			if(b==1)
			{  cout<<"enter  age \n";

				cin>>c;
				if(c>=35)
				{
					 cout<<"\n\ninsured";
				}
				else
				{  cout<<"not insured";
				 }
		       }
		      else
		      {  cout<<"enter  age \n";
			  cin>>d;
				 if(d>=25)
				{ cout<<"insured";
				}
			       else
				 { cout<<"not insured";
				  }
		      }
		    }
		    }
};
void main()
{ raghav t;
     clrscr();
     t.status();
     getch();
}
