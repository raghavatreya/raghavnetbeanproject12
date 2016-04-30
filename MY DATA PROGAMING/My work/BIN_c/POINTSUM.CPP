#include<iostream.h>
#include<conio.h>
class flip
{
    public:
    void get(int *s, int *g)
    {
	 *s = *s + *g;
	 *g = *s - *g;
	 *s = *s - *g;

    }

};
void main()
{ clrscr();
  int a[5];
  int  *p,i,j=0;
  p=a;
  for(i=0;i<5;i++)
  { cout<<"\n\n Enter value of a["<<i<<"]   : ";
    cin>>a[i];  // i am  unable  to access by p+i
  }
  int sum=0;
  for(i=0;i<5;i++)
  {  sum = sum + *(p+i);
  }
  cout<<" \n Sum of  \n\n : " <<sum;
  float avg;
  int *w;
  w=&sum;
  avg=(float)*w/5;
  cout<<"\n\n Average of marks is :\n "<<avg;
  cout<<"\n\n**********  MAXIMUM NUMBER**************\n\n";
  int b;
  int *h;
  h=&b;
  b=a[0];
  for(i=0;i<5;i++)
  {
    if(*h < *(p+i))
    {
      *h=*(p+i);
    }
  }
  cout<<"  max number \n :"<<*h;
  cout<<"\n *** ENter number of which you want to find index";
  cin>>*h;
  for(i=0;i<5;i++)
  {
    if(*h == *(p+i))
    {  j=1;
      cout<<"\n Enter number's index is\n" <<i;
    }
  }
  if(j==0)
  {
   cout<<"\n****************Enter   number  number is invalid **********\n";
  }
  cout<<"\n\n***********sorting of array*********\n\n";
  int *q;
  q=a;
  for(i=0;i<5;i++)
  {
     for(j=0;j<5;j++)
     {
	  if(*(p+i) > *(q+j))
	  {
	      *(p+i) = *(p+i) + *(q+j);
	      *(q+j) = *(p+i) - *(q+j);
	      *(p+i) = *(p+i) - *(q+j);
	  }
     }

  }
  for(i=0;i<5;i++)
  {
   cout<<"\n\n Enter value of a["<<i<<"]   : "<<*(p+i);
  }
   int x,y;
   flip s;
   cout<<"\n Enter two  intger number A\n B";
   cin>>x>>y;
   s.get(&x,&y);
   cout<<"flip number is A"<<x<<"\nB"<<y;
  getch();
}