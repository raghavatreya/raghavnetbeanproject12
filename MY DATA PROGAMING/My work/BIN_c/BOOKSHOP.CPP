#include<iostream.h>
#include<conio.h>
#include<string.h>
class book_shop\{
	public:
		char s[23];
		char *author;
		char title[23];
		char publisher[23];
		int stock;
		float price;
	public:
	 void getauthor()
	 {
	    cout<<"\n enter author  name \n:";
	    cin>>s;
	     int l;
	     l=strlen(s);
	     author=new char[l+1];
	    strcpy(author,s);
	 }
	 void getpublisher()
	 {
	    cout<<"\n enter publisher name\n:";
	    cin>>publisher;
	 }
	 void gettitle()
	 {
	    cout<<"enter title name  \n:";
	    cin>>title;
	 }
	 void getstock()
	 {
	   cout<<"\nenter book number in stock:\n";
	   cin>>stock;
	 }
	 void getprice()
	 {
	   cout<<"\n enter book price :\n ";
	   cin>>price;
	 }

};
void main()
{ clrscr();
  char q[23],w[23];
  book_shop a[3];
  int i,g,j=0,k=0,d;
  for(i=0;i<3;i++)
  {
    a[i].gettitle();
    a[i].getauthor();
    a[i].getpublisher();
    a[i].getstock();
    a[i].getprice();
  }
  cout<<"\n\nenter title name of book you want\n:";
  cin>>q;
  cout<<"\n\nenter the name of book author\n: ";
  cin>>w;
  for(i=0;i<3;i++)
  {
     if(strcmp(a[i].title,q)==0)
     {


	    if(strcmp(a[i].author,w)==0)
		{
		    cout<<"detil of book are :"<<a[i].title;
		    cout<<"\nauthor :"<<a[i].author;
		    cout<<"\n price :"<<a[i].price;
		     cout<<"\n book in stock are :"<<a[i].stock;
		     cout<<"\n publisher :"<<a[i].publisher;
		     cout<<"\n how many copy of this book you want to buy \n:";
		     cin>>j;
		     k=1;
			    if(a[i].stock>=j)
				 {
					 cout<<"bill is :"<<a[i].price*j;
					 cout<<"\n\n********************\n";
					 a[i].stock=a[i].stock-j;
				  }
			     else
				  {

					  cout<<"****required copies are not available***";
				  }
	       }

	}

  }
  if(k!=1)
  {
    cout<<"**this book is not in stock**";
  }
  getch();
}