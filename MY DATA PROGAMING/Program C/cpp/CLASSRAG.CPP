#include<iostream.h>
#include<conio.h>
class raghav
{     int a,b,c,d;
       public:
	     void twodigit()
	     {    cout<<"enter number";
		  cin>>a;

		  d=a/10;
		  c=a%10;
	     }

	     void wr()
	     {
		   if(a>19)
		    {
			switch(d)
			{
				 case 2:    cout<<"twenty ";
				      break;
				 case 3:   cout<<"thirty " ;
				      break;
				 case 4:    cout<<"fourty ";
				     break;
				 case 5:     cout<< "fifty ";
				      break;
				 case 6:   cout<< "sixty ";
				      break;
				 case 7:   cout<< "seventy ";
				      break;
				 case 8:    cout<<"eighty ";
				      break;
				case 9:    cout<< "ninety ";
				     break;

		      }
			switch(c)
		     {
				case 1:        cout<<"one";
					break;
				case 2:	        cout<<"two";
					 break;
				case 3:	         cout<<"three";
					 break;
				case 4:	         cout<<"four";
					  break;
				case 5:	        cout<<"five";
					break;
				case 6:	       cout<<"six";
					 break;
				case 7:	     cout<<"seven";
				     break;
				case 8:	     cout<<"eight";
				     break;
				case 9:	   cout<<"nine";
				   break;

		    }
		  }
		  else
		   {
		     switch(a)
			 {
				case 10:   cout<<"ten";
					break;
				 case 11: cout<<"elevevn";
					 break;
				case 12: cout<<"twelve";
					break;
				  case 13: cout<<"thirteen";
				    break;
				case 14: cout<<"fourteen";
					break;
				case 15: cout<<"fiftteen";
					break;
				case 16: cout<<"sixteen";
					 break;
			       case 17: cout<<"seventeen";
					break;
				case 18: cout<<"eighteen";
					 break;
				case 19: cout<<"nineteen";
					 break;
			 }
		   }



	     }
};
void main()
{ raghav m ;
  clrscr();
 m.twodigit();
 m.wr();
getch();
}