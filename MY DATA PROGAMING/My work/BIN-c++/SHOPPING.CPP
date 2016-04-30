#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
class shopping_List
{
	int ino;
	char iname[10];
	int q;
	float rate,vat,dis;
	public:
		void setino(int i)
		{
			ino=i;
		}
		int getino()
		{
			return ino;
		}
		void setiname(char *na)
		{
			strcpy(iname,na);
		}
		char *getiname()
		{
			return iname;
		}
		void setq(int qty)
		{
			q = qty;
		}
		int getq()
		{
			return q;
		}
		void setrate(float ra)
		{
			rate = ra;
		}
		float getrate()
		{
			return rate;
		}
		void setvat(float v)
		{
			vat = v;
		}
		float getvat()
		{
			return vat;
		}
		void setdis(float d)
		{
			dis = d;
		}
		float getdis()
		{
			return dis;
		}
};
void main()
{
	shopping_List s[100];
	int cnt=0;
	int ino,qty,i,q,w,itemno,p=0;
	int op;
	char *name;
	float rate,vat,dis,am,v,d,gb;
	clrscr();
	while(1)
	{
		cout<<"\n\n ********* MINI SHOPPOING LIST ***********";
		cout<<"\n\n1. Add Item";
		cout<<"\n\n2. Show Items List";
		cout<<"\n\n3. Remove Item from List";
		cout<<"\n\n4. Genrate Invoice";
		cout<<"\n\n5. Exit";
		cout<<"\n\n\t\tCHOOSE OPTION (1-5) : ";
		cin>>op;
		switch(op)
		{
			case 1 :
				cout<<"\nEnter Item No. : ";
				cin>>ino;
				cout<<"\nEnter Item Name : ";
				cin>>name;
				cout<<"\nEnter Item Quantity : ";
				cin>>qty;
				cout<<"\nEnter Item Rate : ";
				cin>>rate;
				cout<<"\nEnter VAT in % : ";
				cin>>vat;
				cout<<"\nEnter Dis. in % : ";
				cin>>dis;
				s[cnt].setino(ino);
				s[cnt].setiname(name);
				s[cnt].setq(qty);
				s[cnt].setrate(rate);
				s[cnt].setvat(vat);
				s[cnt].setdis(dis);
				cnt++;
				break;
			case 2 :
				cout<<"\n\n ********* MINI SHOPPING LIST **********";
				cout<<"\nS.No. \tItem No. \tItem Name \tQty. \tRate \tVAT(%) \tDis(%)";
				for(i=0;i<cnt;i++)
				{
					cout<<"\n"<<i+1<<"\t"<<s[i].getino()<<"\t\t"<<s[i].getiname()<<"\t\t"<<s[i].getq()<<"\t"<<s[i].getrate()<<"\t"<<s[i].getvat()<<"\t"<<s[i].getdis();
				}
				break;
			case 3 :
				 cout<<"enter value of q";
				 for(q;q<cnt;q++)
				{
					if((cnt-1)==q)
					{
						s[q].setiname('\0');
						s[q].setino(0);
						s[q].setvat(0);
						s[q].setrate(0);
						s[q].setq(0);
					}
					else
					{
						s[i].setiname(s[i+1].getiname());
						s[i].setino(s[i+1].getino());
						s[i].setvat(s[i+1].getvat());
						s[i].setrate(s[i+1].getrate());
						s[i].setq(s[i+1].getq());
					}
				}
				 break;
			case 4 :clrscr();
				cout<<"\n\n ********* MINI SHOPPING LIST **********";
				cout<<"\nS.No. \tItem No. \tItem Name \tQty. \tRate \tVAT(%) \tDis(%)";
				for(i=0;i<cnt;i++)
				{
					cout<<"\n"<<i+1<<"\t"<<s[i].getino()<<"\t\t"<<s[i].getiname()<<"\t\t"<<s[i].getq()<<"\t"<<s[i].getrate()<<"\t"<<s[i].getvat()<<"\t"<<s[i].getdis();
				}
				cout<<"\n\nEnter Item No. to Add in Invoice : ";
				cin>>itemno;
				for(i=0;i<cnt;i++)
				{
					if(s[i].getino()==itemno)
					{
						cout<<"\n\nEnter Item Quantity : ";
						cin>>q;
						s[i].setq(s[i].getq()-q);
						p=1;
					}
				}
				if(p==0)
					cout<<"\n\nInvalid Item No.";
				else
				{
					cout<<"\n\n ********* MINI SHOPPING LIST **********";
					cout<<"\n-------------------------------------------";
					cout<<"\nS.No. \tItem No. \tItem Name \tQty. \tRate \tAmount \tVAT(%) \tDis(%) \tGross Amount";
					for(i=0;i<cnt;i++)
					{
						am = s[i].getq()*s[i].getrate();
						v = s[i].getvat()/100.0*am;
						d = s[i].getdis()/100.0*am;
						gb = am+v-d;
						cout<<"\n"<<i+1<<"."<<"\t"<<s[i].getino()<<"\t\t"<<s[i].getiname()<<"\t\t"<<s[i].getq()<<"\t"<<s[i].getrate()<<"\t"<<am<<"\t"<<s[i].getvat()<<"\t"<<s[i].getdis()<<"\t"<<gb;
					}
				}
				break;
			case 5 : exit(1);
				 break;

		}
	}
getch();
}