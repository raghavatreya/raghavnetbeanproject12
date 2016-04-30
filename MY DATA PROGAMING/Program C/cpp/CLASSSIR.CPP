#include <iostream.h>
#include <conio.h>
#include <string.h>
class student
{
	int r;
	char name[10];
	public:
		void setroll(int ro)
		{
			r = ro;
		}
		void setname(char *n)
		{
			strcpy(name,n);
		}
		int getroll()
		{
			return r;
		}
		char *getname()
		{
			return name;
		}
};
void main()
{
	student s[3];
	clrscr();
	int r,i;
	char n[10];
	cout<<"\nEnter Three Students Details\n";
	for(i=0;i<3;i++)
	{
		cout<<"\nEnter Roll No. : ";
		cin>>r;
		cout<<"\nEnter Name : ";
		cin>>n;
		s[i].setroll(r);
		s[i].setname(n);
	}
	cout<<"\n\nThree Students Details Are \n\n";
	for(i=0;i<3;i++)
	{
		cout<<"\n\nRoll No. is : "<<s[i].getroll();
		cout<<"\n\nName is : "<<s[i].getname();
	}
	int rol;
	int p=0;
	cout<<"\nEnter Roll No. to Search Students Name : ";
	cin>>rol;
	for(i=0;i<3;i++)
	{
		if(s[i].getroll()==rol)
		{
			cout<<"\nName is : "<<s[i].getname();
			p=1;
		}
	}
	if(p==0)
		cout<<"\n\nInvalid Roll No.";
}