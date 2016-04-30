#include<iostream.h>
#include<conio.h>
class raghav
{
	int a,b,c;
	public:
		void micro8bit()
		{
			cout<<"enter the amount";
			cin>>a;
			cout<<"discount";
			cout<<.1*a;
			cout<<"payable";
			cout<<.9*a;
		}
		void micro16bit()
		{
			int uni,ind,gov;
			float amount;
			cout<<"1 for uni user\n 2 for ind user \n 3for govt";
			cin>>b;
			if(b==1)
			{
				cout<<"enter amount";
				cin>>amount;
				if(amount<10000)
				{
					cout<<"payable rupee:"<<amount;
				}
				else
				{
					cout<<"discount is :";
					cout<<.5*amount;
					cout<<"net payable amount is:"<<.95*amount;
				}
			 }
			 else if(b==2)
			 {
				cout<<"enter amount";
				cin>>amount;
				if(amount<10000)
				{
					cout<<"payable rupee:"<<amount;
				}
				else
				{
					cout<<"discount is :";
					cout<<.5*amount;
					cout<<"net payable amount is:"<<.95*amount;
				}
			 }
			 else if(b==3)
			 {
				cout<<"enter amount";
				cin>>amount;
				if(amount<10000)
				{
					cout<<"payable rupee:"<<amount;
				}
				else
				{
					cout<<"discount is :";
					cout<<.6*amount;
					cout<<"net payable amount is:"<<.94*amount;
				}
			 }
		}
		void micro32bit()
		{
			float amount;
			cout<<"1 for uni user\n 2 for ind user \n 3for govt";
			cin>>b;
			cout<<"enter amount";
			cin>>amount;
			if(b==1)
			{
				cout<<"discount\n";
				cout<<.075*amount;
				cout<<"payable amount";
				cout<<(1-.075)*amount;
			}
			else if(b==2)
			{
				if(amount<=50000)
				{
					cout<<"discount\n";
					cout<<.05*amount;
					cout<<"payable amount";
					cout<<.94*amount;
				}
				else if(amount<=100000)
				{
					cout<<"discount\n";
					cout<<.075*amount;
					 cout<<"payable amount";
					cout<<(1-.075)*amount;
				}
				else if(amount>100000)
				{
					 cout<<"discount\n";
					 cout<<.01*amount;
					 cout<<"payable amount";
					 cout<<.9*amount;
				}
			}
			else if(b==3)
			{
				cout<<"discount\n";
				cout<<.075*amount;
				cout<<"payable amount";
				cout<<(1-.075)*amount;
			}
		}
};
void main()
{
	clrscr();
	int t;
	raghav w;
	cout<<"1 for 8bit \n 2 for 16bit\n 3 for 32 bit\n";
	cin>>t;
	switch(t)
	{
		case 1 : w.micro8bit();break;
		case 2 : w.micro16bit();break;
		case 3 : w.micro32bit();break;
		default : cout<<"\n\nInvalid Microprocessor Type";
	}
	getch();
}