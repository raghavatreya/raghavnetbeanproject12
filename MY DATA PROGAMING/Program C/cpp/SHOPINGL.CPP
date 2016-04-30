#include<conio.h>
#include<iostream.h>
#include<string.h>
void main()
{
  struct raghav
  {
     char iteamname[23];
     int iteamno,qty;
     float amount,vat,rate;
  };
  struct raghav shop[10];
  int n,i=0,z=1,qt,b,a;
  clrscr();
     ghanshyam:
   cout<<"enter 1 for add iteam \n enter 2 for show iteam \n enter 3 for remove iteam \n enter 4 for generate invoice \n enter 5 for exit";
   cin>>a;
		if(a==1)
		{
		      for(;i<z;i++)
			  {
				 cout<<"\n enter name:";
				 cin>>shop[i].iteamname;
				 cout<<"\n enter qty number:";
				 cin>>shop[i].qty;
				 cout<<"\n enter iteam no:";
				 cin>>shop[i].iteamno;
				 cout<<"\n enter vat in % : ";
				 cin>>shop[i].vat;
				 cout<<"\n enter rate:";
				 cin>>shop[i].rate;
			   }
			    z++;
		}
		 else if(a==2)
		    {
			 for(i=0;i<z-1;i++)
			    {
				 cout<<"\n enter name:";
				 cout<<shop[i].iteamname;
				 cout<<"\n enter qty number:";
				 cout<<shop[i].qty;
				 cout<<"\n enter iteam no:";
				 cout<<shop[i].iteamno;
				 cout<<"\n enter vat in % : ";
				 cout<<shop[i].vat;
				 cout<<"\n enter rate:";
				 cout<<shop[i].rate;
			    }
		   }
		 else if(a==3)
		 {
		    int q;
		    cout<<"enter iteamno which you want to remove";
		    cin>>q;
			for(q;q<z;q++)
			{
				if(z==q)
				{
					strcpy(shop[q].iteamname,'\0');
					shop[q].iteamno=0;
					shop[q].vat=0;
					shop[q].rate=0;
					shop[q].qty=0;
				}
			else
			       {
					strcpy(shop[i].iteamname,shop[i+1].iteamname);
					shop[i].iteamno=shop[i+1].iteamno;
					shop[i].vat=shop[i+1].vat;
					shop[i].rate=shop[i+1].rate;
					shop[i].qty=shop[i+1].qty;
				}
			}


		}
	      /*	else if(a==4)
		{   sh[0].generateinvoice( z);

		}
	     //	else if(a==5)
	       //	{ exit();
	      //	}   */
	    cout<<"press 1 for continune";
	    cin>>b;

	    if(b==1)
	    goto ghanshyam;
 getch();
}