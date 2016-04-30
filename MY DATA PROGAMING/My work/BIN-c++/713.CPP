#include<iostream.h>
#include<conio.h>
class MAT
{   int m,n;
    int **M;
    public:
	   MAT()
	   {  cout<<"enter value of raw\n";
	      cin>>m;
	      cout<<"\nenter value of column \n";
	      cin>>n;
	      int i,j,p;
	      M=new int *[m];
	      for(i=0;i<m;i++)
	       {
			M[i]=new int [n];
			 for(j=0;j<n;j++)
			{
					cout<<"enter value of a["<<i+1<<"]["<<j+1<<"] th element";
					cin>>M[i][j];

			   }
			 if(m==i+1)
			 {
					 cout<<"****raw no*****************sum of raw***********\n\n";
					 i=1;
					 p=1;
				while(m>=i)
				 {
						cout<<"\t"<<p<<"\t\t"<<M[i][1]+M[i][2]+M[i][3]<<"\n";
							p=p+1;
							i=i+1;
				  }
					  j=1;
					  p=1;
			  cout<<"*******column****************sum of colomn**********\n\n";
				while(n>=j)
				 { cout<<"\t"<<p<<"\t\t"<<M[1][j]+M[2][j]+M[3][j]<<"\n";
					p=p+1;
					j=j+1;
				 }
		}
	   }
	   }
};
void main()
{
  clrscr();
  MAT q;
  getch();
}