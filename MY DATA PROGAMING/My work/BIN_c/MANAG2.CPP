#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<string.h>
void main()               iii
{
clrscr();
  int i,j=0,k=0,l=0;
  char a[123];
  cout<<"Enter text";
  cin.getline(a,123);
	 for(i=0;a[i]!='\0';i++)
	  {
		 if(a[i]=='\t')
		{ j++;
		}
	  }
	 for(i=0;a[i]!='\0';i++)
	  {
		  if(a[i]==' ')
		{ l++;
		 }
	  }
	  k=strlen(a);
    cout.width(25);
    cout<<"NUMBER OF TABS";

    cout.width(5);
    cout<<j<<"\n";

    cout.width(25);
    cout<<"NUMBER OF WORDS";

    cout.width(5);
    cout<<l<<"\n";

    cout.width(25);
    cout<<"NUMBER OF CHARCTER";

    cout.width(5);
    cout<<k<<"\n";
getch();
}