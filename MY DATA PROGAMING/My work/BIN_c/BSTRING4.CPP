#include <stdio.h>
#include <conio.h>
void main()
{
	char a[50],b[50],n[]=" ";
	int i,l=0,c=0,d=0;
	clrscr();
	printf("\n\nEnter Any Sentence :");
	gets(a);
	printf("\n\nEnter Searching Word :");
	gets(b);
	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]==' ')
		l++;
	}
	for(i=0;a[i]!=NULL;i++)
	{
		for(;a[i]!=' ';i++)
		{
			n[i]=a[i];
		}
		for(i=0;n[i]!=NULL;i++)
		{
			if(n[i]==b[i])
			c++;
			else
			d++;
		}
		if(d>0)
			printf("not found");
		else
			printf("found");
	}


}
