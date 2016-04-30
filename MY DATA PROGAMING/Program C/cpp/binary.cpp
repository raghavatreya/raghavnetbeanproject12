#include<stdio.h>
#include<conio.h>
#include<string.h>
class raghav
{
	int i,j,g,A[8];
	 raghav()
	 {j=7;
	 for(i=0;i<8;i++)
	 A[i]=0;
	 }
	public void getnum()
	{ 
		printf("Enter the number \n");
		scanf("%d",&g);
		for(i=g;i>0;i/2)
		{if(i%2==0)
		 {A[j]=0;
		 }
		 else
		 {A[j]=1;
		 }
		 j--;
		}
		puts(A);
	}
	
} 
int main()
{
	int i,j,k;
    raghav r1,r2;
	r1.getnum();
	r2.getnum();  
	getch();
	return 0;
}
