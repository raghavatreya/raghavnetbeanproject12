#include<conio.h>
#include<iostream.h>
class current
{   public:
 int rate,cheque;
   public:
	  void  getcurrent()
	  {  rate=0;
	     cheque=1;
	     cout<<"\n cheque facility is provide\n";
	     cout<<"\n no interest will provide on this account";
	  }
};
class saving
{ public:
 int rate,cheque;
  public:
     void getsaving()
      { cout<<"\n interest rate is 2% \n ";
	rate=.02;
	cheque=0;
	cout<<"\n ******no cheque ******* \n ";
      }
};
class name : public current,public saving
{  public:
   char name[27];
   int account;
   int a,cheque;
   float rate;

   float balance,interest,impose;
   public:
       void getname(int q)
       {   a=q;
			if(a==1)
			{ cout<<"\n interest rate is 2% \n ";
				rate=.02;
				cheque=0;
				cout<<"\n ******no cheque ******* \n ";

			}
			else
			{
				  rate=0;
				  cheque=1;
				  cout<<"\n cheque facility is provide\n";
				  cout<<"\n no interest will provide on this account";

			 }
	  cout<<"\n\n Enter name of account holder";
	  cin>>name;
	  cout<<"\n\n Enter ACCOUNT number ";
	  cin>>account;
	  cout<<"\n\nEnter balance";
	  cin>>balance;
       }
};
void main()
{ clrscr();
  int a,i,o;
   int acc;
   float d;
   cout<<"\n*************welcome to sbi bank**********\n";
   cout<<"\n Enter  1 for SAVING account \n Enter 2 for CURRENT account\n";
   cin>>a;
   if(a==1)
	saving s;
   else if(a==2)
	current c;
   else
	cout<<"\n\nInvalid Account No.";

   cout<<"Enter 1 for Deposit  \n Enter 2 for Display balance \n Enter 3 for Interest \n Enter 4  for  Withdrawal \n Enter 5 for ministatement \n\n";
   cin>>a;
   cout<<"\n Enter your ACCOUNT NUMBER    :";
   cin>>acc;
   if(a==1)
   {
     for(i=0;i<2;i++)
     { if(acc==s[i].account)
	{   cout<<"\n\n account holder name is :"<<s[i].name;
	    cout<<"\n Enter balance which you want to deposit";
	    cin>>d;
	    s[i].balance=s[i].balance+d;
	    cout<<"\n your new balance is:"<<s[i].balance;
	}
     }
   }
   if(a==2)
   {  for(i=0;i<2;i++)
	{ if(acc ==s[i].account)
	  { cout<<"\n\n account holder name is :"<<s[i].name;
	    cout<<"\n\n account balance is :"<<s[i].balance;
	  }
	}
   }
   if(a==3)
   {
      float time;
	 cout<<"\nEnter time ";
	 cin>>time;for(i=0;i<2;i++)
      {
	 if(acc==s[i].account)
	 {  s[i].interest=s[i].balance*s[i].rate*0.01*time;
	    cout<<"\n interest is :"<<s[i].interest;
	    s[i].balance=s[i].interest+s[i].balance;
	    cout<<"\nyour new Balance is : "<<s[i].balance;
	 }

      }
  }
  if(a==4)
  { for(i=0;i<2;i++)
	{ if(acc ==s[i].account)
	  { cout<<"\n press 1 for withdrawal by cheque \n press 2 for  cash withdrawl:";
	    cin>>o;
	    if(o==1)
	    {
	      if(s[i].cheque==0)
	      { cout<<"\n your are not permited to use cheque";
	      }
	      else
	      {  cout<<"your permitted to cheque ";
		 cout<<" Enter amount of cheque";
		 cin>>acc;
		 cout<<"\n *********trans. over ******** \n";
		 cout<<"withdrawl amount is   :"<<acc;
		 s[i].balance=s[i].balance-acc;
		 cout<<" Your remaining amount is "<<s[i].balance;
	      }
	    }
	      else
	      { cout<<" \n Enter amount of withdrawl";
		cin>>acc;
		cout<<"\n *********trans. over ******** \n";
		cout<<"withdrawl amount is   :"<<acc;
		s[i].balance=s[i].balance-acc;
		cout<<" Your remaining amount is "<<s[i].balance;
	    }
	  }
	}
  }
  if(a==5)
  {
  }
  getch();
}