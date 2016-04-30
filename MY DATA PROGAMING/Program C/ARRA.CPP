#include<iostream.h>
#include<conio.h>
#define M 3
#define N 6
class Array{
int A[M],i,j,B[N];
	public:
	Array()
	{
		for(i=0;i<M;++i)
		{
		     A[i]=0;
		}
	}
	void getdata()
	{
	  for(i=0;i<M;++i)
	  {
	    cout<<"Enter The Element\n";
		cin>>A[i];
	  }
	  clrscr();
	}
	void printdata()
	{
	  cout<<"\n";
	  for(i=0;i<M;++i)
	  {
	      cout<<"\t"<<A[i];
	  }
	  cout<<"\n";
	}
	void printdata(int a)
	{
	cout<<"\n";
	  for(i=0;i<M;++i)
	  {
	      cout<<"\t"<<B[i];
	  }
	  cout<<"\n\n";
	}
	void search()
	{
		cout<<"\nEnter An Element\n";
		cin>>j;
		for(i=0;i<M;++i)
		{
		  if(A[i]==j)
		  {
		     cout<<"\n!!!!! Match is found";
		    return;
		  }
		}
		cout<<"\n!!!!!! MAtch is not found";
	}
	void reverse()
	{
		int temp;
		for(i=0;i<=M/2;++i)
		{
	//	  for()
		  temp = A[i];
		  A[i] = A[M-i];
		  A[m-i] = temp;
		}
	}
	void merge(Array temp)
	{
	   //int B[N];
		  for(i=0;i<N;++i)
				{
					if(i<3)
				    B[i]=A[i];
					else
					B[i]=temp.A[i];
				}

	}
	void sortAss()
	{int temp;
			  for(i=0;i<M;++i)
				{
				   for(j=0;j<M;++j)
				  {	if(A[i]>A[i+1])
					{
					 temp = A[i];
					 A[i]=A[i+1];
					 A[i+1]=temp;
				   }	}
				}

	}
	void sortDss()
	{int temp;
			  for(i=0;i<M;++i)
				{
				  for(j=0;j<M;++j)
					{	if(A[i]<A[i+1])
					   {
					    temp = A[i];
					    A[i]=A[i+1];
					    A[i+1]=temp;
					    }
				   }	
				}

	}

};
void main()
{
clrscr();
Array A1,A2,A3;
A1.getdata();
A1.sortDss();
A1.printdata();
A1.sortAss();
A1.printdata();
cout<<"\n Merge two Array\n Enter Second Array\n";
A2.getdata();
A1.merge(A2);A1.printdata(N);
A1.search();
cout<<"\nReverse An Array\n";
A1.reverse();
getch();
}