#include<conio.h>
#include<iostream.h>
#include<string.h>
class raghav
{
	int i,iteamno,iteam,qty,rate,vat,dis,pay;
	char iteamname[23];
	public:
	     void additeam(int z)
	     {
	       cout<<"enter iteam name \n";
	       cin>>iteamname;
	       cout<<"enter iteam no \n";
	       cin>>iteamno;
	       cout<<"enter qty \n";
	       cin>>qty;
	       cout<<"enter rate\n";
	       cin>>rate;
	       cout<<"enter vat\n";
	       cin>>vat;
	       cout<<"enter % discount\n";
	       cin>>dis;
	     }
	     void showiteam()
	     {
		cout<< " iteam name\n"<< iteamname;
		cout<<"iteam number\n "<<iteamno;
		cout<<"iteam qty\n"<<qty;
		cout<<"iteam rate\n"<<rate;
		cout<<"iteam vat \n"<<vat;
	     }
	     void removeiteam(int q,int z)
	     {
		for(q;q<=z:q++)
		{
			if(i==q)
			{
				strcpy(iteamname,'\0');
				s[q].iteamno=0;
				s[q].vat=0;
				s[q].rate=0;
				s[q].qty=0;
			}
			else
			{
				strcpy(sh[i].iteamname,sh[i+1].iteamname);
				sh[i].iteamno=sh[i+1].iteamno;
				sh[i].vat=sh[i+1].vat;
				sh[i].rate=sh[i+1].rate;
				sh[i].qty=sh[i+1].qty;
			}
		}
	     }
	     void generateinvoice(int z)
	     {
		for(i=0;i<=z;i++)
		{
			cout<< " iteam name\n"<< sh[i].iteamname;
			cout<<"iteam number\n "<<sh[i].iteamno;
			cout<<"iteam qty\n"<<sh[i].qty;
			cout<<"iteam rate\n"<<sh[i].rate;
			cout<<"iteam vat \n"<<sh[i].vat;
		}
		int f,j;
		cout<<"how many iteam you want to purch :";
		cin>>f;
		for(i=0;i<=f;i++)
		{
			cout<<"enter iteamno";
			cin>>j;
			cout<< " iteam name\n"<< sh[j].iteamname;
			cout<<"iteam number\n "<<sh[j].iteamno;
			cout<<"iteam qty\n"<<(sh[j].qty--);
			cout<<"iteam rate\n"<<sh[j].rate;
			cout<<"iteam vat % \n"<<sh[j].vat;
			cout<<"payable  amount \n" <<(sh[j].rate-sh[j].vat*.001);
		}
	     }
	     void exit()
	     {

	     }
};
void main()
{
   clrscr();
   int a,i,b;
   raghav sh[10];
   int z=3;
   ghanshyam:
   cout<<"enter 1 for add iteam \n enter 2 for show iteam \n enter 3 for remove iteam \n enter 4 for generate invoice \n enter 5 for exit";
   cin>>a;
		if(a==1)
		{
			sh[z].additeam(z);
			z++;
		}
		 else if(a==2)
		    {  for(i=0;i<=z;i++)
			    {
				 sh[i].showiteam();
			    }
		   }
		 else if(a==3)
		 {  int q;
		    cout<<"enter iteamno which you want to remove";
		    cin>>q;

			sh[q].removeiteam(q,z);
		}
		else if(a==4)
		{   sh[0].generateinvoice( z);

		}
	     //	else if(a==5)
	       //	{ exit();
	      //	}
	    cout<<"press 1 for continune";
	    cin>>b;

	    if(b==1)
	    goto ghanshyam;
 getch();
}