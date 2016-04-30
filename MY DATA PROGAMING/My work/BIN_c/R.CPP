#include<iostream.h>
#include<conio.h>
void main()
{  int name;
  float cha,consumeunit;
   clrscr();
       int x,y;

     cout<<"enterlower limit\n\n ";
      cin>>x;
      cout<<"enter upperlimt\n\n ";
      cin>>y;
     int z=y-x;
     if(z<=100)
     {
     cha=z*.6;
     }
     if(z<=300 && z>100)
     {cha=(z-100)*.8+100*.6;
     }
     if(z>300)
     {cha=(z-300)*.9+200*.8+100*.6;
     }

     if( cha<=300)
     {
     cout<<"your bill is "<<(cha+50);
     }
     if(cha>300)
     {
     cout<<"your bill is "<<((cha+50)*1.15);
     }

 getch();


 }

