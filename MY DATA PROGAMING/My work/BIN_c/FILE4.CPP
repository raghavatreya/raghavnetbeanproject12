#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	FILE *fp;
	char s[80];
	clrscr();
	fp=fopen("giriraj.txt","r");
	if(fp==NULL)
	{
		puts("Cannot Open File ");
		exit(1);
	}
	while(fgets(s,79,fp)!=NULL)
		printf("%s",s);
	printf("\n");
	fclose(fp);
	return 0;
}