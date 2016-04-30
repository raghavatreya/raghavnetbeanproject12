#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
	char a[50]=" ",b[10]=" ",c[]=" ";
	char g[10]=" ";
	int i,j,k=0,h,t=0,count=0;
	int d[4];
	clrscr();
	printf("\n\nEnter Any Sentence :");
	gets(a);
	printf("\n\nEnter Searching Word :");
	gets(b);
	for(i=0;a[i]!=NULL;i++)
	{
		if(b[0]==a[i])
		{  d[k]=i;
		   k++;
		 }
	}
	k=strlen(b);
	for(h=0;h<4;h++)
	{
	   for(i=d[h],t=0;i<=(d[h]+k);t++,i++)
	   {  g[t]=a[i]; }
	   if(strcmp(g,b)==0)
	   {  count++; }
	}
     printf("\n\n********* %d",count);
  }
