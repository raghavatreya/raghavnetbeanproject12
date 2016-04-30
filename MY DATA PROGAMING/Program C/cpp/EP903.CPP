#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
class city
{
  protected:
  char *name;
  int len;
    public:
    city()
    {  len=0;
	name=new char [len+1];
    }
    void getname()
    {   char s[20];
	cout<<" \n\n Enter the name of city\n\n";
	cin>>s;
	//len=strlen(*s);
	name=new char [20 +1];
	strcpy(name,s);
    }
    void printname()
    {
       cout<<"\n\n Entered name is \n\n\n"<<(*name);
    }

};
void main()
{  clrscr();
  city *cptr[10];
  int n=1,i;
  int option;
  do
  {
    cptr[n]=new city;
   (*cptr[i]).getname();
    n++;
    cout<<"DO you wanna Enter a another name\n\n press 1 for yes & 0 for no";
    cin>>option;

  }
  while(option);
    cout<<"\n\n\n";
       for(i=1;i<n;i++ )
		  {
		   (*cptr[i]).printname();
		  }
  getch();
}