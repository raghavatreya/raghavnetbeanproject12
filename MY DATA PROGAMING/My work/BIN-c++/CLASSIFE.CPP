#include<conio.h>
#include<iostream.h>
class raghav
{
   int a,b,c,d;
     public:
	  void salary()
	  {
	    cout<<"press 1 for male \n\n press 2 female\n";
	    cin>>a;
		 if(a==1)
		 {   cout<<"enter your age";
		     cin>>b;
			   if(b>=35)
			   { cout<<"\n enter 1 for PG qualification \n enter 2 for G qualification\n";
			      cin>>c;
				if(c==1)
				  { cout<<"your salary is 35000";
				   }
				 else
				 {cout<<"your salary is 32000";
				  }

			    }
			  else
			  {
			      cout<<"press 1 for PG qualification\n press 2 for G qualification\n";
			       cin>>c;
					if(c==1)
					{
						 cout<<"your salary is 30000";
					}
					 else
				       {
					 cout<<" your salary is 28000";
					}

			     }
		       }
	      else
	      { cout<<"enter your age";
		 cin>>b;
		    if(b>=25)
		    {   cout<<"press 1 for pg  	qualification\n press 2 for g qualification ";
			cin>>c;
			   if(c==1)
			   {
			     cout<<"your salary is 32000";
			   }
			   else
			   {cout<<"your salary is 30000";
			   }
		    }
		    else
		    { cout<<"press1 for pg qualificaton\npress2 for g qualificATion\n";
		      cin>>c;

				 if(c==1)
				   { cout<<"your salary is 29000";
				    }
				else
				 {cout<<"your salary is 26000";
				  }
		    }
	      }




	  }
};
void main()
{clrscr();
 raghav u;
 u.salary();
 getch();
}