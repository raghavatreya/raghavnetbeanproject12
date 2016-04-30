
#include <stdio.h>
#include <conio.h>
void main()
{
	char a[10];
	char n;
	int i,l=0;
	clrscr();
	printf("\n\nEnter Your Name : ");
	gets(a);
	printf("\n\nSearching Character :");
	scanf("%c",&n);
	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]==n)
		   l++;
		else
		   l;
	}
	if(l>0)
		printf("\n\nCharacter Is Presents In Name ");
	else
		printf("\n\nCharacter Not Found ");
}