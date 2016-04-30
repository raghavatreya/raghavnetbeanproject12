#include<iostream.h>
#include<conio.h>
class prime
{
	int a,b,c,n;
	public:
		void getanumber()
		{
			cout<<"enter a number";
			cin>>n;
		}
		void primenumber()
		{


			    for(a=1;a<=n;a++)
			   {
				c=0;
				if(a>3)
				{
				  for(b=2;b<a;b++)
				  {
					if( a%b==0 )
					{
						c=1;
					}
				  }

				if(c==0)
				{
					cout<<"\n"<<a;
				}

				}
				else
				{
					cout<<"\n"<<a;
			   }      }
		}
	};
    void main()
    {
	prime q;
	clrscr();
	q.getanumber();
	q.primenumber();
	getch();
    }
