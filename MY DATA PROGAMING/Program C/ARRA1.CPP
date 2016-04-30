//#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#define M 3
class Array{
    int A[M][M],i,j;
	   public:
	   Array()
	   {


	       for(i=0;i<M;++i)
	       {
		 for(j=0;j<M;++j)
		 {
		 A[i][j]=0;
		 }
	       }
	   }
	   void getdata()
	   {
	    for(i=0;i<M;++i)
	    {
	       for(j=0;j<M;++j)
	       {
		cout<<"Enter The Element\n";
		cin>>A[i][j];
	       }
	     }
	    }
	   void printdata()
	   {
	      cout<<"Elemnet Are";
	     // for()
	      for(i=0;i<M;++i)
	    {
	      cout<<"\n";
	       for(j=0;j<M;++j)
	       {
		// cout<<"\n The Element\n";
		  cout<<A[i][j]<<"\t";
	       }
	       cout<<"\n";
	     }
	   }
	 void Addition(Array temp,Array temp1)
	 {
		for(i=0;i<M;++i)
	       {
		 for(j=0;j<M;++j)
		{
		 A[i][j] =temp1.A[i][j]+temp.A[i][j];
		}
	     }
	 }
	 void Maultiplication(Array temp, Array temp1)
	 {   int a,b,c;
	    for(i=0;i<M;++i)
	    {
	       for(j=0;j<M;++j)
	       {
		       if(j == 0)
		       {
			 a=0;b=1;c=2;
		       }
		       else if(j == 1)
		       {
			 a=1;b=2;c=0;
		       }
		       else
		       {
			 a=2;b=0;c=1;
		       }

		A[i][j] = temp1.A[i][a]*temp.A[a][j]+
	       temp1.A[i][b]*temp.A[b][j] + temp1.A[i][c]*temp.A[c][j];

	      }
	     }
	 }
	 void Determinant()
	 {
	    int a=1,b=0,c=2,d=0,sum=0;
		for(i=0;i<M;++i)
			{        j=0;
		      //	for(j=0;j<M;++j)
		      //		       {
			if(i==0)
							{b=1;
							d=2;}
						if(i==1)
							{b=2;
							  d=0;}
						if(i==2)
							{b=0;
							  d=1;}
					if(i%2!=0)
					sum -= A[j][i] * (A[a][b]*A[c][d] - A[a][d]*A[c][b]);
					else
					sum += A[j][i] * (A[a][b]*A[c][d] - A[a][d]*A[c][b]);
					//++c;
					cout<<"\n DEterminant is "<<sum;
			}
			//  }

			cout<<"\n DEterminant is "<<sum;
	 }
	 void minfunction()
	 {
	   int rowmin[M],rowmax[M],colmin[M],colmax[M],rowsum[M]={0},colsum[M]={0};
	   int digsum=0,revsum=0;
	   for(i=0;i<M;++i)
	   {
	     rowmin[i] = A[i][0];
	     rowmax[i] = A[i][0];
	     colmin[i] = A[0][i];
	     colmax[i] = A[0][i];
	   }
	   for(i=0;i<M;++i)
	   {
		for(j=0;j<M;++j)
		{
		  if(rowmin[i] > A[i][j])
		  {
		    rowmin[i] = A[i][j];
		  }
		  if(rowmax[i] < A[i][j])
		  {
		    rowmax[i] = A[i][j];
		  }
		  if(colmax[j] < A[i][j])
		  {
		    colmax[j] = A[i][j];
		  }
		  if(colmin[j] > A[i][j])
		  {
		    colmin[j] = A[i][j];
		  }
		}
	   }
	   cout<<"\n Minimum column \n";
	   for(i=0;i<M;++i)
	   {
	      cout<<"\n"<<colmin[i];
	   }
	   cout<<"\nMinimun row\n";
	   for(i=0;i<M;++i)
	   {
	     cout<<"\n"<<rowmin[i];
	   }
	   cout<<"Maxmun row";
	   for(i=0;i<M;++i)
	   {
	     cout<<"\n"<<rowmax[i];
	   }
	   cout<<"\n Maxmun col ";
	   for(i=0;i<M;++i)
	   {
	      cout<<"\n"<<colmax[i];
	   }

	   for(i=0;i<M;++i)
	   {
	     for(j=0;j<M;++j)
	     {
	       if(i==j)
	       {
		 digsum += A[i][j];
	       }
	       if(i+j == M-1)
	       {
		 revsum += A[j][i];

	       }
	     //  cout<<"\n"<<revsum;
	     }
	   }
	   cout<<"\n dignal sum"<<digsum;
	   cout<<"\n reverse sum"<<revsum;
	  // int  rowsum[M]={0},colsum[M]={0};
	   for(i=0;i<M;++i)
	    {
	      for(j=0;j<M;++j)
	      {
		rowsum[i] +=A[i][j];
		colsum[j] +=A[i][j];
	      }
	     }
	     cout<<"\ncol sum\n";
	     for(i=0;i<M;++i)
	     {
	       cout<<"\n"<<colsum[i];
	     }
	     cout<<"\n row sum\n";
	     for(i=0;i<M;++i)
	     {
	       cout<<"\n"<<rowsum[i];
	     }

	 }
	 void transpose()
	 { int temp;
		for(i=0;i<M;++i)
			{
				for(j=i;j<M;++j)
				{
				   temp=A[i][j];
					A[i][j]=A[j][i];
					A[j][i]=temp;	
				}
			}
	 
	 }
};
void main()
{
  Array A1,A2,A3;
  clrscr();
  cout<<"Enter Element of First Array\n";
  A1.getdata();/*
  A1.minfunction();
//  A1.printdata();

  cout<<"Enter Element of Second Array\n";
  A2.getdata();
  cout<<"\n After Addition DAta Are \n";
  A3.Addition(A2,A1);
  A3.printdata();
  cout<<"\n After Multiplication Data are\n";
  A3.Maultiplication(A2,A1);
  A3.printdata();
  cout<<"Printing Transpose of A MAtrix \n";
  A1.transpose();
  A1.printdata();*/
  A1.Determinant();
  
  getch();
}