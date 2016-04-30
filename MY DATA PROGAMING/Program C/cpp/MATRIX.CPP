#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	void matrix(int r,int c);
	clrscr();
  int c,r;
  cout<<"enter width  row and column ";
  cin>>r>>c;
  matrix(r,c);
  getch();

}
void matrix(int r, int c)
{ int i,j;
  int a[25][25];
  for(i=1;i<=r;i++)
  {  for(j=1;j<=c;j++)
      { cout<<"enter the value of a["<<i;
       cout<<"][" <<j;
       cout<<"]\n";
	cin>>a[i][j];
      }

  }
  for(i=1;i<=r;i++)
  {  for(j=1;j<=c;j++)
      { cout<<"  ";
	cout<<a[i][j];
      }
     cout<<"\n";
  }


}
