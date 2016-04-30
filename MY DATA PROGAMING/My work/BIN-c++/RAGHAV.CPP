#include<iostream.h>
#include<conio.h>
void main()
{
  struct p{
	    int run;
	    char plname[3][23]={"Raghav","",""};
	    int ining;
	    int ton;
	    float average;
	    };

   struct p player[3];
   int a;
   clrscr();
     for(a=1;a<4;a++)
     {
       cout<<"enter player name"<<a;
       cin>>player[a-1].plname;
       cout<<"enter run"<<a;
       cin>>player[a-1].run;
       cout<<"enter innings"<<a;
       cin>>player[a-1].ining;
       cout<<"enter time not out"<<a;
       cin>>player[a-1].ton;
       player[a-1].average=(float)(player[a-1].run/player[a-1].ining);
	}
	for(a=0;a<3;a++)
	{
	   cout<<player[a].plname<<"\n";
	   cout<<"player run"<<player[a].run<<"\n";
	   cout<<"player ining"<<player[a].ining<<"\n";
	   cout<<"time of not otu"<<player[a].ton<<"\n";
	   cout<<"average"<<player[a].average<<"\n\n";
	}
	getch();
  }