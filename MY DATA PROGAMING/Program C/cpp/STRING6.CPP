#include <stdio.h>
#include <conio.h>
void main()
{
	char a[10];
	int i,l=0,n=0;
	clrscr();
	printf("\n\nEnter Your Name :");
	gets (a);
	for(i=0;a[i]!=NULL;i++)
		l++;
	i=0;
	for(;l>=0;l--)
	{
		if(a[l-1]==a[i])
		{
			i++;
		}
		else
			n++;
	}
	if(n>0)
		printf("\n\nString Is Not Pallendrum");
	else
		printf("\n\nString Is Pallendrum");
		getch();
}