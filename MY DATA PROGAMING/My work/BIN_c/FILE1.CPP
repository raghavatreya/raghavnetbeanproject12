#include <stdio.h>
#include <conio.h>
int main()
{
	FILE *fp;
	char ch;
	int nol=0,not=0,nob=0,noc=0;

	fp = fopen("giriraj.txt","r");
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
			break;
		noc++;
		if(ch==' ')
			nob++;
		if(ch=='\n')
			nol++;
		if(ch=='\t')
			not++;
	}
	fclose(fp);
	printf("Number Of Characters = %d\n",noc);
	printf("Number Of Blanks = %d\n",nob);
	printf("Number Of Tabs = %d\n",not);
	printf("Number Of Lines = %d\n",nol);
	return 0;
}