#include<iostream.h>
#include<conio.h>
#include<string.h>
class raghav
{
     int accountnumber;
     float balance;
     char name[23];
     public:
	   void getname(char na[23])
	   {  strcpy(name,na);
	   }
	   void getaccountnumber( int  acco)
	   {  accountnumber=acco;
	   }
	   void getbalance(float bal)
	   { balance=bal;
	   }
	   int outaccountnumber()
	   {  return(accountnumber);
	   }
	   float outbalance()
	   { return(balance);
	   }
	   char* outname()
	   { return(name);
	   }
};
void main()
{
    clrscr();
    raghav s[2];
    int acc,i;
    float bal;
    char na[23];
    for(i=0;i<2;i++)
    {  cout<<"enter name";
       cin>>na;
       s[i].getname(na);
       cout<<"enter account number";
       cin>>acc;
       s[i].getaccountnumber(acc);
       cout<<"enter balance";
       cin>>bal;
       s[i].getbalance(bal);
    }

    for(i=0;i<2;i++)
    {  float p=s[i].outbalance();
       if(p<=100)
	{   cout<<"list of account holder is as below 100 :"<<s[i].outname()<<"\n";
	}
    }
     int q,ac;
    cout<<"enter 1 for withdrawal\n enter 2 for deposit";
    cin>>q;
    cout<<"enter account number";
    cin>>ac;
   for(i=0;i<2;i++)
   { if(ac==s[i].outaccountnumber())
       {
		if(q==1)
		{
			float withdrawl;
			cout<<"enter withdrawl amount:";
			cin>>withdrawl;
			bal=s[i].outbalance();
			if(withdrawl>=bal )
				{  cout<<"insuficient balance";
					}
			else
				{	bal=bal-withdrawl;
					s[i].getbalance(bal);
					cout<<"new balance is:\n"<<s[i].outbalance();
				}
       }
    else
       {       float ba;
	       cout<<"enter balance";
	       cin>>ba;
	       bal=s[i].outbalance();
	       bal=bal+ba;
		s[i].getbalance(bal);
		cout<<"new balance is:\n"<<s[i].outbalance();
    }
    }
   }
getch();
}