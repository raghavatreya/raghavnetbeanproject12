#include<iostream.h>
#include<conio.h>
void main()
{
     struct e{
       int bell;
       char name[23];
       int count;
       };
       struct e raghav[6];
	   int a;
	   clrscr();
     for(a=0;a<5;a++)
     {
     cout<<"\n enter name ";
     cin>>raghav[a].name;
     cout<<"\n enter bellat number";
     cin>>raghav[a].bell;
     raghav[a].count=0;
     }
     clrscr();
     lable1:
     clrscr();
     cout<<"candidate name \t bellet number  \n ";
     for(a=0;a<6;a++)
     {cout<<raghav[a].name<<" \t"<<raghav[a].bell;
     cout<<"\n";
     }
     int z;
     cout<<"enter bellet number";
     cin>>z;
     if(z>6)
     { raghav[5].count++;
     }
     else
     {
	 for(a=0;a<6;a++)
	 {
	  if(raghav[a].bell==z)
	    {    raghav[a].count++;
		}
	 }
     }
     int d;
    cout<<"press 1 to give another vote  \n press 2 to exit   ";
    cin>>d;

   if(d==1)
   { goto lable1;

   }
   else
   {
       for(a=0;a<6;a++)
       {cout<<raghav[a].name<<" \t"<<raghav[a].count;
	cout<< "\n";
       }
   }
 getch();
}