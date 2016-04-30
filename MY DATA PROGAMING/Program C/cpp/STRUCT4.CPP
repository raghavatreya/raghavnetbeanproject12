#include <stdio.h>
#include <conio.h>
struct customer
{
	int an,b;
	char n[15];
};
void main()
{
	struct customer c[2];
	int i,r,a,as,cb;
	int code;
	clrscr();
	printf("\n\nEnter Account Number : ");
	for(i=0;i<2;i++)
		scanf("%d",&c[i].an);

	printf("\n\nEnter Name : ");
	for(i=0;i<2;i++)
		scanf("%s",&c[i].n);

	printf("\n\nEnter Account Balance Rs. :");
	for(i=0;i<2;i++)
		scanf("%d",&c[i].b);

	printf("\n\nCustomer Detail Which Balance Below Rs. 100");
	for(i=0;i<2;i++)
	{
		if(c[i].b < 100)
		{
			printf("\n\nAccount Number : %d",c[i].an);
			printf("\n Name : %s",c[i].n);
		}
	}
	printf("\n\nEnter Your Account Number :");
	scanf("%d",&a);
	for(i=0;i<2;i++)
	{
		if(c[i].an==a)
		{
			printf("\nCode(1 for deposit,0 for withdrawal) : ");
			scanf("%d",&code);
			if(code==0)
			{
				if(c[i].b<100)
				{
					printf("\n*** not withdrawal***");
					break;
				}
			}

			printf("\nEnter Amount Deposit OR withdrawal : ");
			scanf("%d",&r);
			if(code==0)
			{
				if(r>c[i].b)
				{
					printf("\n***The Balance Is insufficient For The Specified withdrawal***");
				}
				else
				{
					printf("\n\nSuccessfull");
					cb=c[i].b-r;
					printf("\n\nYour Current Balance Is : %d",cb);
				 }
			}
			if(code==1)
			{
				printf("\n\n Successfull");
				as=c[i].b+r;
				printf("\n\n Your Current Balance Is : %d",as);
			}
		}
	}

	getch();
}
