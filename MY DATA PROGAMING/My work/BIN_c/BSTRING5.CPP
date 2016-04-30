#include <stdio.h>
#include <conio.h>
void main()
{
	char a[20];
	int j,i;
	char k;
	clrscr();
	printf("\n\nEnter Any Word :");
	gets(a);

	for(j=0;a[j]!=NULL;j++)
	{
		for(i=j+1;a[i]!=NULL;i++)
		{
			if(a[j]>a[i])
			{
			       k=a[j];
			       a[j]=a[i];
			       a[i]=k;
			}
		}
	}
	for(j=0;a[j]!=NULL;j++)
	{
		printf("%c",a[j]);
	}
}
