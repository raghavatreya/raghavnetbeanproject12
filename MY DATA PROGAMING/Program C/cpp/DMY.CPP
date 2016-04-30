#include<conio.h>
#include<iostream.h>
class date
{
       int day,month,year;
       public:
	     void d()
	     {
		cout<<"enter the valueof date\t month \t year"<<"\n";
	       cin>>day>>month>>year;
	     }
	     void show()
	     {
	       cout<<day;
	       da();
	       dat();
	       cout<<year;
	     }

	      void da()
	      {    if(day==1  || day==21 ||day==31)
		     {
			cout<<"st ";
		     }
		  else if(day==2  || day==22)
		    {
		       cout<<"nd ";
		    }
		  else if(day==3  || day==23)
		     {
		      cout<<"rd ";
		     }
		     else
		     {
		       cout<<"th ";
		     }
	      }

	     void dat()
	     {
		switch(month)
		  {
		      case 1:
				 cout<<"jan.";
				 break;
		    case 2:
				  cout<<"feb.";
				  break;

		    case 3:       cout<<"march";
				  break;

		    case 4:      cout<<"april";
				  break;

		    case 5:	  cout<<"may";
				  break;

		    case 6:
				  cout<<"june";
				  break;

		    case 7:		  cout<<"july";
				  break;

		      case 8:		  cout<<"august";
				  break;

			 case 9:	  cout<<"sep.";
				  break;

		     case 10:	  cout<<"oct.";
				  break;

		       case 11:		  cout<<"nove.";
				  break;

			case 12:	  cout<<"december";
				  break;
		       default : cout<<"enter proper month numbe\n\n\n";
				    break;

			       }
			    }
    };
    void main()
    {      clrscr();

	  date v;
	  v.d();
	  v.show();
	   getch();
    }











