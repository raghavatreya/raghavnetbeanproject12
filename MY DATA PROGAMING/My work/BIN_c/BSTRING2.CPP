#include <stdio.h>
#include <conio.h>
void main()
{
	char a[30],b[30];
	char c[]="giriraj";
	int i,n=0,m=0,k=0;
	clrscr();
	printf("\n\nWho Is The Invertor Of C ? ");
	for(k=0;k<3;k++)
	{
		m=0;n=0;
		printf("\n\nEnter Your Answer :");
		gets(b);
		for(i=0;b[i]!=NULL;i++)
		{
			if(b[i] == c[i])
			n++;
			else
			m++;
		}
		if(m>0)
			printf("\nTRY AGAIN");
		else
		{
			printf("\nGOOD");
			break;
		}
	}
	if(k=3)
		printf("\n\nCORRECT ANSWER IS : giriraj");
}